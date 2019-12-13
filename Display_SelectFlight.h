#pragma once
#include <msclr/marshal_cppstd.h>
#include "DBController.h"
#include "UserController.h"
#include "AirplaneController.h"

namespace ProjectCPP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Display_SelectFlight에 대한 요약입니다.
	/// </summary>
	public ref class Display_SelectFlight : public System::Windows::Forms::Form
	{
	public:
		int flag = 13;
		int flight;
		int flightName;

	private: System::Windows::Forms::Button^  btn_load;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	public:
		int passport;
		

		Display_SelectFlight(void)
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
		~Display_SelectFlight()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^  lstbx_flightinfo;
	private: System::Windows::Forms::Button^  btn_home;
	protected:

	protected:



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Display_SelectFlight::typeid));
			this->lstbx_flightinfo = (gcnew System::Windows::Forms::ListBox());
			this->btn_home = (gcnew System::Windows::Forms::Button());
			this->btn_load = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lstbx_flightinfo
			// 
			this->lstbx_flightinfo->Font = (gcnew System::Drawing::Font(L"Consolas", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lstbx_flightinfo->FormattingEnabled = true;
			this->lstbx_flightinfo->ItemHeight = 56;
			this->lstbx_flightinfo->Location = System::Drawing::Point(80, 303);
			this->lstbx_flightinfo->Name = L"lstbx_flightinfo";
			this->lstbx_flightinfo->Size = System::Drawing::Size(1226, 564);
			this->lstbx_flightinfo->TabIndex = 0;
			this->lstbx_flightinfo->SelectedIndexChanged += gcnew System::EventHandler(this, &Display_SelectFlight::lstbx_flightinfo_SelectedIndexChanged);
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
			this->btn_home->TabIndex = 4;
			this->btn_home->UseVisualStyleBackColor = false;
			this->btn_home->Click += gcnew System::EventHandler(this, &Display_SelectFlight::btn_home_Click);
			// 
			// btn_load
			// 
			this->btn_load->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btn_load->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->btn_load->BackColor = System::Drawing::Color::Transparent;
			this->btn_load->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_load.BackgroundImage")));
			this->btn_load->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_load->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_load->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->btn_load->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->btn_load->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->btn_load->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_load->Location = System::Drawing::Point(1140, 50);
			this->btn_load->Name = L"btn_load";
			this->btn_load->Size = System::Drawing::Size(220, 70);
			this->btn_load->TabIndex = 5;
			this->btn_load->UseVisualStyleBackColor = false;
			this->btn_load->Click += gcnew System::EventHandler(this, &Display_SelectFlight::btn_load_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label1->Font = (gcnew System::Drawing::Font(L"Consolas", 33.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(84, 235);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(173, 52);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Flight";
			this->label1->Click += gcnew System::EventHandler(this, &Display_SelectFlight::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label2->Font = (gcnew System::Drawing::Font(L"Consolas", 33.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(435, 235);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(123, 52);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Time";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label3->Font = (gcnew System::Drawing::Font(L"Consolas", 33.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(1117, 235);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(148, 52);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Seats";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label4->Font = (gcnew System::Drawing::Font(L"Consolas", 33.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(713, 235);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(298, 52);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Destination";
			// 
			// Display_SelectFlight
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1424, 961);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btn_load);
			this->Controls->Add(this->btn_home);
			this->Controls->Add(this->lstbx_flightinfo);
			this->Name = L"Display_SelectFlight";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Display_SelectFlight";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void lstbx_flightinfo_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		// 클릭 부분
		DBController dc;
		UserController uc;
		AirplaneController ac;
		dc.init();
		dc.connect();

		string newpassport = "";
		newpassport = "M" + to_string(passport);
		uc = dc.loadWithPassport(newpassport, flight);
		if (uc.get_seatInformation().compare("") == 0) {
			// 좌석정보가 없음
			flag = 14;
			this->Close();
		}
		else {
			MessageBox::Show("You have already booked!");
		}

	}
	private: System::Void btn_home_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
		flag = 0;
		//Display_Main^ dm = gcnew Display_Main();
		//dm->ShowDialog();
	}
	private: System::Void btn_load_Click(System::Object^  sender, System::EventArgs^  e) {
		
		// 로드 버튼 클릭
		
		lstbx_flightinfo->Items->Clear();

		DBController dc;
		UserController uc;
		AirplaneController ac;
		dc.init();
		dc.connect();

		string newpassport = "";
		newpassport = "M" + to_string(passport);
		uc = dc.loadWithPassport(newpassport, flight);
		ac = dc.loadWithFlightName(uc.get_bookedFlightName());

		String^ vname;
		string query = "";
		query = uc.get_bookedFlightName() + "   " + ac.get_time() + "   " + ac.get_destination() + "       " + to_string(ac.get_seatInfo()) +"\/30";
		vname = msclr::interop::marshal_as<System::String^>(query);

		string ff = "";
		int size = uc.get_bookedFlightName().size();
		if (size == 0) {
			MessageBox::Show("There's no any booked information!");
		}
		else {
			int i = 1;
			for (i = 1; i < size; i++) {
				ff += uc.get_bookedFlightName().at(i);
			}
			flightName = stoi(ff);

			lstbx_flightinfo->Items->Add(vname);
		}
		
	}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
