#include "DBController.h"
#include <mysql.h>

DBController::DBController(MYSQL* n_conn, MYSQL_ROW n_row, MYSQL_RES* n_res, string n_table) {
	conn = n_conn;
	row = n_row;
	res = n_res;
	table = n_table;
}

MYSQL* DBController::getConn() {
	return conn;
}

DBController::DBController() {

}

void DBController::init() {
	conn = mysql_init(0);
}

bool DBController::connect() {
	conn = mysql_real_connect(conn, "localhost", "root", "dltjrrb1", "cpp", 3307, NULL, 0);
	if (conn) return true;
	else return false;
}

bool DBController::deleteAll(string flight) {
	string query = "DELETE FROM user WHERE bookedFlightName = ";
	query += ("\"" + flight + "\";");
	const char* q = query.c_str();
	int qstate = mysql_query(conn, q);
	if (!qstate) {
		cout << "User 테이블 삭제 성공" << endl;
		query = "DELETE FROM seat WHERE flightName = ";
		query += ("\"" + flight + "\";");
		const char* q1 = query.c_str();
		qstate = mysql_query(conn, q1);
		if (!qstate) {
			cout << "seat 테이블 삭제 성공" << endl;
			query = "DELETE FROM airplane WHERE flightName = ";
			query += ("\"" + flight + "\";");
			const char* q2 = query.c_str();
			qstate = mysql_query(conn, q2);
			if (!qstate) {
				cout << "airplane 테이블 삭제 성공" << endl;
				return true;
			}
			else {
				cout << "airplane 삭제 실패" << endl;
				return false;
			}

		}
		else {
			cout << "seat 삭제 실패" << endl;
			return false;
		}
	}
	else {
		cout << "User 삭제 실패" << endl;
		return false;
	}

}

bool DBController::updateUser(UserController uc) {
	// DB에 있는 User 테이블에 등록

	string name = uc.get_name();
	string passportNumber = uc.get_passportNumber();
	string residentNumber = uc.get_residentNumber();
	int ped = uc.get_passportExpirationDate();
	string s_ped = to_string(ped);
	string bfn = uc.get_bookedFlightName();
	string seat = uc.get_seatInformation();

	string query = "INSERT INTO User (name, passport_number, resident_number, passportExpirationDate, bookedFlightName, seatInfo) VALUES ";
	query += "(\"";
	query += (name + "\", \"" + passportNumber + "\", \"" + residentNumber + "\", \"" + s_ped + "\", \"" + bfn + "\", \"" + seat + "\");");
	const char* q = query.c_str();
	int qstate = mysql_query(conn, q);

	if (!qstate) return true;
	else return false;
}

UserController DBController::loadWithPassport(string passportNumber, int flight) {
	// DB에서 여권번호에 해당하는 User정보 리턴하는 함수
	
	UserController uc = UserController("","","",0,"", "");
	int index = 0;
	string query = "SELECT * FROM User WHERE passport_number = ";
	query += "\"" + passportNumber + "\";";
	const char* q = query.c_str();
	int qstate = mysql_query(conn, q);
	if (!qstate) {
		res = mysql_store_result(conn);
		// 결과 저장
		while ((row = mysql_fetch_row(res)) != NULL) {
		
			if (flight == 0) {
				// 아시아나
				string fl = row[4];
				if (fl.compare("") == 0) {
					uc.set_bookedFlightName("");
					uc.set_name(row[0]);
					uc.set_passportNumber(row[1]);
					uc.set_passportExpirationDate(atoi(row[3]));
					uc.set_residentNumber(row[2]);
					uc.set_seatInformaiton(row[5]);
					break;
				}
				else {
					if (fl.at(0) == 'A') {
						uc.set_bookedFlightName(row[4]);
						uc.set_name(row[0]);
						uc.set_passportNumber(row[1]);
						uc.set_passportExpirationDate(atoi(row[3]));
						uc.set_residentNumber(row[2]);
						uc.set_seatInformaiton(row[5]);
					}
					else {
						// 다른 항공사
						uc.set_residentNumber("1");
					}
				}
			}
			else {
				// 코리안
				string fl = row[4];
				if (fl.compare("") == 0) {
					// 같음
					uc.set_bookedFlightName("");
					uc.set_name(row[0]);
					uc.set_passportNumber(row[1]);
					uc.set_passportExpirationDate(atoi(row[3]));
					uc.set_residentNumber(row[2]);
					uc.set_seatInformaiton(row[5]);
					break;
				}
				else {
					// 다름
					if (fl.at(0) == 'B') {
						uc.set_bookedFlightName(row[4]);
						uc.set_name(row[0]);
						uc.set_passportNumber(row[1]);
						uc.set_passportExpirationDate(atoi(row[3]));
						uc.set_residentNumber(row[2]);
						uc.set_seatInformaiton(row[5]);
					}
					else {
						uc.set_residentNumber("1");
					}
				}			

			}
		}
		mysql_free_result(res);
		return uc;
	}
	else {
		return uc;
	}
	
}

bool DBController::updateAdmin(AdminController ac) {
	string id = ac.get_adminId();
	string pw = ac.get_adminPw();

	return true;
}

bool DBController::updateSeat(SeatController sc) {
	
	//좌석 정보 등록

	string fn = sc.get_flightName();
	int ls = sc.get_left_seat();
	string s_ls = to_string(ls);
	string ss = sc.get_seat_status();

	string query = "INSERT INTO seat (flightName, left_seat, seat_status) VALUES ";
	query += "(\"" + fn + "\", " + s_ls + ", \"" + ss + "\");";
	const char* q = query.c_str();
	
	int qstate = mysql_query(conn, q);

	if(!qstate) return true;
	else return false;

	return true;
}

bool DBController::updateAirplane(AirplaneController ac) {
	// 비행정보 등록

	string airline = ac.get_airline();
	string time = ac.get_time();
	string destination = ac.get_destination();
	string departure = ac.get_departure();
	string flightName = ac.get_flightName();
	int seat = ac.get_seatInfo();
	string s_seat = to_string(seat);
	string gate = ac.get_gate();

	string query = "INSERT INTO Airplane (airline, time, destination, departure, flightName, seatInfo, gate) VALUES ";
	query += "(\"";
	query += (airline + "\", \"" + time + "\", \"" + destination + "\", \"" + departure + "\", \"" + flightName + "\", \"" + s_seat + "\", \""+ gate +"\");");
	const char* q = query.c_str();
	int qstate = mysql_query(conn, q);

	if (!qstate) return true;
	else return false;
}

// flightName seat 테이블 객체 생성 및 관리 함수

AirplaneController DBController::loadWithFlightName(string flightName) {
	// DB에서 항공편명에 해당하는 Airplane정보 리턴하는 함수

	AirplaneController ac = AirplaneController("","","","","",0, "");
	string query = "SELECT * FROM airplane WHERE flightName = ";
	query += "\"" + flightName + "\";";
	const char* q = query.c_str();
	int qstate = mysql_query(conn, q);
	if (!qstate) {
		res = mysql_store_result(conn);
		// 결과 저장
		while ((row = mysql_fetch_row(res)) != NULL) {
			ac.set_airline(row[0]);
			ac.set_time(row[1]);
			ac.set_destination(row[2]);
			ac.set_departure(row[3]);
			ac.set_flightName(row[4]);
			ac.set_seatInfo(atoi(row[5]));
			ac.set_gate(row[6]);
		}
		mysql_free_result(res);
		return ac;
	}
	else {
		return ac;
	}

}

SeatController DBController::loadSeatInfo(string flightName) {
	// 항공편명으로 좌석 정보 가져오는 함수
	
	SeatController sc = SeatController("", 0, "");
	string query = "SELECT * FROM seat WHERE flightName = ";
	query += "\"" + flightName + "\";";
	const char* q = query.c_str();
	int qstate = mysql_query(conn, q);
	if (!qstate) {
		res = mysql_store_result(conn);
		// 결과 저장
		while ((row = mysql_fetch_row(res)) != NULL) {
			sc.set_flightName(row[0]);
			sc.set_left_seat(atoi(row[1]));
			sc.set_seat_status(row[2]);
		}
		mysql_free_result(res);
		return sc;
	}	
	else {
		return sc;
	}

}

bool DBController::alterSeatInfo(SeatController sc) {
	
	// 좌석 정보 변경해서 db에 등록

	string seat_status = sc.get_seat_status();
	int ls = sc.get_left_seat();
	string flightName = sc.get_flightName();
	

	string query = "UPDATE airplane SET seatInfo = " + to_string(ls) + " WHERE flightName = \"" + flightName + "\";";
	const char* q = query.c_str();
	int qstate = mysql_query(conn, q);
	if (!qstate) {
		query = "UPDATE seat SET left_seat = " + to_string(ls) +", seat_status = "+ "\""+ seat_status + "\""+ " WHERE flightName = \"" + flightName + "\";";
		const char* qq = query.c_str();
		qstate = mysql_query(conn, qq);
		if (!qstate) {
			// User에 좌석정보 (ex. A3) db에 삽입
			return true;
		}
		else {
			return false;
		}
	}
	else {
		return false;
	}

	// DB 작동 확인 완료

}

bool DBController::alterUserSeat(string seat, string passport, string flightName) {

	// User table에 주어진 여권번호에 해당하는 행에 seat정보 (ex. A3)를 등록하는 함수 

	string query = "UPDATE User SET seatInfo = \""+ seat + "\"" + " WHERE passport_number = \"" + passport + "\" and bookedFlightName = "+ "\""+flightName + "\";";
	const char* q = query.c_str();
	int qstate = mysql_query(conn, q);
	if (!qstate) {
		return true;
	}
	else {
		return false;
	}

	// DB 작동 확인 완료
}

bool DBController::login(string id, string pw) {

	//admin에 해당 아이디와 pw로 로그인해서 맞으면 true 틀리면 false 

	string db_id, db_pw;
	string query = "SELECT * FROM admin;";
	const char* q = query.c_str();
	int qstate = mysql_query(conn, q);
	if (!qstate) {
		res = mysql_store_result(conn);
		// 결과 저장
		while ((row = mysql_fetch_row(res)) != NULL) {
			db_id = row[0];
			db_pw = row[1];
		}

		mysql_free_result(res);

		if ((id.compare(db_id) == 0) && (pw.compare(db_pw) == 0)) {
			return true;
		}
		else {
			return false;
		}
	}
	else {
		return false;
	}

	// DB 작동 확인 완료
}

void DBController::exitSQL(MYSQL* conn) {
	mysql_close(conn);
}