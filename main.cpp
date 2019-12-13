#include "Display_Main.h"
#include "Display_Admin_Login.h"
#include "Display_PassportScan.h"
#include "Display_SelectSeat.h"
#include "Display_SelectFlight.h"
#include "Display_Admin_Lobby.h"
#include "Display_PrintTicket.h"
#include "Display_Ending.h"


using namespace System;

using namespace System::Windows::Forms;


// 0 -> Main 화면
// 11 -> Select Airline 화면 
// 12 -> Passport Scan 화면
// 13 -> Select Flight 화면
// 14 -> Select Seat 화면
// 15 -> Print Ticket 화면
// 16 -> Ending 화면
// 21-> 관리자 로그인 창
// 22 -> 관리자 로비 창


int main(void) {

	int whichFlight;
	int main_flag = 0;
	int passport;
	int flightName;

	while (main_flag != -1) {
		
		ProjectCPP::Display_Main form;
		ProjectCPP::Display_SelectAirline dsForm;
		ProjectCPP::Display_Admin_Login dalForm;
		ProjectCPP::Display_PassportScan psForm;
		ProjectCPP::Display_SelectFlight sfForm;
		ProjectCPP::Display_SelectSeat ssForm;
		ProjectCPP::Display_Admin_Lobby alForm;
		ProjectCPP::Display_PrintTicket ptForm;
		ProjectCPP::Display_Ending deForm;

		switch (main_flag) {
		case 0:
			Application::Run(%form);
			main_flag = form.flag;
			break;
		case 11:
			Application::Run(%dsForm);
			main_flag = dsForm.flag;
			whichFlight = dsForm.whichFlight;
			break;
		case 12:
			psForm.flight = whichFlight;
			Application::Run(%psForm);
			main_flag = psForm.flag;
			passport = psForm.passport;
		
			break;
		case 13:
			sfForm.flight = whichFlight;
			sfForm.passport = passport;

			Application::Run(%sfForm);
			flightName = sfForm.flightName;
			main_flag = sfForm.flag;
			break;
		case 14:
			ssForm.flight = whichFlight;
			ssForm.passport = passport;
			ssForm.flightName = flightName;
			Application::Run(%ssForm);
			main_flag = ssForm.flag;
			break;
		case 15:
			ptForm.flight = whichFlight;
			ptForm.flightName = flightName;
			ptForm.passport = passport;
			Application::Run(%ptForm);
			main_flag = ptForm.flag;
			break;
		case 16:
			Application::Run(%deForm);
			main_flag = 0;
			break;
		case 21:
			Application::Run(%dalForm);
			main_flag = dalForm.flag;
			break;
		case 22:
			Application::Run(%alForm);
			main_flag = alForm.flag;
			break;

		}

		if (main_flag == -1) {
			break;
		}
	}

	return 0;

}