#pragma once
#include "DBController.h"
#include "AirplaneController.h"
#include "UserController.h"
#include <msclr/marshal_cppstd.h>

namespace ProjectCPP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Display_PrintTicket에 대한 요약입니다.
	/// </summary>
	public ref class Display_PrintTicket : public System::Windows::Forms::Form
	{
	public:
		int flag = 15;
		int passport;
		int flightName;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::TextBox^  txt_dest1;
	private: System::Windows::Forms::TextBox^  txt_gate1;
	private: System::Windows::Forms::TextBox^  txt_btime1;

	private: System::Windows::Forms::TextBox^  txt_seat1;
	private: System::Windows::Forms::TextBox^  txt_dep2;
	private: System::Windows::Forms::TextBox^  txt_dest2;
	private: System::Windows::Forms::TextBox^  txt_seat2;
	private: System::Windows::Forms::TextBox^  txt_date2;

	private: System::Windows::Forms::TextBox^  txt_gate2;
	private: System::Windows::Forms::TextBox^  txt_btime2;















	private: System::Windows::Forms::TextBox^  txt_dep1;
	private: System::Windows::Forms::TextBox^  txt_date1;


	private: System::Windows::Forms::TextBox^  txt_name1;
	private: System::Windows::Forms::TextBox^  txt_flight1;

	private: System::Windows::Forms::TextBox^  txt_name2;
	private: System::Windows::Forms::Label^  lbl_warning;


	public:
		int flight;

		Display_PrintTicket(void)
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
		~Display_PrintTicket()
		{
			if (components)
			{
				delete components;
			}
		}

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Display_PrintTicket::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->txt_dest1 = (gcnew System::Windows::Forms::TextBox());
			this->txt_gate1 = (gcnew System::Windows::Forms::TextBox());
			this->txt_btime1 = (gcnew System::Windows::Forms::TextBox());
			this->txt_seat1 = (gcnew System::Windows::Forms::TextBox());
			this->txt_dep2 = (gcnew System::Windows::Forms::TextBox());
			this->txt_dest2 = (gcnew System::Windows::Forms::TextBox());
			this->txt_seat2 = (gcnew System::Windows::Forms::TextBox());
			this->txt_date2 = (gcnew System::Windows::Forms::TextBox());
			this->txt_gate2 = (gcnew System::Windows::Forms::TextBox());
			this->txt_btime2 = (gcnew System::Windows::Forms::TextBox());
			this->txt_dep1 = (gcnew System::Windows::Forms::TextBox());
			this->txt_date1 = (gcnew System::Windows::Forms::TextBox());
			this->txt_name1 = (gcnew System::Windows::Forms::TextBox());
			this->txt_flight1 = (gcnew System::Windows::Forms::TextBox());
			this->txt_name2 = (gcnew System::Windows::Forms::TextBox());
			this->lbl_warning = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Location = System::Drawing::Point(1140, 840);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(220, 70);
			this->button1->TabIndex = 1;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Display_PrintTicket::button1_Click);
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->Location = System::Drawing::Point(1116, 96);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(220, 70);
			this->button2->TabIndex = 2;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Display_PrintTicket::button2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(104, 248);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1232, 556);
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// txt_dest1
			// 
			this->txt_dest1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_dest1->Font = (gcnew System::Drawing::Font(L"Consolas", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_dest1->Location = System::Drawing::Point(281, 551);
			this->txt_dest1->Name = L"txt_dest1";
			this->txt_dest1->Size = System::Drawing::Size(352, 34);
			this->txt_dest1->TabIndex = 8;
			// 
			// txt_gate1
			// 
			this->txt_gate1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_gate1->Font = (gcnew System::Drawing::Font(L"Consolas", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_gate1->Location = System::Drawing::Point(265, 665);
			this->txt_gate1->Name = L"txt_gate1";
			this->txt_gate1->Size = System::Drawing::Size(80, 34);
			this->txt_gate1->TabIndex = 9;
			// 
			// txt_btime1
			// 
			this->txt_btime1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_btime1->Font = (gcnew System::Drawing::Font(L"Consolas", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_btime1->Location = System::Drawing::Point(462, 665);
			this->txt_btime1->Name = L"txt_btime1";
			this->txt_btime1->Size = System::Drawing::Size(225, 34);
			this->txt_btime1->TabIndex = 10;
			// 
			// txt_seat1
			// 
			this->txt_seat1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_seat1->Font = (gcnew System::Drawing::Font(L"Consolas", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_seat1->Location = System::Drawing::Point(844, 545);
			this->txt_seat1->Name = L"txt_seat1";
			this->txt_seat1->Size = System::Drawing::Size(79, 34);
			this->txt_seat1->TabIndex = 11;
			// 
			// txt_dep2
			// 
			this->txt_dep2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_dep2->Font = (gcnew System::Drawing::Font(L"Consolas", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_dep2->Location = System::Drawing::Point(1090, 457);
			this->txt_dep2->Name = L"txt_dep2";
			this->txt_dep2->Size = System::Drawing::Size(185, 34);
			this->txt_dep2->TabIndex = 12;
			// 
			// txt_dest2
			// 
			this->txt_dest2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_dest2->Font = (gcnew System::Drawing::Font(L"Consolas", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_dest2->Location = System::Drawing::Point(1062, 491);
			this->txt_dest2->Name = L"txt_dest2";
			this->txt_dest2->Size = System::Drawing::Size(213, 34);
			this->txt_dest2->TabIndex = 13;
			// 
			// txt_seat2
			// 
			this->txt_seat2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_seat2->Font = (gcnew System::Drawing::Font(L"Consolas", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_seat2->Location = System::Drawing::Point(1021, 625);
			this->txt_seat2->Name = L"txt_seat2";
			this->txt_seat2->Size = System::Drawing::Size(76, 34);
			this->txt_seat2->TabIndex = 14;
			// 
			// txt_date2
			// 
			this->txt_date2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_date2->Font = (gcnew System::Drawing::Font(L"Consolas", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_date2->Location = System::Drawing::Point(1119, 625);
			this->txt_date2->Name = L"txt_date2";
			this->txt_date2->Size = System::Drawing::Size(138, 34);
			this->txt_date2->TabIndex = 15;
			// 
			// txt_gate2
			// 
			this->txt_gate2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_gate2->Font = (gcnew System::Drawing::Font(L"Consolas", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_gate2->Location = System::Drawing::Point(1017, 704);
			this->txt_gate2->Name = L"txt_gate2";
			this->txt_gate2->Size = System::Drawing::Size(80, 34);
			this->txt_gate2->TabIndex = 16;
			// 
			// txt_btime2
			// 
			this->txt_btime2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_btime2->Font = (gcnew System::Drawing::Font(L"Consolas", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_btime2->Location = System::Drawing::Point(1115, 704);
			this->txt_btime2->Name = L"txt_btime2";
			this->txt_btime2->Size = System::Drawing::Size(193, 34);
			this->txt_btime2->TabIndex = 17;
			// 
			// txt_dep1
			// 
			this->txt_dep1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_dep1->Font = (gcnew System::Drawing::Font(L"Consolas", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_dep1->Location = System::Drawing::Point(311, 516);
			this->txt_dep1->Name = L"txt_dep1";
			this->txt_dep1->Size = System::Drawing::Size(218, 34);
			this->txt_dep1->TabIndex = 18;
			// 
			// txt_date1
			// 
			this->txt_date1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_date1->Font = (gcnew System::Drawing::Font(L"Consolas", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_date1->Location = System::Drawing::Point(602, 516);
			this->txt_date1->Name = L"txt_date1";
			this->txt_date1->Size = System::Drawing::Size(85, 34);
			this->txt_date1->TabIndex = 19;
			// 
			// txt_name1
			// 
			this->txt_name1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_name1->Font = (gcnew System::Drawing::Font(L"Consolas", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_name1->Location = System::Drawing::Point(237, 429);
			this->txt_name1->Name = L"txt_name1";
			this->txt_name1->Size = System::Drawing::Size(192, 34);
			this->txt_name1->TabIndex = 20;
			// 
			// txt_flight1
			// 
			this->txt_flight1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_flight1->Font = (gcnew System::Drawing::Font(L"Consolas", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_flight1->Location = System::Drawing::Point(692, 429);
			this->txt_flight1->Name = L"txt_flight1";
			this->txt_flight1->Size = System::Drawing::Size(108, 34);
			this->txt_flight1->TabIndex = 21;
			// 
			// txt_name2
			// 
			this->txt_name2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_name2->Font = (gcnew System::Drawing::Font(L"Consolas", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_name2->Location = System::Drawing::Point(1021, 400);
			this->txt_name2->Name = L"txt_name2";
			this->txt_name2->Size = System::Drawing::Size(108, 34);
			this->txt_name2->TabIndex = 22;
			// 
			// lbl_warning
			// 
			this->lbl_warning->AutoSize = true;
			this->lbl_warning->BackColor = System::Drawing::Color::Transparent;
			this->lbl_warning->Font = (gcnew System::Drawing::Font(L"Consolas", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbl_warning->ForeColor = System::Drawing::Color::Red;
			this->lbl_warning->Location = System::Drawing::Point(687, 113);
			this->lbl_warning->Name = L"lbl_warning";
			this->lbl_warning->Size = System::Drawing::Size(376, 28);
			this->lbl_warning->TabIndex = 23;
			this->lbl_warning->Text = L"Press the Load Button First!";
			this->lbl_warning->Click += gcnew System::EventHandler(this, &Display_PrintTicket::label1_Click);
			// 
			// Display_PrintTicket
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1424, 961);
			this->Controls->Add(this->lbl_warning);
			this->Controls->Add(this->txt_name2);
			this->Controls->Add(this->txt_flight1);
			this->Controls->Add(this->txt_name1);
			this->Controls->Add(this->txt_date1);
			this->Controls->Add(this->txt_dep1);
			this->Controls->Add(this->txt_btime2);
			this->Controls->Add(this->txt_gate2);
			this->Controls->Add(this->txt_date2);
			this->Controls->Add(this->txt_seat2);
			this->Controls->Add(this->txt_dest2);
			this->Controls->Add(this->txt_dep2);
			this->Controls->Add(this->txt_seat1);
			this->Controls->Add(this->txt_btime1);
			this->Controls->Add(this->txt_gate1);
			this->Controls->Add(this->txt_dest1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Display_PrintTicket";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Display_PrintTicket";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		// 확인 버튼
		this->Close();
		flag = 16;
		
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		// 로드 버튼
		
		DBController dc;
		UserController uc;
		AirplaneController ac;
		dc.init();
		dc.connect();
		string s = "";
		s += "M";
		s += to_string(passport);	

		uc = dc.loadWithPassport(s, flight);
		String^ vname;
		string ss = "";
		vname = msclr::interop::marshal_as<System::String^>(ss);

		if (uc.get_residentNumber().compare("") == 0) {
			// 없음
			MessageBox::Show("Unknown Error Occured!");
		}
		else {
			// 있음
			string fn = uc.get_bookedFlightName();
			ac = dc.loadWithFlightName(fn);

			String^ prnt_temp;
			prnt_temp = msclr::interop::marshal_as<System::String^>(ac.get_departure());
			this->txt_dep1->Text = prnt_temp;
			this->txt_dep2->Text = prnt_temp;
			prnt_temp = msclr::interop::marshal_as<System::String^>(ac.get_destination());
			this->txt_dest1->Text = prnt_temp;
			this->txt_dest2->Text = prnt_temp;
			prnt_temp = msclr::interop::marshal_as<System::String^>(ac.get_gate());
			this->txt_gate1->Text = prnt_temp;
			this->txt_gate2->Text = prnt_temp;
			prnt_temp = msclr::interop::marshal_as<System::String^>(uc.get_seatInformation());
			this->txt_seat1->Text = prnt_temp;
			this->txt_seat2->Text = prnt_temp;
			prnt_temp = msclr::interop::marshal_as<System::String^>(uc.get_name());
			this->txt_name1->Text = prnt_temp;
			this->txt_name2->Text = prnt_temp;
			prnt_temp = msclr::interop::marshal_as<System::String^>(ac.get_flightName());
			this->txt_flight1->Text = prnt_temp;

			string date = "";
			string time = "";
			string date_t = "";
			string origin;
			origin = ac.get_time();
			int size = origin.size();
			int i = 0;
			while (origin.at(i) != ' ') {
				date += origin.at(i);
				i++;
			}
			for (int j = i+1; j < size; j++) {
				time += origin.at(j);
			}
			for (int j = 5; j < 10; j++) {
				date_t += origin.at(j);
			}

			prnt_temp = msclr::interop::marshal_as<System::String^>(date_t);
			this->txt_date1->Text = prnt_temp;
			this->txt_date2->Text = prnt_temp;
			prnt_temp = msclr::interop::marshal_as<System::String^>(time);
			this->txt_btime1->Text = prnt_temp;
			this->txt_btime2->Text = prnt_temp;

		}

	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
};
}
