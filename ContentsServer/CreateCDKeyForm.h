#pragma once
#include "ServerManager.h"

namespace CreateCDKey {

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

		System::Windows::Forms::Button^ GetOKButton() {
			return Btn_OK;
		}

		void CreateCDKey(ServerManager* ) {


			TextBox_Client->Text;
			textBox_CDKey->Text;
			DueDateTimePicker->Value.ToString();
			NumericUpDown->Value.ToInt32;
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

	private:
		//container
		System::Windows::Forms::GroupBox^ groupBox_Client;
		System::Windows::Forms::TextBox^ TextBox_Client;
		System::Windows::Forms::GroupBox^ groupBox_CDKey;
		System::Windows::Forms::TextBox^ textBox_CDKey;
		System::Windows::Forms::Button^ Btn_OK;
		System::Windows::Forms::GroupBox^ groupBox_DueDate;
		System::Windows::Forms::GroupBox^ groupBox_MaxConnect;
		System::Windows::Forms::Button^ Btn_Close;
		System::Windows::Forms::Button^ Btn_Apply;
		System::Windows::Forms::DateTimePicker^ DueDateTimePicker;
		System::Windows::Forms::NumericUpDown^ NumericUpDown;
		System::Windows::Forms::Label^ Dialog_Client;
		System::Windows::Forms::Label^ Dialog_CDKey;




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
			this->Dialog_Client = (gcnew System::Windows::Forms::Label());
			this->TextBox_Client = (gcnew System::Windows::Forms::TextBox());
			this->groupBox_CDKey = (gcnew System::Windows::Forms::GroupBox());
			this->Dialog_CDKey = (gcnew System::Windows::Forms::Label());
			this->textBox_CDKey = (gcnew System::Windows::Forms::TextBox());
			this->groupBox_DueDate = (gcnew System::Windows::Forms::GroupBox());
			this->DueDateTimePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->groupBox_MaxConnect = (gcnew System::Windows::Forms::GroupBox());
			this->NumericUpDown = (gcnew System::Windows::Forms::NumericUpDown());
			this->Btn_OK = (gcnew System::Windows::Forms::Button());
			this->Btn_Close = (gcnew System::Windows::Forms::Button());
			this->Btn_Apply = (gcnew System::Windows::Forms::Button());
			this->groupBox_Client->SuspendLayout();
			this->groupBox_CDKey->SuspendLayout();
			this->groupBox_DueDate->SuspendLayout();
			this->groupBox_MaxConnect->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NumericUpDown))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox_Client
			// 
			this->groupBox_Client->Controls->Add(this->Dialog_Client);
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
			// Dialog_Client
			// 
			this->Dialog_Client->AutoSize = true;
			this->Dialog_Client->ForeColor = System::Drawing::Color::Red;
			this->Dialog_Client->Location = System::Drawing::Point(82, 55);
			this->Dialog_Client->Name = L"Dialog_Client";
			this->Dialog_Client->Size = System::Drawing::Size(0, 12);
			this->Dialog_Client->TabIndex = 1;
			// 
			// TextBox_Client
			// 
			this->TextBox_Client->Location = System::Drawing::Point(67, 20);
			this->TextBox_Client->MaxLength = 20;
			this->TextBox_Client->Name = L"TextBox_Client";
			this->TextBox_Client->Size = System::Drawing::Size(221, 21);
			this->TextBox_Client->TabIndex = 0;
			this->TextBox_Client->TextChanged += gcnew System::EventHandler(this, &CreateCDKeyForm::FeildChanged);
			// 
			// groupBox_CDKey
			// 
			this->groupBox_CDKey->Controls->Add(this->Dialog_CDKey);
			this->groupBox_CDKey->Controls->Add(this->textBox_CDKey);
			this->groupBox_CDKey->Font = (gcnew System::Drawing::Font(L"굴림", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->groupBox_CDKey->Location = System::Drawing::Point(12, 103);
			this->groupBox_CDKey->Name = L"groupBox_CDKey";
			this->groupBox_CDKey->Size = System::Drawing::Size(360, 85);
			this->groupBox_CDKey->TabIndex = 2;
			this->groupBox_CDKey->TabStop = false;
			this->groupBox_CDKey->Text = L"CD key";
			// 
			// Dialog_CDKey
			// 
			this->Dialog_CDKey->AutoSize = true;
			this->Dialog_CDKey->ForeColor = System::Drawing::Color::Red;
			this->Dialog_CDKey->Location = System::Drawing::Point(82, 55);
			this->Dialog_CDKey->Name = L"Dialog_CDKey";
			this->Dialog_CDKey->Size = System::Drawing::Size(0, 12);
			this->Dialog_CDKey->TabIndex = 2;
			// 
			// textBox_CDKey
			// 
			this->textBox_CDKey->Location = System::Drawing::Point(67, 20);
			this->textBox_CDKey->MaxLength = 20;
			this->textBox_CDKey->Name = L"textBox_CDKey";
			this->textBox_CDKey->Size = System::Drawing::Size(221, 21);
			this->textBox_CDKey->TabIndex = 0;
			this->textBox_CDKey->TextChanged += gcnew System::EventHandler(this, &CreateCDKeyForm::FeildChanged);
			// 
			// groupBox_DueDate
			// 
			this->groupBox_DueDate->Controls->Add(this->DueDateTimePicker);
			this->groupBox_DueDate->Font = (gcnew System::Drawing::Font(L"굴림", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->groupBox_DueDate->Location = System::Drawing::Point(12, 194);
			this->groupBox_DueDate->Name = L"groupBox_DueDate";
			this->groupBox_DueDate->Size = System::Drawing::Size(360, 85);
			this->groupBox_DueDate->TabIndex = 3;
			this->groupBox_DueDate->TabStop = false;
			this->groupBox_DueDate->Text = L"Due date";
			// 
			// DueDateTimePicker
			// 
			this->DueDateTimePicker->Location = System::Drawing::Point(67, 20);
			this->DueDateTimePicker->MinDate = System::DateTime(1999, 3, 15, 12, 43, 0, 0);
			this->DueDateTimePicker->Name = L"DueDateTimePicker";
			this->DueDateTimePicker->Size = System::Drawing::Size(221, 21);
			this->DueDateTimePicker->TabIndex = 1;
			this->DueDateTimePicker->Value = System::DateTime(2023, 3, 15, 11, 13, 59, 793);
			this->DueDateTimePicker->CloseUp += gcnew System::EventHandler(this, &CreateCDKeyForm::FeildChanged);
			this->DueDateTimePicker->Enter += gcnew System::EventHandler(this, &CreateCDKeyForm::DueDateTimePicker_Enter);
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
			// NumericUpDown
			// 
			this->NumericUpDown->Location = System::Drawing::Point(67, 20);
			this->NumericUpDown->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 99999, 0, 0, 0 });
			this->NumericUpDown->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->NumericUpDown->Name = L"NumericUpDown";
			this->NumericUpDown->Size = System::Drawing::Size(120, 21);
			this->NumericUpDown->TabIndex = 3;
			this->NumericUpDown->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 999, 0, 0, 0 });
			this->NumericUpDown->ValueChanged += gcnew System::EventHandler(this, &CreateCDKeyForm::FeildChanged);
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
			this->Btn_Apply->Click += gcnew System::EventHandler(this, &CreateCDKeyForm::Btn_Apply_Click);
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
	private:

		System::Void Btn_Close_Click(System::Object^ sender, System::EventArgs^ e) {
			this->Close();
		}

		System::Void Btn_Apply_Click(System::Object^ sender, System::EventArgs^ e) {
			bool bError = false;
			Dialog_Client->Text = "";
			Dialog_CDKey->Text = "";

			if (TextBox_Client->Text->Length == 0) {
				Dialog_Client->Text = "Essential field!";
				bError = true;
			}

			if (textBox_CDKey->Text->Length == 0) {
				Dialog_CDKey->Text = "Essential field!";
				bError = true;
			}

			Btn_OK->Enabled = !bError;
		}

		System::Void FeildChanged(System::Object^ sender, System::EventArgs^ e) {
			Btn_OK->Enabled = false;
		}

		System::Void DueDateTimePicker_Enter(System::Object^ sender, System::EventArgs^ e) {
			DueDateTimePicker->MinDate = System::DateTime::Today;
		}
};
}
