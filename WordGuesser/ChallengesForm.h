#pragma once
#include "navigation.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

public ref class ChallengesForm : public System::Windows::Forms::Form
{
	#pragma region Initialize Form
		public:
			ChallengesForm(void)
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
			~ChallengesForm()
			{
				if (components)
				{
					delete components;
				}
			}


		private: System::Windows::Forms::Button^ speedrunButton;












		private: System::Windows::Forms::Label^ accountLabel;
		private: System::Windows::Forms::Button^ backButton;



		private: System::Windows::Forms::Button^ clutchButton;
		private: System::Windows::Forms::Button^ comebackButton;
		private: System::Windows::Forms::Button^ perfectionistButton;

		private: System::Windows::Forms::Label^ diffLabel;
		private: System::Windows::Forms::Label^ speedrunDesc;
		private: System::Windows::Forms::PictureBox^ speedrunArrow;
		private: System::Windows::Forms::PictureBox^ comebackArrow;
		private: System::Windows::Forms::Label^ comebackDesc;
		private: System::Windows::Forms::Label^ perfectionistDesc;
		private: System::Windows::Forms::PictureBox^ perfectionistArrow;
		private: System::Windows::Forms::PictureBox^ clutchArrow;
		private: System::Windows::Forms::Label^ clutchDesc;















		protected:

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
				System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ChallengesForm::typeid));
				this->speedrunButton = (gcnew System::Windows::Forms::Button());
				this->accountLabel = (gcnew System::Windows::Forms::Label());
				this->backButton = (gcnew System::Windows::Forms::Button());
				this->clutchButton = (gcnew System::Windows::Forms::Button());
				this->comebackButton = (gcnew System::Windows::Forms::Button());
				this->perfectionistButton = (gcnew System::Windows::Forms::Button());
				this->diffLabel = (gcnew System::Windows::Forms::Label());
				this->speedrunDesc = (gcnew System::Windows::Forms::Label());
				this->speedrunArrow = (gcnew System::Windows::Forms::PictureBox());
				this->comebackArrow = (gcnew System::Windows::Forms::PictureBox());
				this->comebackDesc = (gcnew System::Windows::Forms::Label());
				this->perfectionistDesc = (gcnew System::Windows::Forms::Label());
				this->perfectionistArrow = (gcnew System::Windows::Forms::PictureBox());
				this->clutchArrow = (gcnew System::Windows::Forms::PictureBox());
				this->clutchDesc = (gcnew System::Windows::Forms::Label());
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->speedrunArrow))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->comebackArrow))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->perfectionistArrow))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->clutchArrow))->BeginInit();
				this->SuspendLayout();
				// 
				// speedrunButton
				// 
				this->speedrunButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
					static_cast<System::Int32>(static_cast<System::Byte>(38)));
				this->speedrunButton->FlatAppearance->BorderSize = 0;
				this->speedrunButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				this->speedrunButton->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 14.25F, System::Drawing::FontStyle::Bold));
				this->speedrunButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
					static_cast<System::Int32>(static_cast<System::Byte>(67)));
				this->speedrunButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"speedrunButton.Image")));
				this->speedrunButton->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
				this->speedrunButton->Location = System::Drawing::Point(130, 198);
				this->speedrunButton->Margin = System::Windows::Forms::Padding(2);
				this->speedrunButton->Name = L"speedrunButton";
				this->speedrunButton->Padding = System::Windows::Forms::Padding(2, 0, 0, 0);
				this->speedrunButton->Size = System::Drawing::Size(226, 40);
				this->speedrunButton->TabIndex = 27;
				this->speedrunButton->Text = L"        Speedrun";
				this->speedrunButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
				this->speedrunButton->UseVisualStyleBackColor = false;
				this->speedrunButton->Click += gcnew System::EventHandler(this, &ChallengesForm::speedrunButton_Click);
				this->speedrunButton->MouseLeave += gcnew System::EventHandler(this, &ChallengesForm::speedrunButton_MouseLeave);
				this->speedrunButton->MouseHover += gcnew System::EventHandler(this, &ChallengesForm::speedrunButton_MouseHover);
				// 
				// accountLabel
				// 
				this->accountLabel->BackColor = System::Drawing::Color::Transparent;
				this->accountLabel->Font = (gcnew System::Drawing::Font(L"Montserrat", 38.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->accountLabel->ForeColor = System::Drawing::Color::White;
				this->accountLabel->Location = System::Drawing::Point(22, 50);
				this->accountLabel->Name = L"accountLabel";
				this->accountLabel->Size = System::Drawing::Size(702, 80);
				this->accountLabel->TabIndex = 35;
				this->accountLabel->Text = L"Challenges";
				this->accountLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
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
				this->backButton->Location = System::Drawing::Point(291, 392);
				this->backButton->Margin = System::Windows::Forms::Padding(2);
				this->backButton->Name = L"backButton";
				this->backButton->Size = System::Drawing::Size(150, 35);
				this->backButton->TabIndex = 36;
				this->backButton->Text = L"   Back";
				this->backButton->UseVisualStyleBackColor = false;
				this->backButton->Click += gcnew System::EventHandler(this, &ChallengesForm::backButton_Click);
				// 
				// clutchButton
				// 
				this->clutchButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
					static_cast<System::Int32>(static_cast<System::Byte>(38)));
				this->clutchButton->FlatAppearance->BorderSize = 0;
				this->clutchButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				this->clutchButton->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 14.25F, System::Drawing::FontStyle::Bold));
				this->clutchButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
					static_cast<System::Int32>(static_cast<System::Byte>(67)));
				this->clutchButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"clutchButton.Image")));
				this->clutchButton->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
				this->clutchButton->Location = System::Drawing::Point(377, 253);
				this->clutchButton->Margin = System::Windows::Forms::Padding(2);
				this->clutchButton->Name = L"clutchButton";
				this->clutchButton->Padding = System::Windows::Forms::Padding(2, 0, 0, 0);
				this->clutchButton->Size = System::Drawing::Size(226, 40);
				this->clutchButton->TabIndex = 34;
				this->clutchButton->Text = L"        Clutch Master";
				this->clutchButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
				this->clutchButton->UseVisualStyleBackColor = false;
				this->clutchButton->Click += gcnew System::EventHandler(this, &ChallengesForm::clutchButton_Click);
				this->clutchButton->MouseLeave += gcnew System::EventHandler(this, &ChallengesForm::clutchButton_MouseLeave);
				this->clutchButton->MouseHover += gcnew System::EventHandler(this, &ChallengesForm::clutchButton_MouseHover);
				// 
				// comebackButton
				// 
				this->comebackButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
					static_cast<System::Int32>(static_cast<System::Byte>(38)));
				this->comebackButton->FlatAppearance->BorderSize = 0;
				this->comebackButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				this->comebackButton->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 14.25F, System::Drawing::FontStyle::Bold));
				this->comebackButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
					static_cast<System::Int32>(static_cast<System::Byte>(67)));
				this->comebackButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"comebackButton.Image")));
				this->comebackButton->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
				this->comebackButton->Location = System::Drawing::Point(377, 198);
				this->comebackButton->Margin = System::Windows::Forms::Padding(2);
				this->comebackButton->Name = L"comebackButton";
				this->comebackButton->Padding = System::Windows::Forms::Padding(2, 0, 0, 0);
				this->comebackButton->Size = System::Drawing::Size(226, 40);
				this->comebackButton->TabIndex = 32;
				this->comebackButton->Text = L"        Comeback Master";
				this->comebackButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
				this->comebackButton->UseVisualStyleBackColor = false;
				this->comebackButton->Click += gcnew System::EventHandler(this, &ChallengesForm::comebackButton_Click);
				this->comebackButton->MouseLeave += gcnew System::EventHandler(this, &ChallengesForm::comebackButton_MouseLeave);
				this->comebackButton->MouseHover += gcnew System::EventHandler(this, &ChallengesForm::comebackButton_MouseHover);
				// 
				// perfectionistButton
				// 
				this->perfectionistButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(144)),
					static_cast<System::Int32>(static_cast<System::Byte>(194)), static_cast<System::Int32>(static_cast<System::Byte>(38)));
				this->perfectionistButton->FlatAppearance->BorderSize = 0;
				this->perfectionistButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				this->perfectionistButton->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 14.25F, System::Drawing::FontStyle::Bold));
				this->perfectionistButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(67)));
				this->perfectionistButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"perfectionistButton.Image")));
				this->perfectionistButton->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
				this->perfectionistButton->Location = System::Drawing::Point(130, 253);
				this->perfectionistButton->Margin = System::Windows::Forms::Padding(2);
				this->perfectionistButton->Name = L"perfectionistButton";
				this->perfectionistButton->Padding = System::Windows::Forms::Padding(2, 0, 0, 0);
				this->perfectionistButton->Size = System::Drawing::Size(226, 40);
				this->perfectionistButton->TabIndex = 30;
				this->perfectionistButton->Text = L"        Perfectionist";
				this->perfectionistButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
				this->perfectionistButton->UseVisualStyleBackColor = false;
				this->perfectionistButton->Click += gcnew System::EventHandler(this, &ChallengesForm::perfectionistButton_Click);
				this->perfectionistButton->MouseLeave += gcnew System::EventHandler(this, &ChallengesForm::perfectionistButton_MouseLeave);
				this->perfectionistButton->MouseHover += gcnew System::EventHandler(this, &ChallengesForm::perfectionistButton_MouseHover);
				// 
				// diffLabel
				// 
				this->diffLabel->BackColor = System::Drawing::Color::Transparent;
				this->diffLabel->Font = (gcnew System::Drawing::Font(L"Montserrat", 27, System::Drawing::FontStyle::Bold));
				this->diffLabel->ForeColor = System::Drawing::Color::White;
				this->diffLabel->Location = System::Drawing::Point(12, 118);
				this->diffLabel->Name = L"diffLabel";
				this->diffLabel->Size = System::Drawing::Size(712, 56);
				this->diffLabel->TabIndex = 37;
				this->diffLabel->Text = L"Easy";
				this->diffLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				// 
				// speedrunDesc
				// 
				this->speedrunDesc->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
					static_cast<System::Int32>(static_cast<System::Byte>(38)));
				this->speedrunDesc->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->speedrunDesc->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
					static_cast<System::Int32>(static_cast<System::Byte>(67)));
				this->speedrunDesc->Location = System::Drawing::Point(89, 121);
				this->speedrunDesc->Name = L"speedrunDesc";
				this->speedrunDesc->Size = System::Drawing::Size(296, 56);
				this->speedrunDesc->TabIndex = 38;
				this->speedrunDesc->Text = L"Less Time for each word";
				this->speedrunDesc->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				this->speedrunDesc->Visible = false;
				// 
				// speedrunArrow
				// 
				this->speedrunArrow->BackColor = System::Drawing::Color::Transparent;
				this->speedrunArrow->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"speedrunArrow.Image")));
				this->speedrunArrow->Location = System::Drawing::Point(224, 177);
				this->speedrunArrow->Name = L"speedrunArrow";
				this->speedrunArrow->Size = System::Drawing::Size(32, 16);
				this->speedrunArrow->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->speedrunArrow->TabIndex = 39;
				this->speedrunArrow->TabStop = false;
				this->speedrunArrow->Visible = false;
				// 
				// comebackArrow
				// 
				this->comebackArrow->BackColor = System::Drawing::Color::Transparent;
				this->comebackArrow->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"comebackArrow.Image")));
				this->comebackArrow->Location = System::Drawing::Point(475, 177);
				this->comebackArrow->Name = L"comebackArrow";
				this->comebackArrow->Size = System::Drawing::Size(32, 16);
				this->comebackArrow->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->comebackArrow->TabIndex = 41;
				this->comebackArrow->TabStop = false;
				this->comebackArrow->Visible = false;
				// 
				// comebackDesc
				// 
				this->comebackDesc->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
					static_cast<System::Int32>(static_cast<System::Byte>(38)));
				this->comebackDesc->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->comebackDesc->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
					static_cast<System::Int32>(static_cast<System::Byte>(67)));
				this->comebackDesc->Location = System::Drawing::Point(336, 121);
				this->comebackDesc->Name = L"comebackDesc";
				this->comebackDesc->Size = System::Drawing::Size(317, 56);
				this->comebackDesc->TabIndex = 40;
				this->comebackDesc->Text = L"Lose the first 3 rounds, then win all remaining rounds";
				this->comebackDesc->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				this->comebackDesc->Visible = false;
				// 
				// perfectionistDesc
				// 
				this->perfectionistDesc->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(144)),
					static_cast<System::Int32>(static_cast<System::Byte>(194)), static_cast<System::Int32>(static_cast<System::Byte>(38)));
				this->perfectionistDesc->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->perfectionistDesc->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)),
					static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(67)));
				this->perfectionistDesc->Location = System::Drawing::Point(89, 314);
				this->perfectionistDesc->Name = L"perfectionistDesc";
				this->perfectionistDesc->Size = System::Drawing::Size(296, 56);
				this->perfectionistDesc->TabIndex = 42;
				this->perfectionistDesc->Text = L"Guess every word correctly without a single mistake";
				this->perfectionistDesc->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				this->perfectionistDesc->Visible = false;
				// 
				// perfectionistArrow
				// 
				this->perfectionistArrow->BackColor = System::Drawing::Color::Transparent;
				this->perfectionistArrow->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"perfectionistArrow.Image")));
				this->perfectionistArrow->Location = System::Drawing::Point(224, 298);
				this->perfectionistArrow->Name = L"perfectionistArrow";
				this->perfectionistArrow->Size = System::Drawing::Size(32, 16);
				this->perfectionistArrow->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->perfectionistArrow->TabIndex = 43;
				this->perfectionistArrow->TabStop = false;
				this->perfectionistArrow->Visible = false;
				// 
				// clutchArrow
				// 
				this->clutchArrow->BackColor = System::Drawing::Color::Transparent;
				this->clutchArrow->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"clutchArrow.Image")));
				this->clutchArrow->Location = System::Drawing::Point(475, 298);
				this->clutchArrow->Name = L"clutchArrow";
				this->clutchArrow->Size = System::Drawing::Size(32, 16);
				this->clutchArrow->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->clutchArrow->TabIndex = 45;
				this->clutchArrow->TabStop = false;
				this->clutchArrow->Visible = false;
				// 
				// clutchDesc
				// 
				this->clutchDesc->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
					static_cast<System::Int32>(static_cast<System::Byte>(38)));
				this->clutchDesc->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->clutchDesc->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
					static_cast<System::Int32>(static_cast<System::Byte>(67)));
				this->clutchDesc->Location = System::Drawing::Point(331, 314);
				this->clutchDesc->Name = L"clutchDesc";
				this->clutchDesc->Size = System::Drawing::Size(322, 56);
				this->clutchDesc->TabIndex = 44;
				this->clutchDesc->Text = L"Wait for the last second to enter the word";
				this->clutchDesc->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				this->clutchDesc->Visible = false;
				// 
				// ChallengesForm
				// 
				this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
					static_cast<System::Int32>(static_cast<System::Byte>(67)));
				this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
				this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->ClientSize = System::Drawing::Size(736, 466);
				this->Controls->Add(this->clutchArrow);
				this->Controls->Add(this->clutchDesc);
				this->Controls->Add(this->perfectionistArrow);
				this->Controls->Add(this->perfectionistDesc);
				this->Controls->Add(this->comebackArrow);
				this->Controls->Add(this->comebackDesc);
				this->Controls->Add(this->speedrunArrow);
				this->Controls->Add(this->speedrunDesc);
				this->Controls->Add(this->diffLabel);
				this->Controls->Add(this->backButton);
				this->Controls->Add(this->accountLabel);
				this->Controls->Add(this->clutchButton);
				this->Controls->Add(this->comebackButton);
				this->Controls->Add(this->perfectionistButton);
				this->Controls->Add(this->speedrunButton);
				this->Margin = System::Windows::Forms::Padding(2);
				this->Name = L"ChallengesForm";
				this->Text = L"ChallengesForm";
				this->Load += gcnew System::EventHandler(this, &ChallengesForm::ChallengesForm_Load);
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->speedrunArrow))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->comebackArrow))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->perfectionistArrow))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->clutchArrow))->EndInit();
				this->ResumeLayout(false);

			}
	#pragma endregion
private: System::Void ChallengesForm_Load(System::Object^ sender, System::EventArgs^ e) {
	if (Navigation::difficulty == 1) // easy
	{
		diffLabel->Text = "Easy";
	}
	else if (Navigation::difficulty == 2) // medium
	{
		diffLabel->Text = "Medium";
	}
	else if (Navigation::difficulty == 3) // hard
	{
		diffLabel->Text = "Hard";

	}
}

private: System::Void backButton_Click(System::Object^ sender, System::EventArgs^ e) {
	Navigation::LoadPlayForm();
}
private: System::Void speedrunButton_Click(System::Object^ sender, System::EventArgs^ e) {
	Navigation::challenge = 1;
	Navigation::LoadGameForm();
}
private: System::Void comebackButton_Click(System::Object^ sender, System::EventArgs^ e) {
	Navigation::challenge = 2;
	Navigation::LoadGameForm();
}
private: System::Void perfectionistButton_Click(System::Object^ sender, System::EventArgs^ e) {
	Navigation::challenge = 3;
	Navigation::LoadGameForm();
}
private: System::Void clutchButton_Click(System::Object^ sender, System::EventArgs^ e) {
	Navigation::challenge = 4;
	Navigation::LoadGameForm();
}

private: System::Void speedrunButton_MouseHover(System::Object^ sender, System::EventArgs^ e) {
	speedrunArrow->Visible = true;
	speedrunDesc->Visible = true;
}
private: System::Void speedrunButton_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	speedrunArrow->Visible = false;
	speedrunDesc->Visible = false;
}
private: System::Void comebackButton_MouseHover(System::Object^ sender, System::EventArgs^ e) {
	comebackArrow->Visible = true;
	comebackDesc->Visible = true;
}
private: System::Void comebackButton_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	comebackArrow->Visible = false;
	comebackDesc->Visible = false;
}
private: System::Void perfectionistButton_MouseHover(System::Object^ sender, System::EventArgs^ e) {
	perfectionistArrow->Visible = true;
	perfectionistDesc->Visible = true;
}

private: System::Void perfectionistButton_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	perfectionistArrow->Visible = false;
	perfectionistDesc->Visible = false;
}
private: System::Void clutchButton_MouseHover(System::Object^ sender, System::EventArgs^ e) {
	clutchArrow->Visible = true;
	clutchDesc->Visible = true;
}
private: System::Void clutchButton_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	clutchArrow->Visible = false;
	clutchDesc->Visible = false;
}
};
