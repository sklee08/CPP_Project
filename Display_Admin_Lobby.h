#pragma once
#include "AirplaneController.h"
#include "DBController.h"
#include "SeatController.h"
#include <msclr/marshal_cppstd.h>

namespace ProjectCPP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Display_Admin_Lobby에 대한 요약입니다.
	/// </summary>
	public ref class Display_Admin_Lobby : public System::Windows::Forms::Form
	{
	public:

		int flag = 22;

		Display_Admin_Lobby(void)
		{
			InitializeComponent();
			//
			//TODO: 생성자 코드를 여기에 추가합니다.
			//
		}

	protected:
		/// <summary>
		/// 사용 중인 모든 리소스를 정리합니다.
		/// </summary>
		~Display_Admin_Lobby()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btn_home;
	private: System::Windows::Forms::ListBox^  Flight_Info;
	private: System::Windows::Forms::Button^  btn_Save;
	private: System::Windows::Forms::Button^  btn_Load;
	private: System::Windows::Forms::TextBox^  txt_airline;

	private: System::Windows::Forms::Label^  lbl_airline;
	private: System::Windows::Forms::Label^  lbl_time;
	private: System::Windows::Forms::TextBox^  txt_time;



	private: System::Windows::Forms::Label^  lbl_departure;
	private: System::Windows::Forms::TextBox^  txt_departure;


	private: System::Windows::Forms::Label^  lbl_destination;
	private: System::Windows::Forms::TextBox^  txt_destination;


	private: System::Windows::Forms::Label^  lbl_flightname;
	private: System::Windows::Forms::TextBox^  txt_flightname;
	private: System::Windows::Forms::TextBox^  txt_gate;

	private: System::Windows::Forms::Label^  lbl_gate;
	private: System::Windows::Forms::Button^  button1;



	protected:

	private:
		/// <summary>
		/// 필수 디자이너 변수입니다.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 디자이너 지원에 필요한 메서드입니다. 
		/// 이 메서드의 내용을 코드 편집기로 수정하지 마세요.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Display_Admin_Lobby::typeid));
			this->btn_home = (gcnew System::Windows::Forms::Button());
			this->Flight_Info = (gcnew System::Windows::Forms::ListBox());
			this->btn_Save = (gcnew System::Windows::Forms::Button());
			this->btn_Load = (gcnew System::Windows::Forms::Button());
			this->txt_airline = (gcnew System::Windows::Forms::TextBox());
			this->lbl_airline = (gcnew System::Windows::Forms::Label());
			this->lbl_time = (gcnew System::Windows::Forms::Label());
			this->txt_time = (gcnew System::Windows::Forms::TextBox());
			this->lbl_departure = (gcnew System::Windows::Forms::Label());
			this->txt_departure = (gcnew System::Windows::Forms::TextBox());
			this->lbl_destination = (gcnew System::Windows::Forms::Label());
			this->txt_destination = (gcnew System::Windows::Forms::TextBox());
			this->lbl_flightname = (gcnew System::Windows::Forms::Label());
			this->txt_flightname = (gcnew System::Windows::Forms::TextBox());
			this->txt_gate = (gcnew System::Windows::Forms::TextBox());
			this->lbl_gate = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btn_home
			// 
			this->btn_home->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btn_home->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->btn_home->BackColor = System::Drawing::Color::Transparent;
			this->btn_home->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_home.BackgroundImage")));
			this->btn_home->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_home->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_home->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->btn_home->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->btn_home->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->btn_home->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_home->Location = System::Drawing::Point(45, 50);
			this->btn_home->Name = L"btn_home";
			this->btn_home->Size = System::Drawing::Size(220, 70);
			this->btn_home->TabIndex = 6;
			this->btn_home->UseVisualStyleBackColor = false;
			this->btn_home->Click += gcnew System::EventHandler(this, &Display_Admin_Lobby::btn_home_Click);
			// 
			// Flight_Info
			// 
			this->Flight_Info->Font = (gcnew System::Drawing::Font(L"Consolas", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Flight_Info->FormattingEnabled = true;
			this->Flight_Info->ItemHeight = 28;
			this->Flight_Info->Location = System::Drawing::Point(102, 206);
			this->Flight_Info->Name = L"Flight_Info";
			this->Flight_Info->Size = System::Drawing::Size(1228, 396);
			this->Flight_Info->TabIndex = 7;
			// 
			// btn_Save
			// 
			this->btn_Save->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_Save.BackgroundImage")));
			this->btn_Save->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_Save->Location = System::Drawing::Point(986, 662);
			this->btn_Save->Name = L"btn_Save";
			this->btn_Save->Size = System::Drawing::Size(220, 70);
			this->btn_Save->TabIndex = 8;
			this->btn_Save->UseVisualStyleBackColor = true;
			this->btn_Save->Click += gcnew System::EventHandler(this, &Display_Admin_Lobby::btn_Save_Click_1);
			// 
			// btn_Load
			// 
			this->btn_Load->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_Load.BackgroundImage")));
			this->btn_Load->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_Load->ForeColor = System::Drawing::Color::Transparent;
			this->btn_Load->Location = System::Drawing::Point(1140, 50);
			this->btn_Load->Name = L"btn_Load";
			this->btn_Load->Size = System::Drawing::Size(220, 70);
			this->btn_Load->TabIndex = 9;
			this->btn_Load->UseVisualStyleBackColor = true;
			this->btn_Load->Click += gcnew System::EventHandler(this, &Display_Admin_Lobby::btn_Load_Click);
			// 
			// txt_airline
			// 
			this->txt_airline->Font = (gcnew System::Drawing::Font(L"Consolas", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_airline->Location = System::Drawing::Point(400, 651);
			this->txt_airline->Name = L"txt_airline";
			this->txt_airline->Size = System::Drawing::Size(329, 32);
			this->txt_airline->TabIndex = 10;
			this->txt_airline->Text = L"ex) ASIANA AIRLINE";
			// 
			// lbl_airline
			// 
			this->lbl_airline->AutoSize = true;
			this->lbl_airline->BackColor = System::Drawing::Color::Transparent;
			this->lbl_airline->Font = (gcnew System::Drawing::Font(L"Consolas", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_airline->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_airline->Location = System::Drawing::Point(227, 654);
			this->lbl_airline->Name = L"lbl_airline";
			this->lbl_airline->Size = System::Drawing::Size(94, 24);
			this->lbl_airline->TabIndex = 12;
			this->lbl_airline->Text = L"airline";
			// 
			// lbl_time
			// 
			this->lbl_time->AutoSize = true;
			this->lbl_time->BackColor = System::Drawing::Color::Transparent;
			this->lbl_time->Font = (gcnew System::Drawing::Font(L"Consolas", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_time->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_time->Location = System::Drawing::Point(227, 681);
			this->lbl_time->Name = L"lbl_time";
			this->lbl_time->Size = System::Drawing::Size(58, 24);
			this->lbl_time->TabIndex = 14;
			this->lbl_time->Text = L"time";
			// 
			// txt_time
			// 
			this->txt_time->Font = (gcnew System::Drawing::Font(L"Consolas", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_time->Location = System::Drawing::Point(400, 678);
			this->txt_time->Name = L"txt_time";
			this->txt_time->Size = System::Drawing::Size(329, 32);
			this->txt_time->TabIndex = 13;
			this->txt_time->Text = L"ex) 2019/01/01 12:00";
			// 
			// lbl_departure
			// 
			this->lbl_departure->AutoSize = true;
			this->lbl_departure->BackColor = System::Drawing::Color::Transparent;
			this->lbl_departure->Font = (gcnew System::Drawing::Font(L"Consolas", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_departure->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_departure->Location = System::Drawing::Point(227, 735);
			this->lbl_departure->Name = L"lbl_departure";
			this->lbl_departure->Size = System::Drawing::Size(118, 24);
			this->lbl_departure->TabIndex = 18;
			this->lbl_departure->Text = L"departure";
			// 
			// txt_departure
			// 
			this->txt_departure->Font = (gcnew System::Drawing::Font(L"Consolas", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_departure->Location = System::Drawing::Point(400, 732);
			this->txt_departure->Name = L"txt_departure";
			this->txt_departure->Size = System::Drawing::Size(329, 32);
			this->txt_departure->TabIndex = 17;
			this->txt_departure->Text = L"ex) INCHOEN";
			// 
			// lbl_destination
			// 
			this->lbl_destination->AutoSize = true;
			this->lbl_destination->BackColor = System::Drawing::Color::Transparent;
			this->lbl_destination->Font = (gcnew System::Drawing::Font(L"Consolas", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_destination->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_destination->Location = System::Drawing::Point(227, 708);
			this->lbl_destination->Name = L"lbl_destination";
			this->lbl_destination->Size = System::Drawing::Size(142, 24);
			this->lbl_destination->TabIndex = 16;
			this->lbl_destination->Text = L"destination";
			// 
			// txt_destination
			// 
			this->txt_destination->Font = (gcnew System::Drawing::Font(L"Consolas", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_destination->Location = System::Drawing::Point(400, 705);
			this->txt_destination->Name = L"txt_destination";
			this->txt_destination->Size = System::Drawing::Size(329, 32);
			this->txt_destination->TabIndex = 15;
			this->txt_destination->Text = L"ex) BUSAN";
			// 
			// lbl_flightname
			// 
			this->lbl_flightname->AutoSize = true;
			this->lbl_flightname->BackColor = System::Drawing::Color::Transparent;
			this->lbl_flightname->Font = (gcnew System::Drawing::Font(L"Consolas", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_flightname->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_flightname->Location = System::Drawing::Point(227, 762);
			this->lbl_flightname->Name = L"lbl_flightname";
			this->lbl_flightname->Size = System::Drawing::Size(130, 24);
			this->lbl_flightname->TabIndex = 20;
			this->lbl_flightname->Text = L"flight no.";
			// 
			// txt_flightname
			// 
			this->txt_flightname->Font = (gcnew System::Drawing::Font(L"Consolas", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_flightname->Location = System::Drawing::Point(400, 759);
			this->txt_flightname->Name = L"txt_flightname";
			this->txt_flightname->Size = System::Drawing::Size(329, 32);
			this->txt_flightname->TabIndex = 19;
			this->txt_flightname->Text = L"ex) A123";
			// 
			// txt_gate
			// 
			this->txt_gate->Font = (gcnew System::Drawing::Font(L"Consolas", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_gate->Location = System::Drawing::Point(400, 790);
			this->txt_gate->Name = L"txt_gate";
			this->txt_gate->Size = System::Drawing::Size(329, 32);
			this->txt_gate->TabIndex = 21;
			this->txt_gate->Text = L"ex) 1";
			// 
			// lbl_gate
			// 
			this->lbl_gate->AutoSize = true;
			this->lbl_gate->BackColor = System::Drawing::Color::Transparent;
			this->lbl_gate->Font = (gcnew System::Drawing::Font(L"Consolas", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_gate->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_gate->Location = System::Drawing::Point(227, 793);
			this->lbl_gate->Name = L"lbl_gate";
			this->lbl_gate->Size = System::Drawing::Size(58, 24);
			this->lbl_gate->TabIndex = 22;
			this->lbl_gate->Text = L"gate";
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Location = System::Drawing::Point(986, 752);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(220, 70);
			this->button1->TabIndex = 23;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Display_Admin_Lobby::button1_Click);
			// 
			// Display_Admin_Lobby
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1424, 961);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->lbl_gate);
			this->Controls->Add(this->txt_gate);
			this->Controls->Add(this->lbl_flightname);
			this->Controls->Add(this->txt_flightname);
			this->Controls->Add(this->lbl_departure);
			this->Controls->Add(this->txt_departure);
			this->Controls->Add(this->lbl_destination);
			this->Controls->Add(this->txt_destination);
			this->Controls->Add(this->lbl_time);
			this->Controls->Add(this->txt_time);
			this->Controls->Add(this->lbl_airline);
			this->Controls->Add(this->txt_airline);
			this->Controls->Add(this->btn_Load);
			this->Controls->Add(this->btn_Save);
			this->Controls->Add(this->Flight_Info);
			this->Controls->Add(this->btn_home);
			this->Name = L"Display_Admin_Lobby";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Display_Admin_Lobby";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_home_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
		flag = 0;
	}
private: System::Void btn_Load_Click(System::Object^  sender, System::EventArgs^  e) {
	// 로드 클릭

	Flight_Info->Items->Clear();

	DBController dc;
	MYSQL_ROW row;
	MYSQL_RES* res;
	dc.init();
	dc.connect();
	string query = "SELECT * FROM airplane;";
	const char* q = query.c_str();
	int qstate = mysql_query(dc.getConn() ,q);
	if (!qstate) {
		res = mysql_store_result(dc.getConn());
		// 결과 저장
		while ((row = mysql_fetch_row(res)) != NULL) {
			String^ vname;
			string qq = "";
			string q0 = row[0];
			string q1 = row[1];
			string q2 = row[2];
			string q3 = row[3];
			string q4 = row[4];
			string q6 = row[6];
			qq = q0 +"   " + q1 +"   " + q2+ "   " + q3 + "   " + q4 + "   " + q6;
			vname = msclr::interop::marshal_as<System::String^>(qq);
			if (qq.at(0) == 32) {
				MessageBox::Show("No flights have been reserved!");
				break;
			}

			Flight_Info->Items->Add(vname);
		}
		mysql_free_result(res);
	}
	else {
		MessageBox::Show("Unknown Error!");
	}
	
}

private: System::Void btn_Save_Click_1(System::Object^  sender, System::EventArgs^  e) {
	// 세이브 버튼
	AirplaneController ac;
	DBController dc;
	SeatController sc;

	dc.init();
	dc.connect();

	System::String^ a = txt_airline->Text;
	System::String^ b = txt_time->Text;
	System::String^ c = txt_destination->Text;
	System::String^ d = txt_departure->Text;
	System::String^ f = txt_flightname->Text;
	System::String^ g = txt_gate->Text;

	string airline = msclr::interop::marshal_as<std::string>(a);
	string time = msclr::interop::marshal_as<std::string>(b);
	string dest = msclr::interop::marshal_as<std::string>(c);
	string dep = msclr::interop::marshal_as<std::string>(d);
	string flightName = msclr::interop::marshal_as<std::string>(f);
	string gate = msclr::interop::marshal_as<std::string>(g);

	ac.set_airline(airline);
	ac.set_time(time);
	ac.set_destination(dest);
	ac.set_departure(dep);
	ac.set_flightName(flightName);
	ac.set_seatInfo(30);
	ac.set_gate(gate);

	if (dc.updateAirplane(ac)) {
		// 성공
		
		sc.set_flightName(ac.get_flightName());
		sc.set_left_seat(30);
		sc.set_seat_status("111111111111111111111111111111");
		if (dc.updateSeat(sc)) {
			MessageBox::Show("Saved");
		}
		else {
			cout << "dc.updateSeat 실패" << endl;
			MessageBox::Show("Failed");
		}
	}
	else {
		cout << "dc.updateAirplane 실패" << endl;
		MessageBox::Show("Unknown Error");

	}
	txt_airline->Clear();
	txt_departure->Clear();
	txt_destination->Clear();
	txt_flightname->Clear();
	txt_time->Clear();
	txt_gate->Clear();
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	// 삭제 버튼
	DBController dc;

	dc.init();
	dc.connect();

	System::String^ f = txt_flightname->Text;
	string flightName = msclr::interop::marshal_as<std::string>(f);

	if (dc.deleteAll(flightName)) {
		MessageBox::Show("Deleted!!");
	}
	else {
		MessageBox::Show("Failed to delete!");
	}
}
};
}
