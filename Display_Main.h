#pragma once

#include "Display_Admin_Login.h"
#include "Display_SelectAirline.h"


namespace ProjectCPP {	

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Display_Main에 대한 요약입니다.
	/// </summary>
	public ref class Display_Main : public System::Windows::Forms::Form
	{
	public:

		int flag = 0;

		Display_Main(void)
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
		~Display_Main()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  lbl_announcemnet;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Display_Main::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->lbl_announcemnet = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Location = System::Drawing::Point(-1, 0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(1440, 1000);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Display_Main::button1_Click);
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->Location = System::Drawing::Point(45, 50);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(220, 70);
			this->button2->TabIndex = 1;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Display_Main::button2_Click);
			// 
			// button3
			// 
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button3->Location = System::Drawing::Point(1140, 50);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(220, 70);
			this->button3->TabIndex = 2;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Display_Main::button3_Click);
			// 
			// lbl_announcemnet
			// 
			this->lbl_announcemnet->AutoSize = true;
			this->lbl_announcemnet->BackColor = System::Drawing::Color::Transparent;
			this->lbl_announcemnet->Font = (gcnew System::Drawing::Font(L"Consolas", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_announcemnet->Location = System::Drawing::Point(468, 830);
			this->lbl_announcemnet->Name = L"lbl_announcemnet";
			this->lbl_announcemnet->Size = System::Drawing::Size(518, 56);
			this->lbl_announcemnet->TabIndex = 3;
			this->lbl_announcemnet->Text = L"Press here to start";
			// 
			// Display_Main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1424, 961);
			this->Controls->Add(this->lbl_announcemnet);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Display_Main";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Display_Main";
			this->Load += gcnew System::EventHandler(this, &Display_Main::Display_Main_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		// 메인에서 가장 큰 버튼 눌렸을 때
		//	this->Hide();
		this->Close();
		flag = 11;
		//Display_SelectAirline^ dal = gcnew Display_SelectAirline();
		//dal->Show();
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		// 메인에서 관리자 로그인 
		this->Close();
		flag = 21;
		
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		//exit 버튼
		this ->Close();
		flag = -1;
	}
private: System::Void Display_Main_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}
