#pragma once


namespace ProjectCPP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Display_Ending�� ���� ����Դϴ�.
	/// </summary>
	public ref class Display_Ending : public System::Windows::Forms::Form
	{
	public:
		int flag = 16;

		Display_Ending(void)
		{
			InitializeComponent();
			//
			//TODO: ������ �ڵ带 ���⿡ �߰��մϴ�.
			//
		}
		

	protected:
		/// <summary>
		/// ��� ���� ��� ���ҽ��� �����մϴ�.
		/// </summary>
		~Display_Ending()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  lbl_comment;
	protected:

	private:
		/// <summary>
		/// �ʼ� �����̳� �����Դϴ�.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����̳� ������ �ʿ��� �޼����Դϴ�. 
		/// �� �޼����� ������ �ڵ� ������� �������� ������.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Display_Ending::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->lbl_comment = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Location = System::Drawing::Point(1, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(1440, 1000);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Display_Ending::button1_Click);
			// 
			// lbl_comment
			// 
			this->lbl_comment->AutoSize = true;
			this->lbl_comment->BackColor = System::Drawing::Color::Transparent;
			this->lbl_comment->Font = (gcnew System::Drawing::Font(L"Consolas", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_comment->Location = System::Drawing::Point(709, 595);
			this->lbl_comment->Name = L"lbl_comment";
			this->lbl_comment->Size = System::Drawing::Size(674, 56);
			this->lbl_comment->TabIndex = 1;
			this->lbl_comment->Text = L"Press here to Home Screen";
			// 
			// Display_Ending
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1424, 961);
			this->Controls->Add(this->lbl_comment);
			this->Controls->Add(this->button1);
			this->Name = L"Display_Ending";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Display_Ending";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		// ��ư Ŭ��
		this->Close();
		flag = 0;
	}
	};
}
