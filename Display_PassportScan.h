#pragma once
//#include "Display_Main.h"
#include <msclr/marshal_cppstd.h>
#include "Display_SelectFlight.h"
#include "DBController.h"
#include "UserController.h"
#include "Display_SelectAirline.h"

namespace ProjectCPP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Display_PassportScan에 대한 요약입니다.
	/// </summary>
	public ref class Display_PassportScan : public System::Windows::Forms::Form
	{
	public:

		int flag = 12;
		int flight;
		int passport;

		Display_PassportScan(void)
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
		~Display_PassportScan()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  but_login;
	private: System::Windows::Forms::Label^  lbl_pssprt;
	private: System::Windows::Forms::TextBox^  txt_pssprt;
	private: System::Windows::Forms::Button^  btn_home;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Display_PassportScan::typeid));
			this->but_login = (gcnew System::Windows::Forms::Button());
			this->lbl_pssprt = (gcnew System::Windows::Forms::Label());
			this->txt_pssprt = (gcnew System::Windows::Forms::TextBox());
			this->btn_home = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// but_login
			// 
			this->but_login->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"but_login.BackgroundImage")));
			this->but_login->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->but_login->Location = System::Drawing::Point(986, 547);
			this->but_login->Name = L"but_login";
			this->but_login->Size = System::Drawing::Size(220, 70);
			this->but_login->TabIndex = 0;
			this->but_login->UseVisualStyleBackColor = true;
			this->but_login->Click += gcnew System::EventHandler(this, &Display_PassportScan::but_login_Click);
			// 
			// lbl_pssprt
			// 
			this->lbl_pssprt->AutoSize = true;
			this->lbl_pssprt->BackColor = System::Drawing::Color::Transparent;
			this->lbl_pssprt->Font = (gcnew System::Drawing::Font(L"Consolas", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_pssprt->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_pssprt->Location = System::Drawing::Point(844, 475);
			this->lbl_pssprt->Name = L"lbl_pssprt";
			this->lbl_pssprt->Size = System::Drawing::Size(195, 32);
			this->lbl_pssprt->TabIndex = 1;
			this->lbl_pssprt->Text = L"passport no.";
			this->lbl_pssprt->Click += gcnew System::EventHandler(this, &Display_PassportScan::lbl_pssprt_Click);
			// 
			// txt_pssprt
			// 
			this->txt_pssprt->Font = (gcnew System::Drawing::Font(L"굴림", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->txt_pssprt->Location = System::Drawing::Point(1090, 472);
			this->txt_pssprt->Name = L"txt_pssprt";
			this->txt_pssprt->Size = System::Drawing::Size(267, 39);
			this->txt_pssprt->TabIndex = 2;
			this->txt_pssprt->TextChanged += gcnew System::EventHandler(this, &Display_PassportScan::txt_pssprt_TextChanged);
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
			this->btn_home->TabIndex = 5;
			this->btn_home->UseVisualStyleBackColor = false;
			this->btn_home->Click += gcnew System::EventHandler(this, &Display_PassportScan::btn_home_Click);
			// 
			// Display_PassportScan
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1424, 961);
			this->Controls->Add(this->btn_home);
			this->Controls->Add(this->txt_pssprt);
			this->Controls->Add(this->lbl_pssprt);
			this->Controls->Add(this->but_login);
			this->Name = L"Display_PassportScan";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Display_PassportScan";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_home_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
		flag = 0;
		//Display_Main^ dm = gcnew Display_Main();
		//dm->ShowDialog();
	}
	private: System::Void but_login_Click(System::Object^  sender, System::EventArgs^  e) {
		
		System::String^ pssprt = txt_pssprt->Text;
		string s_pss = msclr::interop::marshal_as<std::string>(pssprt);
		DBController dc;
		dc.init();
		dc.connect();
		UserController uc;
		uc = dc.loadWithPassport(s_pss, flight);

		if (uc.get_residentNumber().compare("") == 0) {
			// 없음
			MessageBox::Show("Unavailable Passport!");
		}
		else if (uc.get_residentNumber().compare("1") == 0) {
			MessageBox::Show("There's no any reservation!");
			flag = 0;
			this->Close();
		}
		else {
			// 있음
			string newpassport = "";
			int size = uc.get_passportNumber().size();
			for (int i = 1; i < size; i++) {
				newpassport += uc.get_passportNumber().at(i);
			}
			passport = stoi(newpassport);

			flag = 13;
			this->Close();
		}
		

		// flight = 0 -> 아시아나
		// flight = 1 -> 코리아나

		
	}
	private: System::Void lbl_pssprt_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void txt_pssprt_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
};
}
