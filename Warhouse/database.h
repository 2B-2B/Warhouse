#pragma once
#include <iostream>
#include <string>
#include "sqlite3.h"
#include <msclr\marshal_cppstd.h>


// Calback function that acts as a placeholder does nothing important
inline int successCallback(void* unused, int count, char** data, char** columns) {
	std::cout << std::endl;

	int* thing = reinterpret_cast<int*>(unused);

	*thing = 12;
	return 0;
}





// When Data is pulled from the database formats and displays in a readable form
inline int my_special_callback(void* unused, int count, char** data, char** columns)
{
	int idx;

	std::cout << "There are" << count << "column(s)\n";

	for (idx = 0; idx < count; idx++) {
		std::cout << "The data in column " << columns[idx] << " is: " << data[idx] << std::endl;
	}

	std::cout << "\n";

	return 0;
	
}


// Creates the database if it does not exists, and creates the table to store the user data
 inline void StartDB() {
		sqlite3* wareHouseDB;
		
		char *errMsg;
		int check;
		char* sql;

		check = sqlite3_open("wareHouseDB", &wareHouseDB);

		if (check) {
			std::cout << "Database Initalization Failed" << std::endl << sqlite3_errmsg(wareHouseDB);
		}
		else {
			std::cout << "Database Initalization Successful" << std::endl;

			sql = "CREATE TABLE users (username VARCHAR(30),password VARCHAR(30), clearance VARCHAR(30), street VARCAR(30), province VARCHAR(2), postal VARCHAR(6));";
			int cheese;
			sqlite3_exec(wareHouseDB,sql,successCallback,&cheese, &errMsg);


			sql = "SELECT * FROM users;";

			sqlite3_exec(wareHouseDB, sql, my_special_callback, 0, &errMsg);

			sqlite3_free(errMsg);
			sqlite3_close(wareHouseDB);
		}
		
	}


 // Gets the username and password entered into the GUI and processes it and checks it agains the database if it matches a database entry then access is granted.
 inline bool login(std::string username, std::string password) {

	 sqlite3* wareHouseDB;

	 char* errMsg;
	 int check;
	 char* sql;

	 std::string userName = username;
	 std::string passWord = password;
	 std::string statement = "SELECT * FROM users WHERE username='";
	 
	 statement += userName + "' AND password='" + passWord + "';";

	 char hold[100];

	 std::cout << "\n" << statement;

	 strcpy(hold, statement.c_str());

	 check = sqlite3_open("wareHouseDB", &wareHouseDB);

	
	 if (check) {
		 std::cout << "Login Initalization Failed" << std::endl << sqlite3_errmsg(wareHouseDB);
	 }
	 else {
		 std::cout << "Login Initalization Successful" << std::endl;

		 sql = hold;
		 struct sqlite3_stmt* rowExists;
		 check = sqlite3_prepare_v2(wareHouseDB, sql,-1, &rowExists,NULL);

		 if (check == SQLITE_OK) {


			 if (sqlite3_step(rowExists) == SQLITE_ROW){
					sqlite3_finalize(rowExists);
					sqlite3_close(wareHouseDB);
					std::cout << "Access Granted" << std::endl;
					return true;
					}
			 else{
					sqlite3_finalize(rowExists);
					sqlite3_close(wareHouseDB);
					std::cout << "Access Denied";
					return false;
				 }
		 }
	 }

  }


 // Gets all the information from the GUI and adds the data to the database allowing a new user to login.
 inline bool addUsertoDB(std::string username, std::string password, std::string clearance, std::string address, std::string province, std::string postal) {

	 sqlite3* wareHouseDB;

	 char* errMsg;
	 int check;
	 char* sql;

	 std::string userName = username;
	 std::string passWord = password;
	 std::string statement = "INSERT INTO users (username , password , clearance , street , province, postal) VALUES ('";

	 statement += userName + "','" + passWord + "','" + clearance + "','" + address + "','" + province + "','" + postal + "');";
	 std::cout << statement << "\n";
	 char hold[100];

	 strcpy(hold, statement.c_str());

	 sql = hold;

	 check = sqlite3_open("wareHouseDB", &wareHouseDB);

	 if (check) {
		
		 std::cout << "Add User Database Interface Failed";
	 }
	 else {
		 std::cout << "Add User Database Interface Succeeded";
		 check = sqlite3_exec(wareHouseDB, sql,my_special_callback,0,&errMsg);

		 if (!check) {
			 std::cout << "User Added Successfully To Database!" << std::endl;
			 sqlite3_free(errMsg);
			 sqlite3_close(wareHouseDB);
			 return true;
		 }
		 else {
			 std::cout << "Failed to Add user" << std::endl;
			 sqlite3_close(wareHouseDB);
			 return false;
		 }
	 }
 
 }