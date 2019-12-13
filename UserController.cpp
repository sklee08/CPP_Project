#include "UserController.h"

UserController::UserController(string n_name, string pn, string rn, int ped, string bfn, string si) {
	name = n_name;
	passportNumber = pn;
	residentNumber = rn;
	passportExpirationDate = ped;
	bookedFlightName = bfn;
	seatInformation = si;
}

UserController::UserController(const UserController &T) {
	name = T.name;
	passportExpirationDate = T.passportExpirationDate;
	passportNumber = T.passportNumber;
	residentNumber = T.residentNumber;
	bookedFlightName = T.bookedFlightName;
	seatInformation = T.seatInformation;
}

UserController::UserController() {

}