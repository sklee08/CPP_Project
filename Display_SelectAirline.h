#pragma once



namespace ProjectCPP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Display_SelectAirline에 대한 요약입니다.
	/// </summary>
	public ref class Display_SelectAirline : public System::Windows::Forms::Form
	{
	public:
		int flag = 11;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  btn_home;
	public:
		int whichFlight = -1;

		Display_SelectAirline(void)
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
		~Display_SelectAirline()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Display_SelectAirline::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btn_home = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Location = System::Drawing::Point(150, 363);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(471, 255);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Display_SelectAirline::button1_Click);
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->Location = System::Drawing::Point(791, 363);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(471, 255);
			this->button2->TabIndex = 1;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Display_SelectAirline::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Consolas", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(452, 202);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(512, 41);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Please, select the Airline";
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
			this->btn_home->Click += gcnew System::EventHandler(this, &Display_SelectAirline::btn_home_Click);
			// 
			// Display_SelectAirline
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1424, 961);
			this->Controls->Add(this->btn_home);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Display_SelectAirline";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Display_SelectAirline";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		// 아시아나 로그인 ->
		this->Close();	
		flag = 12;
		whichFlight = 0;
		//Display_PassportScan^ ps = gcnew Display_PassportScan();
		//ps->ShowDialog();

	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		// 코리아나 로그인
		this->Close();
		flag = 12;
		whichFlight = 1;
		//Display_PassportScan^ ps = gcnew Display_PassportScan();
		//ps->ShowDialog();
	}
	private: System::Void btn_home_Click(System::Object^  sender, System::EventArgs^  e) {
		// 홈버튼 클릭
		this->Close();
		flag = 0;
	}
};
}
