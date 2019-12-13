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


// 0 -> Main ȭ��
// 11 -> Select Airline ȭ�� 
// 12 -> Passport Scan ȭ��
// 13 -> Select Flight ȭ��
// 14 -> Select Seat ȭ��
// 15 -> Print Ticket ȭ��
// 16 -> Ending ȭ��
// 21-> ������ �α��� â
// 22 -> ������ �κ� â


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