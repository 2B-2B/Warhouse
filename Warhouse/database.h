

#include <iostream>
#include "sqlite3.h"




static int my_special_callback(void* unused, int count, char** data, char** columns)
{
	int idx;

	printf("There are %d column(s)\n", count);

	for (idx = 0; idx < count; idx++) {
		printf("The data in column \"%s\" is: %s\n", columns[idx], data[idx]);
	}

	printf("\n");

	return 0;
}




 inline void StartDB() {
		sqlite3* wareHouseDB;
		char *errMsg = 0;
		int check;
		char* sql;

		check = sqlite3_open("wareHouseDB", &wareHouseDB);

		if (check) {
			std::cout << "Database Initalization Failed" << std::endl << sqlite3_errmsg(wareHouseDB);
		}
		else {
			std::cout << "Database Initalization Successful" << std::endl;

			sql = "CREATE TABLE users (username VARCHAR(30),password VARCHAR(30), clearance VARCHAR(30), street VARCAR(30), province VARCHAR(2), postal VARCHAR(6));";

			sqlite3_exec(wareHouseDB,sql,my_special_callback,0, &errMsg);

			std::cout << errMsg << std::endl;

			sql = "INSERT INTO users ('username' , 'password' , 'clearance' , 'street' , 'province', 'postal') VALUES ('user1','pas123','admin','123street','ON','J4H6F5');";
			std::cout << "Table Created Successfully" << std::endl;
			sqlite3_exec(wareHouseDB, sql, my_special_callback, 0, &errMsg);

			std::cout << errMsg << std::endl;

			sqlite3_close(wareHouseDB);
		}
		
	}

