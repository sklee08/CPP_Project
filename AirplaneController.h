#pragma once
#ifndef AIRPLANECONTROLLER_H
#define AIRPLANECONTROLLER_H

#include <string>
using namespace std;

class AirplaneController {
	string airline;		// 항공사
	string time;			// 시간
	string destination;	// 목적지
	string departure;	// 출발지
	string flightName;	// 항공편명
	int seatInfo;		// 남은 좌석 정보
	string gate;

public:

	AirplaneController();

	AirplaneController(string ai, string ti, string dest, string depa, string fn, int si, string ga);

	void set_airline(string air) {
		airline = air;
	}
	void set_time(string t) {
		time = t;
	}
	void set_destination(string dest) {
		destination = dest;
	}
	void set_departure(string depart) {
		departure = depart;
	}
	void set_flightName(string flight) {
		flightName = flight;
	}
	void set_seatInfo(int seat) {
		seatInfo = seat;
	}
	string get_airline() {
		return airline;
	}
	string get_time() {
		return time;
	}
	string get_destination() {
		return destination;
	}
	string get_departure() {
		return departure;
	}
	string get_flightName() {
		return flightName;
	}
	int get_seatInfo() {
		return seatInfo;
	}
	string get_gate() {
		return gate;
	}

	void set_gate(string ga) {
		gate = ga;
	}
};


#endif AIRPLANECONTROLLER_H