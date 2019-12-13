#include "SeatController.h"
#include "DBController.h"
#include <cstdlib>


SeatController::SeatController(string fn, int ls, string ss) {
	flightName = fn;
	left_seat = ls;
	seat_status = ss;
}

SeatController::SeatController() {

}

bool SeatController::selectSeat(string flightName, string seat) {
	DBController dc = DBController();
	dc.init();
	dc.connect();
	SeatController sc = SeatController();
	string s;
	int index = 0;

	sc = dc.loadSeatInfo(flightName);
	if (sc.get_seat_status().compare("") == 0) {
		// 해당 항공편명이 없음
		return false;
	}

	s = sc.get_seat_status();
	index = (seat.at(0) - 'A') * 3 + atoi(seat.c_str() + 1) - 1;
	int ls = sc.get_left_seat();
	if (ls == 0) {
		// 자리없음
		return false;
	}
	else {
		sc.set_left_seat(ls - 1);
		if (s.at(index) == '1') {
			s.at(index) = '0';
		}
		return true;
	}

	
	
	
}