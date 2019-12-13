#include "AirplaneController.h"

AirplaneController::AirplaneController() {

}

AirplaneController::AirplaneController(string ai, string ti, string dest, string depa, string fn, int si, string ga) {
	airline = ai;
	time = ti;
	destination = dest;
	departure = depa;
	flightName = fn;
	seatInfo = si;
	gate = ga;
}