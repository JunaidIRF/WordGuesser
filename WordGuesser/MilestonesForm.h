#pragma once
#include "navigation.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace std;

public ref class MilestonesForm : public System::Windows::Forms::Form
{
	#pragma region Initialize Form
	public:
		MilestonesForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MilestonesForm()
		{
			if (components)
			{
				delete components;
			}
		}
private: System::Windows::Forms::Label^ milestone100k;
protected:
private: System::Windows::Forms::Label^ milestone10k;
private: System::Windows::Forms::Label^ milestone5k;

protected:


private: System::Windows::Forms::Label^ milestone1k;
private: System::Windows::Forms::Label^ milestone500;
private: System::Windows::Forms::Label^ milestone100;







protected:

	protected:





	private: System::Windows::Forms::Label^ milestonesLabel;
private: System::Windows::Forms::Button^ backButton;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
#pragma endregion
	#pragma region Windows Form Designer generated code
			/// <summary>
			/// Required method for Designer support - do not modify
			/// the contents of this method with the code editor.
			/// </summary>
			void InitializeComponent(void)
			{
				System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MilestonesForm::typeid));
				this->milestone100k = (gcnew System::Windows::Forms::Label());
				this->milestone10k = (gcnew System::Windows::Forms::Label());
				this->milestone5k = (gcnew System::Windows::Forms::Label());
				this->milestone1k = (gcnew System::Windows::Forms::Label());
				this->milestone500 = (gcnew System::Windows::Forms::Label());
				this->milestone100 = (gcnew System::Windows::Forms::Label());
				this->milestonesLabel = (gcnew System::Windows::Forms::Label());
				this->backButton = (gcnew System::Windows::Forms::Button());
				this->SuspendLayout();
				// 
				// milestone100k
				// 
				this->milestone100k->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(72)), static_cast<System::Int32>(static_cast<System::Byte>(97)),
					static_cast<System::Int32>(static_cast<System::Byte>(19)));
				this->milestone100k->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->milestone100k->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(160)),
					static_cast<System::Int32>(static_cast<System::Byte>(160)));
				this->milestone100k->Location = System::Drawing::Point(331, 123);
				this->milestone100k->Name = L"milestone100k";
				this->milestone100k->Size = System::Drawing::Size(75, 35);
				this->milestone100k->TabIndex = 39;
				this->milestone100k->Text = L" 100k+";
				this->milestone100k->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				// 
				// milestone10k
				// 
				this->milestone10k->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(72)), static_cast<System::Int32>(static_cast<System::Byte>(97)),
					static_cast<System::Int32>(static_cast<System::Byte>(19)));
				this->milestone10k->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->milestone10k->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(160)),
					static_cast<System::Int32>(static_cast<System::Byte>(160)));
				this->milestone10k->Location = System::Drawing::Point(306, 163);
				this->milestone10k->Name = L"milestone10k";
				this->milestone10k->Size = System::Drawing::Size(125, 35);
				this->milestone10k->TabIndex = 40;
				this->milestone10k->Text = L" 10k+";
				this->milestone10k->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				// 
				// milestone5k
				// 
				this->milestone5k->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(72)), static_cast<System::Int32>(static_cast<System::Byte>(97)),
					static_cast<System::Int32>(static_cast<System::Byte>(19)));
				this->milestone5k->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->milestone5k->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(160)),
					static_cast<System::Int32>(static_cast<System::Byte>(160)));
				this->milestone5k->Location = System::Drawing::Point(278, 203);
				this->milestone5k->Name = L"milestone5k";
				this->milestone5k->Size = System::Drawing::Size(180, 35);
				this->milestone5k->TabIndex = 41;
				this->milestone5k->Text = L" 5k+";
				this->milestone5k->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				// 
				// milestone1k
				// 
				this->milestone1k->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(72)), static_cast<System::Int32>(static_cast<System::Byte>(97)),
					static_cast<System::Int32>(static_cast<System::Byte>(19)));
				this->milestone1k->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->milestone1k->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(160)),
					static_cast<System::Int32>(static_cast<System::Byte>(160)));
				this->milestone1k->Location = System::Drawing::Point(256, 243);
				this->milestone1k->Name = L"milestone1k";
				this->milestone1k->Size = System::Drawing::Size(225, 35);
				this->milestone1k->TabIndex = 42;
				this->milestone1k->Text = L" 1k+";
				this->milestone1k->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				// 
				// milestone500
				// 
				this->milestone500->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(72)), static_cast<System::Int32>(static_cast<System::Byte>(97)),
					static_cast<System::Int32>(static_cast<System::Byte>(19)));
				this->milestone500->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->milestone500->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(160)),
					static_cast<System::Int32>(static_cast<System::Byte>(160)));
				this->milestone500->Location = System::Drawing::Point(228, 283);
				this->milestone500->Name = L"milestone500";
				this->milestone500->Size = System::Drawing::Size(280, 35);
				this->milestone500->TabIndex = 43;
				this->milestone500->Text = L" 500+";
				this->milestone500->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				// 
				// milestone100
				// 
				this->milestone100->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(72)), static_cast<System::Int32>(static_cast<System::Byte>(97)),
					static_cast<System::Int32>(static_cast<System::Byte>(19)));
				this->milestone100->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->milestone100->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(160)),
					static_cast<System::Int32>(static_cast<System::Byte>(160)));
				this->milestone100->Location = System::Drawing::Point(206, 323);
				this->milestone100->Name = L"milestone100";
				this->milestone100->Size = System::Drawing::Size(325, 35);
				this->milestone100->TabIndex = 44;
				this->milestone100->Text = L" 100+";
				this->milestone100->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				// 
				// milestonesLabel
				// 
				this->milestonesLabel->AutoSize = true;
				this->milestonesLabel->BackColor = System::Drawing::Color::Transparent;
				this->milestonesLabel->Font = (gcnew System::Drawing::Font(L"Montserrat", 38.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->milestonesLabel->ForeColor = System::Drawing::Color::White;
				this->milestonesLabel->Location = System::Drawing::Point(206, 21);
				this->milestonesLabel->Name = L"milestonesLabel";
				this->milestonesLabel->Size = System::Drawing::Size(320, 80);
				this->milestonesLabel->TabIndex = 45;
				this->milestonesLabel->Text = L"Milestones";
				// 
				// backButton
				// 
				this->backButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
					static_cast<System::Int32>(static_cast<System::Byte>(38)));
				this->backButton->FlatAppearance->BorderSize = 0;
				this->backButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				this->backButton->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->backButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
					static_cast<System::Int32>(static_cast<System::Byte>(67)));
				this->backButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"backButton.Image")));
				this->backButton->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
				this->backButton->Location = System::Drawing::Point(296, 395);
				this->backButton->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
				this->backButton->Name = L"backButton";
				this->backButton->Size = System::Drawing::Size(150, 35);
				this->backButton->TabIndex = 46;
				this->backButton->Text = L"   Back";
				this->backButton->UseVisualStyleBackColor = false;
				this->backButton->Click += gcnew System::EventHandler(this, &MilestonesForm::backButton_Click);
				// 
				// MilestonesForm
				// 
				this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
					static_cast<System::Int32>(static_cast<System::Byte>(67)));
				this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
				this->ClientSize = System::Drawing::Size(736, 466);
				this->Controls->Add(this->backButton);
				this->Controls->Add(this->milestonesLabel);
				this->Controls->Add(this->milestone100);
				this->Controls->Add(this->milestone500);
				this->Controls->Add(this->milestone1k);
				this->Controls->Add(this->milestone5k);
				this->Controls->Add(this->milestone10k);
				this->Controls->Add(this->milestone100k);
				this->Name = L"MilestonesForm";
				this->Text = L"MilestonesForm";
				this->Load += gcnew System::EventHandler(this, &MilestonesForm::MilestonesForm_Load);
				this->ResumeLayout(false);
				this->PerformLayout();

			}
	#pragma endregion
	

	private: System::Void MilestonesForm_Load(System::Object^ sender, System::EventArgs^ e) {
		if (Navigation::totalScore >= 100000)
		{
			milestone100k->BackColor = Color::FromArgb(144, 194, 38);
			milestone100k->ForeColor = Color::FromArgb(44, 60, 67);
		}
		if (Navigation::totalScore >= 10000)
		{
			milestone10k->BackColor = Color::FromArgb(144, 194, 38);
			milestone10k->ForeColor = Color::FromArgb(44, 60, 67);
		}
		if (Navigation::totalScore >= 5000)
		{
			milestone5k->BackColor = Color::FromArgb(144, 194, 38);
			milestone5k->ForeColor = Color::FromArgb(44, 60, 67);
		}
		if (Navigation::totalScore >= 1000)
		{
			milestone1k->BackColor = Color::FromArgb(144, 194, 38);
			milestone1k->ForeColor = Color::FromArgb(44, 60, 67);
		}
		if (Navigation::totalScore >= 500)
		{
			milestone500->BackColor = Color::FromArgb(144, 194, 38);
			milestone500->ForeColor = Color::FromArgb(44, 60, 67);
		}
		if (Navigation::totalScore >= 100)
		{
			milestone100->BackColor = Color::FromArgb(144, 194, 38);
			milestone100->ForeColor = Color::FromArgb(44, 60, 67);
		}

	}
private: System::Void backButton_Click(System::Object^ sender, System::EventArgs^ e) {
	Navigation::LoadAccountForm();
}
};
