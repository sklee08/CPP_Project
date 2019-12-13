#pragma once
#include "DBController.h"
#include "AirplaneController.h"
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
	/// Display_SelectSeat에 대한 요약입니다.
	/// </summary>
	public ref class Display_SelectSeat : public System::Windows::Forms::Form
	{
		private: System::Windows::Forms::Button^  Load_btn;
		public:
		
		int flag = 14;
		int flight;
		int passport;
	private: System::Windows::Forms::Button^  btn_confirm;
	private: System::Windows::Forms::TextBox^  txt_confirm;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	public:


		int flightName;

		Display_SelectSeat(void)
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
		~Display_SelectSeat()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btn_seat_C1;
	protected:
	private: System::Windows::Forms::Button^  btn_seat_D1;
	private: System::Windows::Forms::Button^  btn_seat_E1;
	private: System::Windows::Forms::Button^  btn_seat_F1;
	private: System::Windows::Forms::Button^  btn_seat_C2;
	private: System::Windows::Forms::Button^  btn_seat_D2;
	private: System::Windows::Forms::Button^  btn_seat_F3;
	private: System::Windows::Forms::Button^  btn_seat_E3;
	private: System::Windows::Forms::Button^  btn_seat_D3;
	private: System::Windows::Forms::Button^  btn_seat_C3;
	private: System::Windows::Forms::Button^  btn_seat_F2;
	private: System::Windows::Forms::Button^  btn_seat_E2;
	private: System::Windows::Forms::Button^  btn_seat_J2;
	private: System::Windows::Forms::Button^  btn_seat_I2;
	private: System::Windows::Forms::Button^  btn_seat_J3;
	private: System::Windows::Forms::Button^  btn_seat_I3;
	private: System::Windows::Forms::Button^  btn_seat_H3;
	private: System::Windows::Forms::Button^  btn_seat_G3;
	private: System::Windows::Forms::Button^  btn_seat_H2;
	private: System::Windows::Forms::Button^  btn_seat_G2;
	private: System::Windows::Forms::Button^  btn_seat_J1;
	private: System::Windows::Forms::Button^  btn_seat_I1;
	private: System::Windows::Forms::Button^  btn_seat_H1;
	private: System::Windows::Forms::Button^  btn_seat_G1;
	private: System::Windows::Forms::Button^  btn_seat_B3;
	private: System::Windows::Forms::Button^  btn_seat_B2;
	private: System::Windows::Forms::Button^  btn_seat_B1;
	private: System::Windows::Forms::Button^  btn_seat_A3;
	private: System::Windows::Forms::Button^  btn_seat_A2;
	private: System::Windows::Forms::Button^  btn_seat_A1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Display_SelectSeat::typeid));
			this->btn_seat_C1 = (gcnew System::Windows::Forms::Button());
			this->btn_seat_D1 = (gcnew System::Windows::Forms::Button());
			this->btn_seat_E1 = (gcnew System::Windows::Forms::Button());
			this->btn_seat_F1 = (gcnew System::Windows::Forms::Button());
			this->btn_seat_C2 = (gcnew System::Windows::Forms::Button());
			this->btn_seat_D2 = (gcnew System::Windows::Forms::Button());
			this->btn_seat_F3 = (gcnew System::Windows::Forms::Button());
			this->btn_seat_E3 = (gcnew System::Windows::Forms::Button());
			this->btn_seat_D3 = (gcnew System::Windows::Forms::Button());
			this->btn_seat_C3 = (gcnew System::Windows::Forms::Button());
			this->btn_seat_F2 = (gcnew System::Windows::Forms::Button());
			this->btn_seat_E2 = (gcnew System::Windows::Forms::Button());
			this->btn_seat_J2 = (gcnew System::Windows::Forms::Button());
			this->btn_seat_I2 = (gcnew System::Windows::Forms::Button());
			this->btn_seat_J3 = (gcnew System::Windows::Forms::Button());
			this->btn_seat_I3 = (gcnew System::Windows::Forms::Button());
			this->btn_seat_H3 = (gcnew System::Windows::Forms::Button());
			this->btn_seat_G3 = (gcnew System::Windows::Forms::Button());
			this->btn_seat_H2 = (gcnew System::Windows::Forms::Button());
			this->btn_seat_G2 = (gcnew System::Windows::Forms::Button());
			this->btn_seat_J1 = (gcnew System::Windows::Forms::Button());
			this->btn_seat_I1 = (gcnew System::Windows::Forms::Button());
			this->btn_seat_H1 = (gcnew System::Windows::Forms::Button());
			this->btn_seat_G1 = (gcnew System::Windows::Forms::Button());
			this->btn_seat_B3 = (gcnew System::Windows::Forms::Button());
			this->btn_seat_B2 = (gcnew System::Windows::Forms::Button());
			this->btn_seat_B1 = (gcnew System::Windows::Forms::Button());
			this->btn_seat_A3 = (gcnew System::Windows::Forms::Button());
			this->btn_seat_A2 = (gcnew System::Windows::Forms::Button());
			this->btn_seat_A1 = (gcnew System::Windows::Forms::Button());
			this->Load_btn = (gcnew System::Windows::Forms::Button());
			this->btn_confirm = (gcnew System::Windows::Forms::Button());
			this->txt_confirm = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btn_seat_C1
			// 
			this->btn_seat_C1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_seat_C1.BackgroundImage")));
			this->btn_seat_C1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_seat_C1->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_seat_C1->Location = System::Drawing::Point(309, 313);
			this->btn_seat_C1->Name = L"btn_seat_C1";
			this->btn_seat_C1->Size = System::Drawing::Size(70, 70);
			this->btn_seat_C1->TabIndex = 6;
			this->btn_seat_C1->Text = L"C1";
			this->btn_seat_C1->UseVisualStyleBackColor = true;
			this->btn_seat_C1->Click += gcnew System::EventHandler(this, &Display_SelectSeat::btn_seat_C1_Click_1);
			// 
			// btn_seat_D1
			// 
			this->btn_seat_D1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_seat_D1.BackgroundImage")));
			this->btn_seat_D1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_seat_D1->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_seat_D1->Location = System::Drawing::Point(309, 389);
			this->btn_seat_D1->Name = L"btn_seat_D1";
			this->btn_seat_D1->Size = System::Drawing::Size(70, 70);
			this->btn_seat_D1->TabIndex = 9;
			this->btn_seat_D1->Text = L"D1";
			this->btn_seat_D1->UseVisualStyleBackColor = true;
			this->btn_seat_D1->Click += gcnew System::EventHandler(this, &Display_SelectSeat::btn_seat_D1_Click_1);
			// 
			// btn_seat_E1
			// 
			this->btn_seat_E1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_seat_E1.BackgroundImage")));
			this->btn_seat_E1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_seat_E1->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_seat_E1->Location = System::Drawing::Point(309, 465);
			this->btn_seat_E1->Name = L"btn_seat_E1";
			this->btn_seat_E1->Size = System::Drawing::Size(70, 70);
			this->btn_seat_E1->TabIndex = 12;
			this->btn_seat_E1->Text = L"E1";
			this->btn_seat_E1->UseVisualStyleBackColor = true;
			this->btn_seat_E1->Click += gcnew System::EventHandler(this, &Display_SelectSeat::btn_seat_E1_Click_1);
			// 
			// btn_seat_F1
			// 
			this->btn_seat_F1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_seat_F1.BackgroundImage")));
			this->btn_seat_F1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_seat_F1->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_seat_F1->Location = System::Drawing::Point(309, 542);
			this->btn_seat_F1->Name = L"btn_seat_F1";
			this->btn_seat_F1->Size = System::Drawing::Size(70, 70);
			this->btn_seat_F1->TabIndex = 15;
			this->btn_seat_F1->Text = L"F1";
			this->btn_seat_F1->UseVisualStyleBackColor = true;
			this->btn_seat_F1->Click += gcnew System::EventHandler(this, &Display_SelectSeat::btn_seat_F1_Click_1);
			// 
			// btn_seat_C2
			// 
			this->btn_seat_C2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_seat_C2.BackgroundImage")));
			this->btn_seat_C2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_seat_C2->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_seat_C2->Location = System::Drawing::Point(454, 313);
			this->btn_seat_C2->Name = L"btn_seat_C2";
			this->btn_seat_C2->Size = System::Drawing::Size(70, 70);
			this->btn_seat_C2->TabIndex = 7;
			this->btn_seat_C2->Text = L"C2";
			this->btn_seat_C2->UseVisualStyleBackColor = true;
			this->btn_seat_C2->Click += gcnew System::EventHandler(this, &Display_SelectSeat::btn_seat_C2_Click_1);
			// 
			// btn_seat_D2
			// 
			this->btn_seat_D2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_seat_D2.BackgroundImage")));
			this->btn_seat_D2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_seat_D2->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_seat_D2->Location = System::Drawing::Point(454, 389);
			this->btn_seat_D2->Name = L"btn_seat_D2";
			this->btn_seat_D2->Size = System::Drawing::Size(70, 70);
			this->btn_seat_D2->TabIndex = 10;
			this->btn_seat_D2->Text = L"D2";
			this->btn_seat_D2->UseVisualStyleBackColor = true;
			this->btn_seat_D2->Click += gcnew System::EventHandler(this, &Display_SelectSeat::btn_seat_D2_Click_1);
			// 
			// btn_seat_F3
			// 
			this->btn_seat_F3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_seat_F3.BackgroundImage")));
			this->btn_seat_F3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_seat_F3->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_seat_F3->Location = System::Drawing::Point(596, 542);
			this->btn_seat_F3->Name = L"btn_seat_F3";
			this->btn_seat_F3->Size = System::Drawing::Size(70, 70);
			this->btn_seat_F3->TabIndex = 17;
			this->btn_seat_F3->Text = L"F3";
			this->btn_seat_F3->UseVisualStyleBackColor = true;
			this->btn_seat_F3->Click += gcnew System::EventHandler(this, &Display_SelectSeat::btn_seat_F3_Click_1);
			// 
			// btn_seat_E3
			// 
			this->btn_seat_E3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_seat_E3.BackgroundImage")));
			this->btn_seat_E3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_seat_E3->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_seat_E3->Location = System::Drawing::Point(596, 465);
			this->btn_seat_E3->Name = L"btn_seat_E3";
			this->btn_seat_E3->Size = System::Drawing::Size(70, 70);
			this->btn_seat_E3->TabIndex = 14;
			this->btn_seat_E3->Text = L"E3";
			this->btn_seat_E3->UseVisualStyleBackColor = true;
			this->btn_seat_E3->Click += gcnew System::EventHandler(this, &Display_SelectSeat::btn_seat_E3_Click_1);
			// 
			// btn_seat_D3
			// 
			this->btn_seat_D3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_seat_D3.BackgroundImage")));
			this->btn_seat_D3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_seat_D3->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_seat_D3->Location = System::Drawing::Point(596, 389);
			this->btn_seat_D3->Name = L"btn_seat_D3";
			this->btn_seat_D3->Size = System::Drawing::Size(70, 70);
			this->btn_seat_D3->TabIndex = 11;
			this->btn_seat_D3->Text = L"D3";
			this->btn_seat_D3->UseVisualStyleBackColor = true;
			this->btn_seat_D3->Click += gcnew System::EventHandler(this, &Display_SelectSeat::btn_seat_D3_Click_1);
			// 
			// btn_seat_C3
			// 
			this->btn_seat_C3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_seat_C3.BackgroundImage")));
			this->btn_seat_C3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_seat_C3->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_seat_C3->Location = System::Drawing::Point(596, 313);
			this->btn_seat_C3->Name = L"btn_seat_C3";
			this->btn_seat_C3->Size = System::Drawing::Size(70, 70);
			this->btn_seat_C3->TabIndex = 8;
			this->btn_seat_C3->Text = L"C3";
			this->btn_seat_C3->UseVisualStyleBackColor = true;
			this->btn_seat_C3->Click += gcnew System::EventHandler(this, &Display_SelectSeat::btn_seat_C3_Click_1);
			// 
			// btn_seat_F2
			// 
			this->btn_seat_F2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_seat_F2.BackgroundImage")));
			this->btn_seat_F2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_seat_F2->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_seat_F2->Location = System::Drawing::Point(454, 541);
			this->btn_seat_F2->Name = L"btn_seat_F2";
			this->btn_seat_F2->Size = System::Drawing::Size(70, 70);
			this->btn_seat_F2->TabIndex = 16;
			this->btn_seat_F2->Text = L"F2";
			this->btn_seat_F2->UseVisualStyleBackColor = true;
			this->btn_seat_F2->Click += gcnew System::EventHandler(this, &Display_SelectSeat::btn_seat_F2_Click_1);
			// 
			// btn_seat_E2
			// 
			this->btn_seat_E2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_seat_E2.BackgroundImage")));
			this->btn_seat_E2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_seat_E2->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_seat_E2->Location = System::Drawing::Point(454, 465);
			this->btn_seat_E2->Name = L"btn_seat_E2";
			this->btn_seat_E2->Size = System::Drawing::Size(70, 70);
			this->btn_seat_E2->TabIndex = 13;
			this->btn_seat_E2->Text = L"E2";
			this->btn_seat_E2->UseVisualStyleBackColor = true;
			this->btn_seat_E2->Click += gcnew System::EventHandler(this, &Display_SelectSeat::btn_seat_E2_Click_1);
			// 
			// btn_seat_J2
			// 
			this->btn_seat_J2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_seat_J2.BackgroundImage")));
			this->btn_seat_J2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_seat_J2->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_seat_J2->Location = System::Drawing::Point(454, 846);
			this->btn_seat_J2->Name = L"btn_seat_J2";
			this->btn_seat_J2->Size = System::Drawing::Size(70, 70);
			this->btn_seat_J2->TabIndex = 28;
			this->btn_seat_J2->Text = L"J2";
			this->btn_seat_J2->UseVisualStyleBackColor = true;
			this->btn_seat_J2->Click += gcnew System::EventHandler(this, &Display_SelectSeat::btn_seat_J2_Click_1);
			// 
			// btn_seat_I2
			// 
			this->btn_seat_I2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_seat_I2.BackgroundImage")));
			this->btn_seat_I2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_seat_I2->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_seat_I2->Location = System::Drawing::Point(454, 770);
			this->btn_seat_I2->Name = L"btn_seat_I2";
			this->btn_seat_I2->Size = System::Drawing::Size(70, 70);
			this->btn_seat_I2->TabIndex = 25;
			this->btn_seat_I2->Text = L"I2";
			this->btn_seat_I2->UseVisualStyleBackColor = true;
			this->btn_seat_I2->Click += gcnew System::EventHandler(this, &Display_SelectSeat::btn_seat_I2_Click_1);
			// 
			// btn_seat_J3
			// 
			this->btn_seat_J3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_seat_J3.BackgroundImage")));
			this->btn_seat_J3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_seat_J3->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_seat_J3->Location = System::Drawing::Point(596, 847);
			this->btn_seat_J3->Name = L"btn_seat_J3";
			this->btn_seat_J3->Size = System::Drawing::Size(70, 70);
			this->btn_seat_J3->TabIndex = 29;
			this->btn_seat_J3->Text = L"J3";
			this->btn_seat_J3->UseVisualStyleBackColor = true;
			this->btn_seat_J3->Click += gcnew System::EventHandler(this, &Display_SelectSeat::btn_seat_J3_Click_1);
			// 
			// btn_seat_I3
			// 
			this->btn_seat_I3->BackColor = System::Drawing::SystemColors::Control;
			this->btn_seat_I3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_seat_I3.BackgroundImage")));
			this->btn_seat_I3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_seat_I3->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_seat_I3->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn_seat_I3->Location = System::Drawing::Point(596, 770);
			this->btn_seat_I3->Name = L"btn_seat_I3";
			this->btn_seat_I3->Size = System::Drawing::Size(70, 70);
			this->btn_seat_I3->TabIndex = 26;
			this->btn_seat_I3->Text = L"I3";
			this->btn_seat_I3->UseVisualStyleBackColor = false;
			this->btn_seat_I3->Click += gcnew System::EventHandler(this, &Display_SelectSeat::btn_seat_I3_Click_1);
			// 
			// btn_seat_H3
			// 
			this->btn_seat_H3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_seat_H3.BackgroundImage")));
			this->btn_seat_H3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_seat_H3->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_seat_H3->Location = System::Drawing::Point(596, 694);
			this->btn_seat_H3->Name = L"btn_seat_H3";
			this->btn_seat_H3->Size = System::Drawing::Size(70, 70);
			this->btn_seat_H3->TabIndex = 23;
			this->btn_seat_H3->Text = L"H3";
			this->btn_seat_H3->UseVisualStyleBackColor = true;
			this->btn_seat_H3->Click += gcnew System::EventHandler(this, &Display_SelectSeat::btn_seat_H3_Click_1);
			// 
			// btn_seat_G3
			// 
			this->btn_seat_G3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_seat_G3.BackgroundImage")));
			this->btn_seat_G3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_seat_G3->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_seat_G3->Location = System::Drawing::Point(596, 618);
			this->btn_seat_G3->Name = L"btn_seat_G3";
			this->btn_seat_G3->Size = System::Drawing::Size(70, 70);
			this->btn_seat_G3->TabIndex = 20;
			this->btn_seat_G3->Text = L"G3";
			this->btn_seat_G3->UseVisualStyleBackColor = true;
			this->btn_seat_G3->Click += gcnew System::EventHandler(this, &Display_SelectSeat::btn_seat_G3_Click_1);
			// 
			// btn_seat_H2
			// 
			this->btn_seat_H2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_seat_H2.BackgroundImage")));
			this->btn_seat_H2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_seat_H2->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_seat_H2->Location = System::Drawing::Point(454, 694);
			this->btn_seat_H2->Name = L"btn_seat_H2";
			this->btn_seat_H2->Size = System::Drawing::Size(70, 70);
			this->btn_seat_H2->TabIndex = 22;
			this->btn_seat_H2->Text = L"H2";
			this->btn_seat_H2->UseVisualStyleBackColor = true;
			this->btn_seat_H2->Click += gcnew System::EventHandler(this, &Display_SelectSeat::btn_seat_H2_Click_1);
			// 
			// btn_seat_G2
			// 
			this->btn_seat_G2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_seat_G2.BackgroundImage")));
			this->btn_seat_G2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_seat_G2->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_seat_G2->Location = System::Drawing::Point(454, 618);
			this->btn_seat_G2->Name = L"btn_seat_G2";
			this->btn_seat_G2->Size = System::Drawing::Size(70, 70);
			this->btn_seat_G2->TabIndex = 19;
			this->btn_seat_G2->Text = L"G2";
			this->btn_seat_G2->UseVisualStyleBackColor = true;
			this->btn_seat_G2->Click += gcnew System::EventHandler(this, &Display_SelectSeat::btn_seat_G2_Click_1);
			// 
			// btn_seat_J1
			// 
			this->btn_seat_J1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_seat_J1.BackgroundImage")));
			this->btn_seat_J1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_seat_J1->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_seat_J1->Location = System::Drawing::Point(309, 847);
			this->btn_seat_J1->Name = L"btn_seat_J1";
			this->btn_seat_J1->Size = System::Drawing::Size(70, 70);
			this->btn_seat_J1->TabIndex = 27;
			this->btn_seat_J1->Text = L"J1";
			this->btn_seat_J1->UseVisualStyleBackColor = true;
			this->btn_seat_J1->Click += gcnew System::EventHandler(this, &Display_SelectSeat::btn_seat_J1_Click_1);
			// 
			// btn_seat_I1
			// 
			this->btn_seat_I1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_seat_I1.BackgroundImage")));
			this->btn_seat_I1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_seat_I1->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_seat_I1->Location = System::Drawing::Point(309, 770);
			this->btn_seat_I1->Name = L"btn_seat_I1";
			this->btn_seat_I1->Size = System::Drawing::Size(70, 70);
			this->btn_seat_I1->TabIndex = 24;
			this->btn_seat_I1->Text = L"I1";
			this->btn_seat_I1->UseVisualStyleBackColor = true;
			this->btn_seat_I1->Click += gcnew System::EventHandler(this, &Display_SelectSeat::btn_seat_I1_Click_1);
			// 
			// btn_seat_H1
			// 
			this->btn_seat_H1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_seat_H1.BackgroundImage")));
			this->btn_seat_H1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_seat_H1->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_seat_H1->Location = System::Drawing::Point(309, 694);
			this->btn_seat_H1->Name = L"btn_seat_H1";
			this->btn_seat_H1->Size = System::Drawing::Size(70, 70);
			this->btn_seat_H1->TabIndex = 21;
			this->btn_seat_H1->Text = L"H1";
			this->btn_seat_H1->UseVisualStyleBackColor = true;
			this->btn_seat_H1->Click += gcnew System::EventHandler(this, &Display_SelectSeat::btn_seat_H1_Click_1);
			// 
			// btn_seat_G1
			// 
			this->btn_seat_G1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_seat_G1.BackgroundImage")));
			this->btn_seat_G1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_seat_G1->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_seat_G1->Location = System::Drawing::Point(309, 618);
			this->btn_seat_G1->Name = L"btn_seat_G1";
			this->btn_seat_G1->Size = System::Drawing::Size(70, 70);
			this->btn_seat_G1->TabIndex = 18;
			this->btn_seat_G1->Text = L"G1";
			this->btn_seat_G1->UseVisualStyleBackColor = true;
			this->btn_seat_G1->Click += gcnew System::EventHandler(this, &Display_SelectSeat::btn_seat_G1_Click_1);
			// 
			// btn_seat_B3
			// 
			this->btn_seat_B3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_seat_B3.BackgroundImage")));
			this->btn_seat_B3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_seat_B3->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_seat_B3->Location = System::Drawing::Point(596, 237);
			this->btn_seat_B3->Name = L"btn_seat_B3";
			this->btn_seat_B3->Size = System::Drawing::Size(70, 70);
			this->btn_seat_B3->TabIndex = 5;
			this->btn_seat_B3->Text = L"B3";
			this->btn_seat_B3->UseVisualStyleBackColor = true;
			this->btn_seat_B3->Click += gcnew System::EventHandler(this, &Display_SelectSeat::btn_seat_B3_Click_1);
			// 
			// btn_seat_B2
			// 
			this->btn_seat_B2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_seat_B2.BackgroundImage")));
			this->btn_seat_B2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_seat_B2->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_seat_B2->Location = System::Drawing::Point(454, 237);
			this->btn_seat_B2->Name = L"btn_seat_B2";
			this->btn_seat_B2->Size = System::Drawing::Size(70, 70);
			this->btn_seat_B2->TabIndex = 4;
			this->btn_seat_B2->Text = L"B2";
			this->btn_seat_B2->UseVisualStyleBackColor = true;
			this->btn_seat_B2->Click += gcnew System::EventHandler(this, &Display_SelectSeat::btn_seat_B2_Click_1);
			// 
			// btn_seat_B1
			// 
			this->btn_seat_B1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_seat_B1.BackgroundImage")));
			this->btn_seat_B1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_seat_B1->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_seat_B1->Location = System::Drawing::Point(309, 237);
			this->btn_seat_B1->Name = L"btn_seat_B1";
			this->btn_seat_B1->Size = System::Drawing::Size(70, 70);
			this->btn_seat_B1->TabIndex = 3;
			this->btn_seat_B1->Text = L"B1";
			this->btn_seat_B1->UseVisualStyleBackColor = true;
			this->btn_seat_B1->Click += gcnew System::EventHandler(this, &Display_SelectSeat::btn_seat_B1_Click_1);
			// 
			// btn_seat_A3
			// 
			this->btn_seat_A3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_seat_A3.BackgroundImage")));
			this->btn_seat_A3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_seat_A3->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_seat_A3->Location = System::Drawing::Point(596, 161);
			this->btn_seat_A3->Name = L"btn_seat_A3";
			this->btn_seat_A3->Size = System::Drawing::Size(70, 70);
			this->btn_seat_A3->TabIndex = 2;
			this->btn_seat_A3->Text = L"A3";
			this->btn_seat_A3->UseVisualStyleBackColor = true;
			this->btn_seat_A3->Click += gcnew System::EventHandler(this, &Display_SelectSeat::btn_seat_A3_Click_1);
			// 
			// btn_seat_A2
			// 
			this->btn_seat_A2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_seat_A2.BackgroundImage")));
			this->btn_seat_A2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_seat_A2->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_seat_A2->Location = System::Drawing::Point(454, 161);
			this->btn_seat_A2->Name = L"btn_seat_A2";
			this->btn_seat_A2->Size = System::Drawing::Size(70, 70);
			this->btn_seat_A2->TabIndex = 1;
			this->btn_seat_A2->Text = L"A2";
			this->btn_seat_A2->UseVisualStyleBackColor = true;
			this->btn_seat_A2->Click += gcnew System::EventHandler(this, &Display_SelectSeat::btn_seat_A2_Click_1);
			// 
			// btn_seat_A1
			// 
			this->btn_seat_A1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_seat_A1.BackgroundImage")));
			this->btn_seat_A1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_seat_A1->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_seat_A1->Location = System::Drawing::Point(309, 161);
			this->btn_seat_A1->Name = L"btn_seat_A1";
			this->btn_seat_A1->Size = System::Drawing::Size(70, 70);
			this->btn_seat_A1->TabIndex = 0;
			this->btn_seat_A1->Text = L"A1";
			this->btn_seat_A1->UseVisualStyleBackColor = true;
			this->btn_seat_A1->Click += gcnew System::EventHandler(this, &Display_SelectSeat::btn_seat_A1_Click_1);
			// 
			// Load_btn
			// 
			this->Load_btn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Load_btn.BackgroundImage")));
			this->Load_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Load_btn->Location = System::Drawing::Point(1140, 50);
			this->Load_btn->Name = L"Load_btn";
			this->Load_btn->Size = System::Drawing::Size(220, 70);
			this->Load_btn->TabIndex = 30;
			this->Load_btn->UseVisualStyleBackColor = true;
			this->Load_btn->Click += gcnew System::EventHandler(this, &Display_SelectSeat::Load_btn_Click);
			// 
			// btn_confirm
			// 
			this->btn_confirm->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_confirm.BackgroundImage")));
			this->btn_confirm->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_confirm->Location = System::Drawing::Point(1088, 771);
			this->btn_confirm->Name = L"btn_confirm";
			this->btn_confirm->Size = System::Drawing::Size(220, 70);
			this->btn_confirm->TabIndex = 31;
			this->btn_confirm->UseVisualStyleBackColor = true;
			this->btn_confirm->Click += gcnew System::EventHandler(this, &Display_SelectSeat::btn_confirm_Click);
			// 
			// txt_confirm
			// 
			this->txt_confirm->Font = (gcnew System::Drawing::Font(L"Consolas", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_confirm->Location = System::Drawing::Point(832, 775);
			this->txt_confirm->Name = L"txt_confirm";
			this->txt_confirm->Size = System::Drawing::Size(159, 64);
			this->txt_confirm->TabIndex = 32;
			this->txt_confirm->TextChanged += gcnew System::EventHandler(this, &Display_SelectSeat::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Consolas", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(852, 694);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(415, 28);
			this->label1->TabIndex = 33;
			this->label1->Text = L"Here is the selected seat below";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Consolas", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(896, 863);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(337, 28);
			this->label2->TabIndex = 34;
			this->label2->Text = L"Press confirm to continue";
			// 
			// Display_SelectSeat
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1424, 961);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txt_confirm);
			this->Controls->Add(this->btn_confirm);
			this->Controls->Add(this->Load_btn);
			this->Controls->Add(this->btn_seat_A3);
			this->Controls->Add(this->btn_seat_A2);
			this->Controls->Add(this->btn_seat_A1);
			this->Controls->Add(this->btn_seat_B3);
			this->Controls->Add(this->btn_seat_B2);
			this->Controls->Add(this->btn_seat_B1);
			this->Controls->Add(this->btn_seat_J2);
			this->Controls->Add(this->btn_seat_I2);
			this->Controls->Add(this->btn_seat_J3);
			this->Controls->Add(this->btn_seat_I3);
			this->Controls->Add(this->btn_seat_H3);
			this->Controls->Add(this->btn_seat_G3);
			this->Controls->Add(this->btn_seat_H2);
			this->Controls->Add(this->btn_seat_G2);
			this->Controls->Add(this->btn_seat_J1);
			this->Controls->Add(this->btn_seat_I1);
			this->Controls->Add(this->btn_seat_H1);
			this->Controls->Add(this->btn_seat_G1);
			this->Controls->Add(this->btn_seat_F2);
			this->Controls->Add(this->btn_seat_E2);
			this->Controls->Add(this->btn_seat_F3);
			this->Controls->Add(this->btn_seat_E3);
			this->Controls->Add(this->btn_seat_D3);
			this->Controls->Add(this->btn_seat_C3);
			this->Controls->Add(this->btn_seat_D2);
			this->Controls->Add(this->btn_seat_C2);
			this->Controls->Add(this->btn_seat_F1);
			this->Controls->Add(this->btn_seat_E1);
			this->Controls->Add(this->btn_seat_D1);
			this->Controls->Add(this->btn_seat_C1);
			this->Name = L"Display_SelectSeat";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Display_SelectSeat";
			this->Load += gcnew System::EventHandler(this, &Display_SelectSeat::Display_SelectSeat_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_seat_C1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void btn_seat_J3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void Load_btn_Click(System::Object^  sender, System::EventArgs^  e) {
		// 로드 버튼 눌릴때

		if (flight == 0) {
			// 아시아나 
			string name = "";
			name += "A";
			name += to_string(flightName);
			DBController dc;
			AirplaneController ac;
			SeatController sc;

			dc.init();
			dc.connect();
			ac = dc.loadWithFlightName(name);
			sc = dc.loadSeatInfo(name);
			string status = sc.get_seat_status();

			if (status.at(0) == '0') {
				this->btn_seat_A1->BackColor = System::Drawing::Color::Red;
				this->btn_seat_A1->Enabled = false;
				this->btn_seat_A1->Font = (gcnew System::Drawing::Font(L"Consolas", 38.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btn_seat_A1->Text = L"X";
				this->btn_seat_A1->ForeColor = System::Drawing::Color::Red;
			}
			if (status.at(1) == '0') {
				this->btn_seat_A2->BackColor = System::Drawing::Color::Red;
				this->btn_seat_A2->Enabled = false;
				this->btn_seat_A2->Font = (gcnew System::Drawing::Font(L"Consolas", 38.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btn_seat_A2->Text = L"X";
				this->btn_seat_A2->ForeColor = System::Drawing::Color::Red;
			}
			if (status.at(2) == '0') {
				this->btn_seat_A3->BackColor = System::Drawing::Color::Red;
				this->btn_seat_A3->Enabled = false;
				this->btn_seat_A3->Font = (gcnew System::Drawing::Font(L"Consolas", 38.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btn_seat_A3->Text = L"X";
				this->btn_seat_A3->ForeColor = System::Drawing::Color::Red;
			}
			if (status.at(3) == '0') {
				this->btn_seat_B1->BackColor = System::Drawing::Color::Red;
				this->btn_seat_B1->Enabled = false;
				this->btn_seat_B1->Font = (gcnew System::Drawing::Font(L"Consolas", 38.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btn_seat_B1->Text = L"X";
				this->btn_seat_B1->ForeColor = System::Drawing::Color::Red;
			}
			if (status.at(4) == '0') {
				this->btn_seat_B2->BackColor = System::Drawing::Color::Red;
				this->btn_seat_B2->Enabled = false;
				this->btn_seat_B2->Font = (gcnew System::Drawing::Font(L"Consolas", 38.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btn_seat_B2->Text = L"X";
				this->btn_seat_B2->ForeColor = System::Drawing::Color::Red;
			}
			if (status.at(5) == '0') {
				this->btn_seat_B3->BackColor = System::Drawing::Color::Red;
				this->btn_seat_B3->Enabled = false;
				this->btn_seat_B3->Font = (gcnew System::Drawing::Font(L"Consolas", 38.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btn_seat_B3->Text = L"X";
				this->btn_seat_B3->ForeColor = System::Drawing::Color::Red;
			}
			if (status.at(6) == '0') {
				this->btn_seat_C1->BackColor = System::Drawing::Color::Red;
				this->btn_seat_C1->Enabled = false;
				this->btn_seat_C1->Font = (gcnew System::Drawing::Font(L"Consolas", 38.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btn_seat_C1->Text = L"X";
				this->btn_seat_C1->ForeColor = System::Drawing::Color::Red;
			}
			if (status.at(7) == '0') {
				this->btn_seat_C2->BackColor = System::Drawing::Color::Red;
				this->btn_seat_C2->Enabled = false;
				this->btn_seat_C2->Font = (gcnew System::Drawing::Font(L"Consolas", 38.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btn_seat_C2->Text = L"X";
				this->btn_seat_C2->ForeColor = System::Drawing::Color::Red;
			}
			if (status.at(8) == '0') {
				this->btn_seat_C3->BackColor = System::Drawing::Color::Red;
				this->btn_seat_C3->Enabled = false;
				this->btn_seat_C3->Font = (gcnew System::Drawing::Font(L"Consolas", 38.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btn_seat_C3->Text = L"X";
				this->btn_seat_C3->ForeColor = System::Drawing::Color::Red;
			}
			if (status.at(9) == '0') {
				this->btn_seat_D1->BackColor = System::Drawing::Color::Red;
				this->btn_seat_D1->Enabled = false;
				this->btn_seat_D1->Font = (gcnew System::Drawing::Font(L"Consolas", 38.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btn_seat_D1->Text = L"X";
				this->btn_seat_D1->ForeColor = System::Drawing::Color::Red;
			}
			if (status.at(10) == '0') {
				this->btn_seat_D2->BackColor = System::Drawing::Color::Red;
				this->btn_seat_D2->Enabled = false;
				this->btn_seat_D2->Font = (gcnew System::Drawing::Font(L"Consolas", 38.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btn_seat_D2->Text = L"X";
				this->btn_seat_D2->ForeColor = System::Drawing::Color::Red;
			}
			if (status.at(11) == '0') {
				this->btn_seat_D3->BackColor = System::Drawing::Color::Red;
				this->btn_seat_D3->Enabled = false;
				this->btn_seat_D3->Font = (gcnew System::Drawing::Font(L"Consolas", 38.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btn_seat_D3->Text = L"X";
				this->btn_seat_D3->ForeColor = System::Drawing::Color::Red;
			}
			if (status.at(12) == '0') {
				this->btn_seat_E1->BackColor = System::Drawing::Color::Red;
				this->btn_seat_E1->Enabled = false;
				this->btn_seat_E1->Font = (gcnew System::Drawing::Font(L"Consolas", 38.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btn_seat_E1->Text = L"X";
				this->btn_seat_E1->ForeColor = System::Drawing::Color::Red;
			}
			if (status.at(13) == '0') {
				this->btn_seat_E2->BackColor = System::Drawing::Color::Red;
				this->btn_seat_E2->Enabled = false;
				this->btn_seat_E2->Font = (gcnew System::Drawing::Font(L"Consolas", 38.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btn_seat_E2->Text = L"X";
				this->btn_seat_E2->ForeColor = System::Drawing::Color::Red;
			}
			if (status.at(14) == '0') {
				this->btn_seat_E3->BackColor = System::Drawing::Color::Red;
				this->btn_seat_E3->Enabled = false;
				this->btn_seat_E3->Font = (gcnew System::Drawing::Font(L"Consolas", 38.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btn_seat_E3->Text = L"X";
				this->btn_seat_E3->ForeColor = System::Drawing::Color::Red;
			}
			if (status.at(15) == '0') {
				this->btn_seat_F1->BackColor = System::Drawing::Color::Red;
				this->btn_seat_F1->Enabled = false;
				this->btn_seat_F1->Font = (gcnew System::Drawing::Font(L"Consolas", 38.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btn_seat_F1->Text = L"X";
				this->btn_seat_F1->ForeColor = System::Drawing::Color::Red;
			}
			if (status.at(16) == '0') {
				this->btn_seat_F2->BackColor = System::Drawing::Color::Red;
				this->btn_seat_F2->Enabled = false;
				this->btn_seat_F2->Font = (gcnew System::Drawing::Font(L"Consolas", 38.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btn_seat_F2->Text = L"X";
				this->btn_seat_F2->ForeColor = System::Drawing::Color::Red;
			}
			if (status.at(17) == '0') {
				this->btn_seat_F3->BackColor = System::Drawing::Color::Red;
				this->btn_seat_F3->Enabled = false;
				this->btn_seat_F3->Font = (gcnew System::Drawing::Font(L"Consolas", 38.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btn_seat_F3->Text = L"X";
				this->btn_seat_F3->ForeColor = System::Drawing::Color::Red;
			}
			if (status.at(18) == '0') {
				this->btn_seat_G1->BackColor = System::Drawing::Color::Red;
				this->btn_seat_G1->Enabled = false;
				this->btn_seat_G1->Font = (gcnew System::Drawing::Font(L"Consolas", 38.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btn_seat_G1->Text = L"X";
				this->btn_seat_G1->ForeColor = System::Drawing::Color::Red;
			}
			if (status.at(19) == '0') {
				this->btn_seat_G2->BackColor = System::Drawing::Color::Red;
				this->btn_seat_G2->Enabled = false;
				this->btn_seat_G2->Font = (gcnew System::Drawing::Font(L"Consolas", 38.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btn_seat_G2->Text = L"X";
				this->btn_seat_G2->ForeColor = System::Drawing::Color::Red;
			}
			if (status.at(20) == '0') {
				this->btn_seat_G3->BackColor = System::Drawing::Color::Red;
				this->btn_seat_G3->Enabled = false;
				this->btn_seat_G3->Font = (gcnew System::Drawing::Font(L"Consolas", 38.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btn_seat_G3->Text = L"X";
				this->btn_seat_G3->ForeColor = System::Drawing::Color::Red;
			}
			if (status.at(21) == '0') {
				this->btn_seat_H1->BackColor = System::Drawing::Color::Red;
				this->btn_seat_H1->Enabled = false;
				this->btn_seat_H1->Font = (gcnew System::Drawing::Font(L"Consolas", 38.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btn_seat_H1->Text = L"X";
				this->btn_seat_H1->ForeColor = System::Drawing::Color::Red;
			}
			if (status.at(22) == '0') {
				this->btn_seat_H2->BackColor = System::Drawing::Color::Red;
				this->btn_seat_H2->Enabled = false;
				this->btn_seat_H2->Font = (gcnew System::Drawing::Font(L"Consolas", 38.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btn_seat_H2->Text = L"X";
				this->btn_seat_H2->ForeColor = System::Drawing::Color::Red;
			}
			if (status.at(23) == '0') {
				this->btn_seat_H3->BackColor = System::Drawing::Color::Red;
				this->btn_seat_H3->Enabled = false;
				this->btn_seat_H3->Font = (gcnew System::Drawing::Font(L"Consolas", 38.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btn_seat_H3->Text = L"X";
				this->btn_seat_H3->ForeColor = System::Drawing::Color::Red;
			}
			if (status.at(24) == '0') {
				this->btn_seat_I1->BackColor = System::Drawing::Color::Red;
				this->btn_seat_I1->Enabled = false;
				this->btn_seat_I1->Font = (gcnew System::Drawing::Font(L"Consolas", 38.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btn_seat_I1->Text = L"X";
				this->btn_seat_I1->ForeColor = System::Drawing::Color::Red;
			}
			if (status.at(25) == '0') {
				this->btn_seat_I2->BackColor = System::Drawing::Color::Red;
				this->btn_seat_I2->Enabled = false;
				this->btn_seat_I2->Font = (gcnew System::Drawing::Font(L"Consolas", 38.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btn_seat_I2->Text = L"X";
				this->btn_seat_I2->ForeColor = System::Drawing::Color::Red;
			}
			if (status.at(26) == '0') {
				this->btn_seat_I3->BackColor = System::Drawing::Color::Red;
				this->btn_seat_I3->Enabled = false;
				this->btn_seat_I3->Font = (gcnew System::Drawing::Font(L"Consolas", 38.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btn_seat_I3->Text = L"X";
				this->btn_seat_I3->ForeColor = System::Drawing::Color::Red;
			}
			if (status.at(27) == '0') {
				this->btn_seat_J1->BackColor = System::Drawing::Color::Red;
				this->btn_seat_J1->Enabled = false;
				this->btn_seat_J1->Font = (gcnew System::Drawing::Font(L"Consolas", 38.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btn_seat_J1->Text = L"X";
				this->btn_seat_J1->ForeColor = System::Drawing::Color::Red;
			}
			if (status.at(28) == '0') {
				this->btn_seat_J2->BackColor = System::Drawing::Color::Red;
				this->btn_seat_J2->Enabled = false;
				this->btn_seat_J2->Font = (gcnew System::Drawing::Font(L"Consolas", 38.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btn_seat_J2->Text = L"X";
				this->btn_seat_J2->ForeColor = System::Drawing::Color::Red;
			}
			if (status.at(29) == '0') {
				this->btn_seat_J3->BackColor = System::Drawing::Color::Red;
				this->btn_seat_J3->Enabled = false;
				this->btn_seat_J3->Font = (gcnew System::Drawing::Font(L"Consolas", 38.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btn_seat_J3->Text = L"X";
				this->btn_seat_J3->ForeColor = System::Drawing::Color::Red;
			}

		}
		else {
			// 코리안
			DBController dc;
			AirplaneController ac;
			SeatController sc;

			string name = "";
			name += "B";
			name += to_string(flightName);

			dc.init();
			dc.connect();
			ac = dc.loadWithFlightName(name);
			sc = dc.loadSeatInfo(name);
			string status = sc.get_seat_status();

			if (status.at(0) == '0') {
				this->btn_seat_A1->BackColor = System::Drawing::Color::Red;
				this->btn_seat_A1->Enabled = false;
				this->btn_seat_A1->Font = (gcnew System::Drawing::Font(L"Consolas", 38.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btn_seat_A1->Text = L"X";
				this->btn_seat_A1->ForeColor = System::Drawing::Color::Red;
			}
			if (status.at(1) == '0') {
				this->btn_seat_A2->BackColor = System::Drawing::Color::Red;
				this->btn_seat_A2->Enabled = false;
				this->btn_seat_A2->Font = (gcnew System::Drawing::Font(L"Consolas", 38.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btn_seat_A2->Text = L"X";
				this->btn_seat_A2->ForeColor = System::Drawing::Color::Red;
			}
			if (status.at(2) == '0') {
				this->btn_seat_A3->BackColor = System::Drawing::Color::Red;
				this->btn_seat_A3->Enabled = false;
				this->btn_seat_A3->Font = (gcnew System::Drawing::Font(L"Consolas", 38.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btn_seat_A3->Text = L"X";
				this->btn_seat_A3->ForeColor = System::Drawing::Color::Red;
			}
			if (status.at(3) == '0') {
				this->btn_seat_B1->BackColor = System::Drawing::Color::Red;
				this->btn_seat_B1->Enabled = false;
				this->btn_seat_B1->Font = (gcnew System::Drawing::Font(L"Consolas", 38.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btn_seat_B1->Text = L"X";
				this->btn_seat_B1->ForeColor = System::Drawing::Color::Red;
			}
			if (status.at(4) == '0') {
				this->btn_seat_B2->BackColor = System::Drawing::Color::Red;
				this->btn_seat_B2->Enabled = false;
				this->btn_seat_B2->Font = (gcnew System::Drawing::Font(L"Consolas", 38.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btn_seat_B2->Text = L"X";
				this->btn_seat_B2->ForeColor = System::Drawing::Color::Red;
			}
			if (status.at(5) == '0') {
				this->btn_seat_B3->BackColor = System::Drawing::Color::Red;
				this->btn_seat_B3->Enabled = false;
				this->btn_seat_B3->Font = (gcnew System::Drawing::Font(L"Consolas", 38.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btn_seat_B3->Text = L"X";
				this->btn_seat_B3->ForeColor = System::Drawing::Color::Red;
			}
			if (status.at(6) == '0') {
				this->btn_seat_C1->BackColor = System::Drawing::Color::Red;
				this->btn_seat_C1->Enabled = false;
				this->btn_seat_C1->Font = (gcnew System::Drawing::Font(L"Consolas", 38.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btn_seat_C1->Text = L"X";
				this->btn_seat_C1->ForeColor = System::Drawing::Color::Red;
			}
			if (status.at(7) == '0') {
				this->btn_seat_C2->BackColor = System::Drawing::Color::Red;
				this->btn_seat_C2->Enabled = false;
				this->btn_seat_C2->Font = (gcnew System::Drawing::Font(L"Consolas", 38.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btn_seat_C2->Text = L"X";
				this->btn_seat_C2->ForeColor = System::Drawing::Color::Red;
			}
			if (status.at(8) == '0') {
				this->btn_seat_C3->BackColor = System::Drawing::Color::Red;
				this->btn_seat_C3->Enabled = false;
				this->btn_seat_C3->Font = (gcnew System::Drawing::Font(L"Consolas", 38.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btn_seat_C3->Text = L"X";
				this->btn_seat_C3->ForeColor = System::Drawing::Color::Red;
			}
			if (status.at(9) == '0') {
				this->btn_seat_D1->BackColor = System::Drawing::Color::Red;
				this->btn_seat_D1->Enabled = false;
				this->btn_seat_D1->Font = (gcnew System::Drawing::Font(L"Consolas", 38.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btn_seat_D1->Text = L"X";
				this->btn_seat_D1->ForeColor = System::Drawing::Color::Red;
			}
			if (status.at(10) == '0') {
				this->btn_seat_D2->BackColor = System::Drawing::Color::Red;
				this->btn_seat_D2->Enabled = false;
				this->btn_seat_D2->Font = (gcnew System::Drawing::Font(L"Consolas", 38.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btn_seat_D2->Text = L"X";
				this->btn_seat_D2->ForeColor = System::Drawing::Color::Red;
			}
			if (status.at(11) == '0') {
				this->btn_seat_D3->BackColor = System::Drawing::Color::Red;
				this->btn_seat_D3->Enabled = false;
				this->btn_seat_D3->Font = (gcnew System::Drawing::Font(L"Consolas", 38.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btn_seat_D3->Text = L"X";
				this->btn_seat_D3->ForeColor = System::Drawing::Color::Red;
			}
			if (status.at(12) == '0') {
				this->btn_seat_E1->BackColor = System::Drawing::Color::Red;
				this->btn_seat_E1->Enabled = false;
				this->btn_seat_E1->Font = (gcnew System::Drawing::Font(L"Consolas", 38.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btn_seat_E1->Text = L"X";
				this->btn_seat_E1->ForeColor = System::Drawing::Color::Red;
			}
			if (status.at(13) == '0') {
				this->btn_seat_E2->BackColor = System::Drawing::Color::Red;
				this->btn_seat_E2->Enabled = false;
				this->btn_seat_E2->Font = (gcnew System::Drawing::Font(L"Consolas", 38.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btn_seat_E2->Text = L"X";
				this->btn_seat_E2->ForeColor = System::Drawing::Color::Red;
			}
			if (status.at(14) == '0') {
				this->btn_seat_E3->BackColor = System::Drawing::Color::Red;
				this->btn_seat_E3->Enabled = false;
				this->btn_seat_E3->Font = (gcnew System::Drawing::Font(L"Consolas", 38.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btn_seat_E3->Text = L"X";
				this->btn_seat_E3->ForeColor = System::Drawing::Color::Red;
			}
			if (status.at(15) == '0') {
				this->btn_seat_F1->BackColor = System::Drawing::Color::Red;
				this->btn_seat_F1->Enabled = false;
				this->btn_seat_F1->Font = (gcnew System::Drawing::Font(L"Consolas", 38.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btn_seat_F1->Text = L"X";
				this->btn_seat_F1->ForeColor = System::Drawing::Color::Red;
			}
			if (status.at(16) == '0') {
				this->btn_seat_F2->BackColor = System::Drawing::Color::Red;
				this->btn_seat_F2->Enabled = false;
				this->btn_seat_F2->Font = (gcnew System::Drawing::Font(L"Consolas", 38.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btn_seat_F2->Text = L"X";
				this->btn_seat_F2->ForeColor = System::Drawing::Color::Red;
			}
			if (status.at(17) == '0') {
				this->btn_seat_F3->BackColor = System::Drawing::Color::Red;
				this->btn_seat_F3->Enabled = false;
				this->btn_seat_F3->Font = (gcnew System::Drawing::Font(L"Consolas", 38.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btn_seat_F3->Text = L"X";
				this->btn_seat_F3->ForeColor = System::Drawing::Color::Red;
			}
			if (status.at(18) == '0') {
				this->btn_seat_G1->BackColor = System::Drawing::Color::Red;
				this->btn_seat_G1->Enabled = false;
				this->btn_seat_G1->Font = (gcnew System::Drawing::Font(L"Consolas", 38.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btn_seat_G1->Text = L"X";
				this->btn_seat_G1->ForeColor = System::Drawing::Color::Red;
			}
			if (status.at(19) == '0') {
				this->btn_seat_G2->BackColor = System::Drawing::Color::Red;
				this->btn_seat_G2->Enabled = false;
				this->btn_seat_G2->Font = (gcnew System::Drawing::Font(L"Consolas", 38.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btn_seat_G2->Text = L"X";
				this->btn_seat_G2->ForeColor = System::Drawing::Color::Red;
			}
			if (status.at(20) == '0') {
				this->btn_seat_G3->BackColor = System::Drawing::Color::Red;
				this->btn_seat_G3->Enabled = false;
				this->btn_seat_G3->Font = (gcnew System::Drawing::Font(L"Consolas", 38.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btn_seat_G3->Text = L"X";
				this->btn_seat_G3->ForeColor = System::Drawing::Color::Red;
			}
			if (status.at(21) == '0') {
				this->btn_seat_H1->BackColor = System::Drawing::Color::Red;
				this->btn_seat_H1->Enabled = false;
				this->btn_seat_H1->Font = (gcnew System::Drawing::Font(L"Consolas", 38.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btn_seat_H1->Text = L"X";
				this->btn_seat_H1->ForeColor = System::Drawing::Color::Red;
			}
			if (status.at(22) == '0') {
				this->btn_seat_H2->BackColor = System::Drawing::Color::Red;
				this->btn_seat_H2->Enabled = false;
				this->btn_seat_H2->Font = (gcnew System::Drawing::Font(L"Consolas", 38.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btn_seat_H2->Text = L"X";
				this->btn_seat_H2->ForeColor = System::Drawing::Color::Red;
			}
			if (status.at(23) == '0') {
				this->btn_seat_H3->BackColor = System::Drawing::Color::Red;
				this->btn_seat_H3->Enabled = false;
				this->btn_seat_H3->Font = (gcnew System::Drawing::Font(L"Consolas", 38.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btn_seat_H3->Text = L"X";
				this->btn_seat_H3->ForeColor = System::Drawing::Color::Red;
			}
			if (status.at(24) == '0') {
				this->btn_seat_I1->BackColor = System::Drawing::Color::Red;
				this->btn_seat_I1->Enabled = false;
				this->btn_seat_I1->Font = (gcnew System::Drawing::Font(L"Consolas", 38.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btn_seat_I1->Text = L"X";
				this->btn_seat_I1->ForeColor = System::Drawing::Color::Red;
			}
			if (status.at(25) == '0') {
				this->btn_seat_I2->BackColor = System::Drawing::Color::Red;
				this->btn_seat_I2->Enabled = false;
				this->btn_seat_I2->Font = (gcnew System::Drawing::Font(L"Consolas", 38.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btn_seat_I2->Text = L"X";
				this->btn_seat_I2->ForeColor = System::Drawing::Color::Red;
			}
			if (status.at(26) == '0') {
				this->btn_seat_I3->BackColor = System::Drawing::Color::Red;
				this->btn_seat_I3->Enabled = false;
				this->btn_seat_I3->Font = (gcnew System::Drawing::Font(L"Consolas", 38.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btn_seat_I3->Text = L"X";
				this->btn_seat_I3->ForeColor = System::Drawing::Color::Red;
			}
			if (status.at(27) == '0') {
				this->btn_seat_J1->BackColor = System::Drawing::Color::Red;
				this->btn_seat_J1->Enabled = false;
				this->btn_seat_J1->Font = (gcnew System::Drawing::Font(L"Consolas", 38.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btn_seat_J1->Text = L"X";
				this->btn_seat_J1->ForeColor = System::Drawing::Color::Red;
			}
			if (status.at(28) == '0') {
				this->btn_seat_J2->BackColor = System::Drawing::Color::Red;
				this->btn_seat_J2->Enabled = false;
				this->btn_seat_J2->Font = (gcnew System::Drawing::Font(L"Consolas", 38.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btn_seat_J2->Text = L"X";
				this->btn_seat_J2->ForeColor = System::Drawing::Color::Red;
			}
			if (status.at(29) == '0') {
				this->btn_seat_J3->BackColor = System::Drawing::Color::Red;
				this->btn_seat_J3->Enabled = false;
				this->btn_seat_J3->Font = (gcnew System::Drawing::Font(L"Consolas", 38.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btn_seat_J3->Text = L"X";
				this->btn_seat_J3->ForeColor = System::Drawing::Color::Red;
			}


		}
	}
			 //좌석 버튼 클릭시 confirm txtbox 로 전달
private: System::Void btn_seat_A1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	this->txt_confirm->Text = L"A1";
}
private: System::Void btn_seat_A2_Click_1(System::Object^  sender, System::EventArgs^  e) {
	this->txt_confirm->Text = L"A2";
}
private: System::Void btn_seat_A3_Click_1(System::Object^  sender, System::EventArgs^  e) {
	this->txt_confirm->Text = L"A3";
}
private: System::Void btn_seat_B1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	this->txt_confirm->Text = L"B1";
}
private: System::Void btn_seat_B2_Click_1(System::Object^  sender, System::EventArgs^  e) {
	this->txt_confirm->Text = L"B2";
}
private: System::Void btn_seat_B3_Click_1(System::Object^  sender, System::EventArgs^  e) {
	this->txt_confirm->Text = L"B3";
}
private: System::Void btn_seat_C1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	this->txt_confirm->Text = L"C1";
}
private: System::Void btn_seat_C2_Click_1(System::Object^  sender, System::EventArgs^  e) {
	this->txt_confirm->Text = L"C2";
}
private: System::Void btn_seat_C3_Click_1(System::Object^  sender, System::EventArgs^  e) {
	this->txt_confirm->Text = L"C3";
}
private: System::Void btn_seat_D1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	this->txt_confirm->Text = L"D1";
}
private: System::Void btn_seat_D2_Click_1(System::Object^  sender, System::EventArgs^  e) {
	this->txt_confirm->Text = L"D2";
}
private: System::Void btn_seat_D3_Click_1(System::Object^  sender, System::EventArgs^  e) {
	this->txt_confirm->Text = L"D3";
}
private: System::Void btn_seat_E1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	this->txt_confirm->Text = L"E1";
}
private: System::Void btn_seat_E2_Click_1(System::Object^  sender, System::EventArgs^  e) {
	this->txt_confirm->Text = L"E2";
}
private: System::Void btn_seat_E3_Click_1(System::Object^  sender, System::EventArgs^  e) {
	this->txt_confirm->Text = L"E3";
}
private: System::Void btn_seat_F1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	this->txt_confirm->Text = L"F1";
}
private: System::Void btn_seat_F2_Click_1(System::Object^  sender, System::EventArgs^  e) {
	this->txt_confirm->Text = L"F2";
}
private: System::Void btn_seat_F3_Click_1(System::Object^  sender, System::EventArgs^  e) {
	this->txt_confirm->Text = L"F3";
}
private: System::Void btn_seat_G1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	this->txt_confirm->Text = L"G1";
}
private: System::Void btn_seat_G2_Click_1(System::Object^  sender, System::EventArgs^  e) {
	this->txt_confirm->Text = L"G2";
}
private: System::Void btn_seat_G3_Click_1(System::Object^  sender, System::EventArgs^  e) {
	this->txt_confirm->Text = L"G3";
}
private: System::Void btn_seat_H1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	this->txt_confirm->Text = L"H1";
}
private: System::Void btn_seat_H2_Click_1(System::Object^  sender, System::EventArgs^  e) {
	this->txt_confirm->Text = L"H2";
}
private: System::Void btn_seat_H3_Click_1(System::Object^  sender, System::EventArgs^  e) {
	this->txt_confirm->Text = L"H3";
}
private: System::Void btn_seat_I1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	this->txt_confirm->Text = L"I1";
}
private: System::Void btn_seat_I2_Click_1(System::Object^  sender, System::EventArgs^  e) {
	this->txt_confirm->Text = L"I2";
}
private: System::Void btn_seat_I3_Click_1(System::Object^  sender, System::EventArgs^  e) {
	this->txt_confirm->Text = L"I3";
}
private: System::Void btn_seat_J1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	this->txt_confirm->Text = L"J1";
}
private: System::Void btn_seat_J2_Click_1(System::Object^  sender, System::EventArgs^  e) {
	this->txt_confirm->Text = L"J2";
}
private: System::Void btn_seat_J3_Click_1(System::Object^  sender, System::EventArgs^  e) {
	this->txt_confirm->Text = L"J3";
}
			 
		 //-----------------------------------------버튼클릭 end

private: System::Void Display_SelectSeat_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void btn_confirm_Click(System::Object^  sender, System::EventArgs^  e) {
	// 확인 버튼
	DBController dc;
	SeatController sc;
	dc.init();
	dc.connect();
	string name = "";
	if (flight == 0) {
		name += "A";
		name += to_string(flightName);
	}
	else {
		name += "B";
		name += to_string(flightName);
	}

	sc = dc.loadSeatInfo(name);
	string status = sc.get_seat_status();
	


	String^ s = txt_confirm->Text;
	string ss = msclr::interop::marshal_as<std::string>(s);
	string p_ss = "";
	p_ss += "M";
	p_ss += to_string(passport);

	int index = (ss.at(0) - 'A')*3 + (ss.at(1) - '1');

	status.at(index) = '0';
	int seat = sc.get_left_seat();
	sc.set_left_seat(seat-1);
	sc.set_seat_status(status);

	if (dc.alterSeatInfo(sc)) {
		if (dc.alterUserSeat(ss, p_ss,name)) {
			MessageBox::Show("Seat Confirmed!");
			this->Close();
			flag = 15;
		}
		else {
			MessageBox::Show("Failed!");
		}
	}
	else {
		MessageBox::Show("Failed!");
	}
}

};
}
