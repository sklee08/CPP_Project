#pragma once
#ifndef USERCONTROLLER_H
#define USERCONTROLLER_H

#include <string>
using namespace std;

class UserController {
	string name;					//사람이름
	string passportNumber;		//여권번호
	string residentNumber;			//주민번호
	int passportExpirationDate;	//여권만료일
	string bookedFlightName;		//예약한 항공편명
	string seatInformation;		//좌석정보

public:
	UserController(string n_name, string pn, string rn, int ped, string bfn, string si);

	UserController(const UserController &T);

	UserController();

	UserController* getThis() {
		return this;
	}

	

	string get_name() {
		return name;
	}
	void set_name(char* names) {
		name = names;
	}
	string get_passportNumber() {
		return passportNumber;
	}
	void set_passportNumber(char* passportNum) {
		passportNumber = passportNum;
	}
	string get_residentNumber() {
		return residentNumber;
	}
	void set_residentNumber(string resident) {
		residentNumber = resident;
	}
	int get_passportExpirationDate() {
		return passportExpirationDate;
	}
	void set_passportExpirationDate(int passportExp) {
		passportExpirationDate = passportExp;
	}
	string get_bookedFlightName() {
		return bookedFlightName;
	}
	void set_bookedFlightName(char* bookedFlight) {
		bookedFlightName = bookedFlight;
	}
	string get_seatInformation() {
		return seatInformation;
	}
	void set_seatInformaiton(char* seatInfo) {
		seatInformation = seatInfo;
	}
};



#endif USERCONTROLLER_H