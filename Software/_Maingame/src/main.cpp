#include <iostream>
#include "sqlite3.h"
#include "sql.hpp"



// https://dcravey.wordpress.com/2011/03/21/using-sqlite-in-a-visual-c-application/
// https://www.tutorialspoint.com/sqlite/sqlite_c_cpp.htm
// http://www.w3schools.com/sql
// If you get a lot of '1's when executing a query, you might miss some parameters


int main( int argc, char* argv[]) {
	sql database;

	std::cout << "Checking CMD" << std::endl;
	
	//database.get_data("NPC", "id");

	//database.change_data("item", "name", "'apple'", "name", "banana");
	//database.execute_query("SELECT name FROM item ORDER BY id DESC");
	//database.add_data("item", "'Tokato gloves', 0, 20, 0, 60");
	database.get_data("item", "name", "name", "'shield'");

	//std::cout << database.get_result();
	//database.get_data("item", "name");

	while (1) {}
}