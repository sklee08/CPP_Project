	#pragma once
#ifndef DBCONTROLLER_H
#define DBCONTROLLER_H


#include <mysql.h>
#include <iostream>
#include <string>
#include <cstdlib>
#include "AdminController.h"
#include "UserController.h"
#include "SeatController.h"
#include "AirplaneController.h"

using namespace std;


class DBController {
private:
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* res;
	string table;			// User / Admin / Seat
	

public:
	DBController(MYSQL* n_conn, MYSQL_ROW n_row, MYSQL_RES* n_res, string n_table);
	DBController();
	MYSQL* getConn();
	void init();
	bool connect(); 
	bool updateUser(UserController uc);
	bool updateAdmin(AdminController ac);
	bool updateSeat(SeatController sc);
	bool updateAirplane(AirplaneController ac);

	bool alterUserSeat(string seat, string passport, string flightName);
	bool alterSeatInfo(SeatController sc);

	bool deleteAll(string flight);

	bool login(string id, string pw);

	UserController loadWithPassport(string passportNumber, int flight);
	AirplaneController loadWithFlightName(string flightName);
	SeatController loadSeatInfo(string flightName);
	void exitSQL(MYSQL* conn);

};



#endif DBCONTROLLER_H