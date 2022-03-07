#pragma once
#include <iostream>
#include <string>
#include <filesystem>
#include <fstream>
#include <json\json.h>
#include "ServerManager.h"

namespace ContentsServer 
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// ServerForm에 대한 요약입니다.
	/// </summary>
	public ref class ServerForm : public System::Windows::Forms::Form
	{

	public:
		ServerForm(void)
		{
			InitializeComponent();
			mServerManager = new ServerManager();
			RefreshDataGrid(*mServerManager);
			
		}

	protected:
		/// <summary>
		/// 사용 중인 모든 리소스를 정리합니다.
		/// </summary>
		~ServerForm()
		{
			if (components)
			{
				delete mServerManager;
				delete components;
			}
		}

	 



	private:
		ServerManager* mServerManager;
		/// <summary>
		/// 필수 디자이너 변수입니다.
		/// </summary>
	private: System::Windows::Forms::Button^ refresh;
	private: System::Windows::Forms::DataGridView^ ServerGridView;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_Client;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_CD_Key;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_DueDate;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_ConnectNum;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_MaxConnectNum;
	private: System::ComponentModel::Container^ components;



#pragma region Windows Form Designer generated code
		/// <summary>
		/// 디자이너 지원에 필요한 메서드입니다. 
		/// 이 메서드의 내용을 코드 편집기로 수정하지 마세요.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle9 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->refresh = (gcnew System::Windows::Forms::Button());
			this->ServerGridView = (gcnew System::Windows::Forms::DataGridView());
			this->Column_Client = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_CD_Key = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_DueDate = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_ConnectNum = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_MaxConnectNum = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ServerGridView))->BeginInit();
			this->SuspendLayout();
			// 
			// refresh
			// 
			this->refresh->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->refresh->Location = System::Drawing::Point(834, 459);
			this->refresh->Name = L"refresh";
			this->refresh->Size = System::Drawing::Size(90, 30);
			this->refresh->TabIndex = 1;
			this->refresh->Text = L"Refresh";
			this->refresh->UseVisualStyleBackColor = true;
			this->refresh->Click += gcnew System::EventHandler(this, &ServerForm::button1_Click);
			// 
			// ServerGridView
			// 
			this->ServerGridView->AllowUserToAddRows = false;
			this->ServerGridView->AllowUserToDeleteRows = false;
			this->ServerGridView->AllowUserToResizeColumns = false;
			this->ServerGridView->AllowUserToResizeRows = false;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::White;
			this->ServerGridView->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->ServerGridView->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->ServerGridView->BackgroundColor = System::Drawing::Color::White;
			this->ServerGridView->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Constantia", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->ServerGridView->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->ServerGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->ServerGridView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column_Client,
					this->Column_CD_Key, this->Column_DueDate, this->Column_ConnectNum, this->Column_MaxConnectNum
			});
			dataGridViewCellStyle8->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle8->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle8->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle8->SelectionBackColor = System::Drawing::Color::White;
			dataGridViewCellStyle8->SelectionForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle8->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->ServerGridView->DefaultCellStyle = dataGridViewCellStyle8;
			this->ServerGridView->GridColor = System::Drawing::Color::Black;
			this->ServerGridView->Location = System::Drawing::Point(24, 8);
			this->ServerGridView->Margin = System::Windows::Forms::Padding(0);
			this->ServerGridView->MultiSelect = false;
			this->ServerGridView->Name = L"ServerGridView";
			this->ServerGridView->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			this->ServerGridView->RowHeadersVisible = false;
			this->ServerGridView->RowHeadersWidth = 62;
			dataGridViewCellStyle9->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle9->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->ServerGridView->RowsDefaultCellStyle = dataGridViewCellStyle9;
			this->ServerGridView->RowTemplate->Height = 30;
			this->ServerGridView->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->ServerGridView->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::CellSelect;
			this->ServerGridView->Size = System::Drawing::Size(900, 435);
			this->ServerGridView->TabIndex = 0;
			// 
			// Column_Client
			// 
			this->Column_Client->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::Color::White;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::Color::Black;
			this->Column_Client->DefaultCellStyle = dataGridViewCellStyle3;
			this->Column_Client->FillWeight = 3;
			this->Column_Client->HeaderText = L"Client";
			this->Column_Client->MaxInputLength = 100;
			this->Column_Client->MinimumWidth = 8;
			this->Column_Client->Name = L"Column_Client";
			this->Column_Client->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Column_Client->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// Column_CD_Key
			// 
			this->Column_CD_Key->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold));
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::Color::White;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::Color::Black;
			this->Column_CD_Key->DefaultCellStyle = dataGridViewCellStyle4;
			this->Column_CD_Key->FillWeight = 3;
			this->Column_CD_Key->HeaderText = L"CDkey";
			this->Column_CD_Key->MaxInputLength = 100;
			this->Column_CD_Key->MinimumWidth = 8;
			this->Column_CD_Key->Name = L"Column_CD_Key";
			this->Column_CD_Key->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Column_CD_Key->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// Column_DueDate
			// 
			this->Column_DueDate->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold));
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::Color::White;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::Color::Black;
			this->Column_DueDate->DefaultCellStyle = dataGridViewCellStyle5;
			this->Column_DueDate->FillWeight = 3;
			this->Column_DueDate->HeaderText = L"Due date";
			this->Column_DueDate->MaxInputLength = 100;
			this->Column_DueDate->MinimumWidth = 8;
			this->Column_DueDate->Name = L"Column_DueDate";
			this->Column_DueDate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Column_DueDate->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// Column_ConnectNum
			// 
			this->Column_ConnectNum->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold));
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::Color::White;
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::Color::Black;
			this->Column_ConnectNum->DefaultCellStyle = dataGridViewCellStyle6;
			this->Column_ConnectNum->FillWeight = 2;
			this->Column_ConnectNum->HeaderText = L"Connect";
			this->Column_ConnectNum->MaxInputLength = 100;
			this->Column_ConnectNum->MinimumWidth = 8;
			this->Column_ConnectNum->Name = L"Column_ConnectNum";
			this->Column_ConnectNum->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Column_ConnectNum->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// Column_MaxConnectNum
			// 
			this->Column_MaxConnectNum->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			dataGridViewCellStyle7->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle7->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold));
			dataGridViewCellStyle7->SelectionBackColor = System::Drawing::Color::White;
			dataGridViewCellStyle7->SelectionForeColor = System::Drawing::Color::Black;
			this->Column_MaxConnectNum->DefaultCellStyle = dataGridViewCellStyle7;
			this->Column_MaxConnectNum->FillWeight = 2;
			this->Column_MaxConnectNum->HeaderText = L"Max";
			this->Column_MaxConnectNum->MaxInputLength = 100;
			this->Column_MaxConnectNum->MinimumWidth = 8;
			this->Column_MaxConnectNum->Name = L"Column_MaxConnectNum";
			this->Column_MaxConnectNum->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Column_MaxConnectNum->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// ServerForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 14);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(944, 501);
			this->Controls->Add(this->refresh);
			this->Controls->Add(this->ServerGridView);
			this->Font = (gcnew System::Drawing::Font(L"Constantia", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->Name = L"ServerForm";
			this->ShowIcon = false;
			this->Text = L"AIXLAB server manager";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ServerGridView))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: 
		System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			this->ServerGridView->Rows->Clear();
			mServerManager->ParsingClientInfo();
			RefreshDataGrid(*mServerManager);
		}
			
		System::Void RefreshDataGrid(const ServerManager& ServerManager) {
			for (const auto& elem : ServerManager.GetClientMap())
			{
				String^ rClient = gcnew System::String(elem.second->GetClientName().c_str());
				String^ rCDKey = gcnew System::String(elem.first.c_str());
				String^ rDueDate = gcnew System::String(System::Convert::ToString(elem.second->GetDueDate()));
				String^ rConnectNum = gcnew System::String(System::Convert::ToString(elem.second->GetConnectNum()));
				String^ rMaxConnectNum = gcnew System::String(System::Convert::ToString(elem.second->GetmMaxConnectNum()));
				this->ServerGridView->Rows->Add(rClient, rCDKey, rDueDate, rConnectNum, rMaxConnectNum);
			}
			
		}

	};
}
