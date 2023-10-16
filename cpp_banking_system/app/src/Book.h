#ifndef BOOK_H
#define BOOK_H

#include <string>
#include <vector>

class Book
{
	public:
		Book(const std::string& title, const std::string& genres,
				const ISBN, int copies, int yearPublished,
				bool isAvailable);

		bool addBook();
		bool removeBook(int bookId);
		std::vector<Book> searchBook(const std::string& searchValue);

	private:
		std::string title;
		std::string genres;
		std::string ISBN;
		int copies;
		int yearPublished;
		bool isAvailable;
};
#endif
