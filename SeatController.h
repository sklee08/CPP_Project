#pragma once
#ifndef SEATCONTROLLER_H
#define SEATCONTROLLER_H
#include<string>

using namespace std;

class SeatController {
	
	string flightName;	// �װ����
	int left_seat;		// ���� �¼���
	string seat_status;	// 1�̸� �ڸ� ���� 0�̸� �ڸ� ����

public:

	SeatController(string fn, int ls, string ss);

	SeatController();

	bool selectSeat(string flightName, string seat);

	string get_flightName() {
		return flightName;
	}

	void set_flightName(string fn) {
		flightName = fn;
	}

	int get_left_seat() {
		return left_seat;
	}

	void set_left_seat(int ls) {
		left_seat = ls;
	}

	string get_seat_status() {
		return seat_status;
	}

	void set_seat_status(string ss) {
		seat_status = ss;
	}
};


#endif SEATCONTROLLER_H