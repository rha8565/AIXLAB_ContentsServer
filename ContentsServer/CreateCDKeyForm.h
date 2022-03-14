#pragma once

namespace ContentsServer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// CreateCDKeyForm에 대한 요약입니다.
	/// </summary>
	public ref class CreateCDKeyForm : public System::Windows::Forms::Form
	{
	public:
		CreateCDKeyForm(void)
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
		~CreateCDKeyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox_Client;
	private: System::Windows::Forms::TextBox^ TextBox_Client;
	private: System::Windows::Forms::GroupBox^ groupBox_CDKey;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::GroupBox^ groupBox_DueDate;


	private: System::Windows::Forms::GroupBox^ groupBox_MaxConnect;


	private: System::Windows::Forms::Button^ Btn_OK;
	private: System::Windows::Forms::Button^ Btn_Close;
	private: System::Windows::Forms::Button^ Btn_Apply;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::NumericUpDown^ NumericUpDown;








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
			this->groupBox_Client = (gcnew System::Windows::Forms::GroupBox());
			this->TextBox_Client = (gcnew System::Windows::Forms::TextBox());
			this->groupBox_CDKey = (gcnew System::Windows::Forms::GroupBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox_DueDate = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox_MaxConnect = (gcnew System::Windows::Forms::GroupBox());
			this->Btn_OK = (gcnew System::Windows::Forms::Button());
			this->Btn_Close = (gcnew System::Windows::Forms::Button());
			this->Btn_Apply = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->NumericUpDown = (gcnew System::Windows::Forms::NumericUpDown());
			this->groupBox_Client->SuspendLayout();
			this->groupBox_CDKey->SuspendLayout();
			this->groupBox_DueDate->SuspendLayout();
			this->groupBox_MaxConnect->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NumericUpDown))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox_Client
			// 
			this->groupBox_Client->Controls->Add(this->TextBox_Client);
			this->groupBox_Client->Font = (gcnew System::Drawing::Font(L"굴림", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->groupBox_Client->Location = System::Drawing::Point(12, 12);
			this->groupBox_Client->Name = L"groupBox_Client";
			this->groupBox_Client->Size = System::Drawing::Size(360, 85);
			this->groupBox_Client->TabIndex = 1;
			this->groupBox_Client->TabStop = false;
			this->groupBox_Client->Text = L"Client";
			// 
			// TextBox_Client
			// 
			this->TextBox_Client->Location = System::Drawing::Point(67, 20);
			this->TextBox_Client->MaxLength = 20;
			this->TextBox_Client->Name = L"TextBox_Client";
			this->TextBox_Client->Size = System::Drawing::Size(221, 21);
			this->TextBox_Client->TabIndex = 0;
			// 
			// groupBox_CDKey
			// 
			this->groupBox_CDKey->Controls->Add(this->textBox1);
			this->groupBox_CDKey->Font = (gcnew System::Drawing::Font(L"굴림", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->groupBox_CDKey->Location = System::Drawing::Point(12, 103);
			this->groupBox_CDKey->Name = L"groupBox_CDKey";
			this->groupBox_CDKey->Size = System::Drawing::Size(360, 85);
			this->groupBox_CDKey->TabIndex = 2;
			this->groupBox_CDKey->TabStop = false;
			this->groupBox_CDKey->Text = L"CD key";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(67, 20);
			this->textBox1->MaxLength = 20;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(221, 21);
			this->textBox1->TabIndex = 0;
			// 
			// groupBox_DueDate
			// 
			this->groupBox_DueDate->Controls->Add(this->dateTimePicker1);
			this->groupBox_DueDate->Font = (gcnew System::Drawing::Font(L"굴림", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->groupBox_DueDate->Location = System::Drawing::Point(12, 194);
			this->groupBox_DueDate->Name = L"groupBox_DueDate";
			this->groupBox_DueDate->Size = System::Drawing::Size(360, 85);
			this->groupBox_DueDate->TabIndex = 3;
			this->groupBox_DueDate->TabStop = false;
			this->groupBox_DueDate->Text = L"Due date";
			// 
			// groupBox_MaxConnect
			// 
			this->groupBox_MaxConnect->Controls->Add(this->NumericUpDown);
			this->groupBox_MaxConnect->Font = (gcnew System::Drawing::Font(L"굴림", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->groupBox_MaxConnect->Location = System::Drawing::Point(12, 285);
			this->groupBox_MaxConnect->Name = L"groupBox_MaxConnect";
			this->groupBox_MaxConnect->Size = System::Drawing::Size(360, 85);
			this->groupBox_MaxConnect->TabIndex = 4;
			this->groupBox_MaxConnect->TabStop = false;
			this->groupBox_MaxConnect->Text = L"Max connect";
			// 
			// Btn_OK
			// 
			this->Btn_OK->Enabled = false;
			this->Btn_OK->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->Btn_OK->Location = System::Drawing::Point(120, 419);
			this->Btn_OK->Name = L"Btn_OK";
			this->Btn_OK->Size = System::Drawing::Size(80, 30);
			this->Btn_OK->TabIndex = 5;
			this->Btn_OK->Text = L"OK";
			this->Btn_OK->UseVisualStyleBackColor = true;
			// 
			// Btn_Close
			// 
			this->Btn_Close->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->Btn_Close->Location = System::Drawing::Point(292, 419);
			this->Btn_Close->Name = L"Btn_Close";
			this->Btn_Close->Size = System::Drawing::Size(80, 30);
			this->Btn_Close->TabIndex = 6;
			this->Btn_Close->Text = L"Close";
			this->Btn_Close->UseVisualStyleBackColor = true;
			this->Btn_Close->Click += gcnew System::EventHandler(this, &CreateCDKeyForm::Btn_Close_Click);
			// 
			// Btn_Apply
			// 
			this->Btn_Apply->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->Btn_Apply->Location = System::Drawing::Point(206, 419);
			this->Btn_Apply->Name = L"Btn_Apply";
			this->Btn_Apply->Size = System::Drawing::Size(80, 30);
			this->Btn_Apply->TabIndex = 7;
			this->Btn_Apply->Text = L"Apply";
			this->Btn_Apply->UseVisualStyleBackColor = true;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(67, 20);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(221, 21);
			this->dateTimePicker1->TabIndex = 1;
			// 
			// NumericUpDown
			// 
			this->NumericUpDown->Location = System::Drawing::Point(67, 20);
			this->NumericUpDown->Name = L"NumericUpDown";
			this->NumericUpDown->Size = System::Drawing::Size(120, 21);
			this->NumericUpDown->TabIndex = 3;
			this->NumericUpDown->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 99, 0, 0, 0 });
			// 
			// CreateCDKeyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(384, 461);
			this->Controls->Add(this->Btn_Apply);
			this->Controls->Add(this->Btn_Close);
			this->Controls->Add(this->Btn_OK);
			this->Controls->Add(this->groupBox_MaxConnect);
			this->Controls->Add(this->groupBox_DueDate);
			this->Controls->Add(this->groupBox_CDKey);
			this->Controls->Add(this->groupBox_Client);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"CreateCDKeyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"CreateCDKeyForm";
			this->groupBox_Client->ResumeLayout(false);
			this->groupBox_Client->PerformLayout();
			this->groupBox_CDKey->ResumeLayout(false);
			this->groupBox_CDKey->PerformLayout();
			this->groupBox_DueDate->ResumeLayout(false);
			this->groupBox_MaxConnect->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NumericUpDown))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Btn_Close_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}
