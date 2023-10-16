#include "Book.h"
#include "Database.h"
#include <iostream>
#include <mysql_driver.h>
#include <mysql_connection.h>

Book::Book(const std::string& title, const std::string& genres,
		const std::string& ISBN, int copies, int yearPublished,
		bool isAvailable)
	: title(title), genres(genres), ISBN(ISBN), copies(copies),
	yearPublished(yearPublished), isAvailable(isAvailable) {}


bool Book::addBook()
{
	Database db();
	if (db.connect())
	{
		try
		{
			sql::Statement* statement = db.getConnection()->createStatement();
			std::string query = "INSERT INTO book (title, genres, " +
				"ISBN, copies, yearPublished, isAvailable) " +
				"VALUES ('" + title + "', '" + genres + "', '" + 
				ISBN + "', " + std::to_string(copies) + ", " + 
				std::to_string(yearPublished) + ", " + 
				(isAvailable ? "1" : "0") + ")";

			statement->execute(query);
			delete statement;
			db.disconnect();
			return true;
		}
		catch (sql::SQLException& error)
		{
			std::cerr << "SQL Error: " << error.what() << std::endl;
		}
	}
	else
	{
		std::cerr << "Failed to connect to the database." << std::endl;
	}
	return false;
}


bool Book::removeBook(int bookId)
{
	Database db();
	if (db.connect())
	{
		try
		{
			sql::Statement* statement = db.getConnection()->createStatement();
			std::string query = "DELETE FROM book WHERE bookId = " +
				std::to_string(bookId);
			statement->execute(query);
			delete statement;
			db.disconnect();
			return true;
		}
		catch (sql::SQLException& error)
		{
			std::cerr << "SQL Error: " << error.what() << std::endl;
		}
	}
	else
	{
		std::cerr << "Failed to connect to the database." << std::endl;
	}
	return false;
}


std::vector<Book> Book::searchBook(const std::string& searchValue)
{
	std::vector<Book> result;
	Database db();

	if (db.connect())
	{
		try
		{
			sql::Statement* statement = db.getConnection()->createStatement();
			std::string query "SELECT * FROM book WHERE title LIKE '%"
				+ searchValue + "%' OR ISBN LIKE '%"
				+ searchValue + "%' OR bookId = " + searchValue;
			sql::ResultSet* resultSet = statement->executeQuery(query);

			while (resultSet->next())
			{
				Book book(
						resultSet->getString("title"),
						resultSet->getString("genres"),
						resultSet->getString("ISBN"),
						resultSet->getInt("copies"),
						resultSet->getInt("yearPublished"),
						resultSet->getBoolean("isAvailable"));
				result.push_back(book);
			}
			delete resultSet;
			delete statement;
			db.disconnect();
		}
		catch (sql::SQLException& error)
		{
			std::cerr << "SQL Error: " << error.what() << std::endl;
		}
	}
	else
	{
		std::cerr << "Failed to connect to the database." << std::endl;
	}
	return result;
}
