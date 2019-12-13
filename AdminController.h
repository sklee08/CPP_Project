#pragma once
#ifndef ADMINCONTROLLER_H
#define ADMINCONTROLLER_H

#include <string>

using namespace std;

class AdminController {
	string adminId;
	string adminPw;
public:
	void set_adminId(char* id) {
		adminId = id;
	}
	string get_adminId() {
		return adminId;
	}
	void set_adminPw(char* pw) {
		adminPw = pw;
	}
	string get_adminPw() {
		return adminPw;
	}
};


#endif ADMINCONTROLLER_H