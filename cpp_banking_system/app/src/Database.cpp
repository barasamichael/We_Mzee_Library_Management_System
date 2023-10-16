#include "Database.h"

Database::Database(const std::string& host, const std::string& username,
		const std::string& password, const std::string& database)
	: host(host), username(username), password(password), database(database){}


Database::~Database()
{
	if (connection)
	{
		delete connection;
		connection = nullptr;
	}
}


bool Database::connect()
{
	try
	{
		driver = get_driver_instance();
		connection = driver->connect("tcp://" + host, username, password);
		connection->setSchema(database);
		return true;
	}
	catch (sql::SQLException& error)
	{
		return false;
	}
}


bool Database::disconnect()
{
	if (connection)
	{
		delete connection;
		connection = nullptr;
		return true;
	}
	return false;
}


sql::Connection* Database::getConnection()
{
	return connection;
}
