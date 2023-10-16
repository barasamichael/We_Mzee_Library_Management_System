#ifndef DATABASE_H
#define DATABASE_H

#include <cppconn/connection.h>
#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>
#include <string>

class Database
{
	public:
		Database(const std::string& host, const std::string& username, 
				const std::string& password, 
				const std::string& database);
		~Database();

		bool connect();
		bool disconnect();
		sql::Connection* getConnection();

	private:
		sql::Driver* driver;
		sql::Connection* connection;
		std::string host;
		std::string username;
		std::string password;
		std::string database;
};
#endif
