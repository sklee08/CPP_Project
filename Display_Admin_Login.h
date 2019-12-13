#pragma once
#include <msclr/marshal_cppstd.h>
#include "DBController.h"

namespace ProjectCPP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	

	/// <summary>
	/// Display_Admin_Login에 대한 요약입니다.
	/// </summary>
	public ref class Display_Admin_Login : public System::Windows::Forms::Form
	{
	public:
		int flag = 21;

		Display_Admin_Login(void)
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
		~Display_Admin_Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btn_home;
	private: System::Windows::Forms::Label^  lbl_admin_ID;
	private: System::Windows::Forms::Label^  lbl_pw;
	private: System::Windows::Forms::TextBox^  txt_ID;
	private: System::Windows::Forms::TextBox^  txt_pw;
	private: System::Windows::Forms::Button^  btn_admin_login;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Display_Admin_Login::typeid));
			this->btn_home = (gcnew System::Windows::Forms::Button());
			this->lbl_admin_ID = (gcnew System::Windows::Forms::Label());
			this->lbl_pw = (gcnew System::Windows::Forms::Label());
			this->txt_ID = (gcnew System::Windows::Forms::TextBox());
			this->txt_pw = (gcnew System::Windows::Forms::TextBox());
			this->btn_admin_login = (gcnew System::Windows::Forms::Button());
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
			this->btn_home->Click += gcnew System::EventHandler(this, &Display_Admin_Login::btn_home_Click);
			// 
			// lbl_admin_ID
			// 
			this->lbl_admin_ID->AutoSize = true;
			this->lbl_admin_ID->BackColor = System::Drawing::Color::Transparent;
			this->lbl_admin_ID->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_admin_ID->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_admin_ID->Location = System::Drawing::Point(309, 402);
			this->lbl_admin_ID->Name = L"lbl_admin_ID";
			this->lbl_admin_ID->Size = System::Drawing::Size(90, 22);
			this->lbl_admin_ID->TabIndex = 7;
			this->lbl_admin_ID->Text = L"Username";
			// 
			// lbl_pw
			// 
			this->lbl_pw->AutoSize = true;
			this->lbl_pw->BackColor = System::Drawing::Color::Transparent;
			this->lbl_pw->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_pw->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_pw->Location = System::Drawing::Point(309, 442);
			this->lbl_pw->Name = L"lbl_pw";
			this->lbl_pw->Size = System::Drawing::Size(90, 22);
			this->lbl_pw->TabIndex = 8;
			this->lbl_pw->Text = L"Password";
			// 
			// txt_ID
			// 
			this->txt_ID->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_ID->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_ID->Location = System::Drawing::Point(424, 396);
			this->txt_ID->Name = L"txt_ID";
			this->txt_ID->Size = System::Drawing::Size(263, 23);
			this->txt_ID->TabIndex = 9;
			this->txt_ID->TextChanged += gcnew System::EventHandler(this, &Display_Admin_Login::textBox1_TextChanged);
			// 
			// txt_pw
			// 
			this->txt_pw->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_pw->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_pw->Location = System::Drawing::Point(424, 442);
			this->txt_pw->Name = L"txt_pw";
			this->txt_pw->Size = System::Drawing::Size(263, 23);
			this->txt_pw->TabIndex = 10;
			this->txt_pw->UseSystemPasswordChar = true;
			// 
			// btn_admin_login
			// 
			this->btn_admin_login->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_admin_login.BackgroundImage")));
			this->btn_admin_login->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_admin_login->Location = System::Drawing::Point(781, 394);
			this->btn_admin_login->Name = L"btn_admin_login";
			this->btn_admin_login->Size = System::Drawing::Size(220, 70);
			this->btn_admin_login->TabIndex = 11;
			this->btn_admin_login->UseVisualStyleBackColor = true;
			this->btn_admin_login->Click += gcnew System::EventHandler(this, &Display_Admin_Login::btn_admin_login_Click);
			// 
			// Display_Admin_Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1424, 961);
			this->Controls->Add(this->btn_admin_login);
			this->Controls->Add(this->txt_pw);
			this->Controls->Add(this->txt_ID);
			this->Controls->Add(this->lbl_pw);
			this->Controls->Add(this->lbl_admin_ID);
			this->Controls->Add(this->btn_home);
			this->Name = L"Display_Admin_Login";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Display_Admin_Login";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {

	}
	private: System::Void btn_admin_login_Click(System::Object^  sender, System::EventArgs^  e) {
		// 로그인 버튼 
		DBController dc;
		dc.init();
		dc.connect();
		System::String^ id = txt_ID->Text;
		System::String^ pw = txt_pw->Text;
		string iid = msclr::interop::marshal_as<std::string>(id);
		string ppw = msclr::interop::marshal_as<std::string>(pw);

		if (dc.login(iid, ppw)) {
			// 로그인 성공
			// 로그인 성공시 
			
			this->Close();
			flag = 22;
		}
		else {
			// 로그인 실패
			MessageBox::Show("Incorrect ID or PW");
		}


	}
private: System::Void btn_home_Click(System::Object^  sender, System::EventArgs^  e) {
	// 홈 버튼
	this->Close();
	flag = 0;
}
};
}
