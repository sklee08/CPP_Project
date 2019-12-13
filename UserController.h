#pragma once
#ifndef USERCONTROLLER_H
#define USERCONTROLLER_H

#include <string>
using namespace std;

class UserController {
	string name;					//����̸�
	string passportNumber;		//���ǹ�ȣ
	string residentNumber;			//�ֹι�ȣ
	int passportExpirationDate;	//���Ǹ�����
	string bookedFlightName;		//������ �װ����
	string seatInformation;		//�¼�����

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