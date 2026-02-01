#pragma once
#include <fstream>
#include "utils.h"
#include "navigation.h"


using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace std;


public ref class MenuForm : public System::Windows::Forms::Form
{
	#pragma region Initalize Form
	
public:
	MenuForm(void)
	{
		InitializeComponent();
		//
		//TODO: Add the constructor code here
		//
		this->DoubleBuffered = true;

		this->SetStyle(ControlStyles::AllPaintingInWmPaint |
			ControlStyles::UserPaint |
			ControlStyles::OptimizedDoubleBuffer, true);
		this->UpdateStyles();
	}

protected:
	/// <summary>
	/// Clean up any resources being used.
	/// </summary>
	~MenuForm()
	{
		if (components)
		{
			delete components;
		}
	}

private: System::Windows::Forms::Button^ playButton;
private: System::Windows::Forms::Button^ leaderboardButton;
private: System::Windows::Forms::Label^ greetingLabel;



private: System::Windows::Forms::Button^ quitButton;
private: System::Windows::Forms::Button^ creditsButton;
private: System::Windows::Forms::PictureBox^ wordGuesserLabel;
private: System::Windows::Forms::Button^ accountButton;













protected:

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
		System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MenuForm::typeid));
		this->playButton = (gcnew System::Windows::Forms::Button());
		this->leaderboardButton = (gcnew System::Windows::Forms::Button());
		this->greetingLabel = (gcnew System::Windows::Forms::Label());
		this->quitButton = (gcnew System::Windows::Forms::Button());
		this->creditsButton = (gcnew System::Windows::Forms::Button());
		this->wordGuesserLabel = (gcnew System::Windows::Forms::PictureBox());
		this->accountButton = (gcnew System::Windows::Forms::Button());
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->wordGuesserLabel))->BeginInit();
		this->SuspendLayout();
		// 
		// playButton
		// 
		this->playButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
			static_cast<System::Int32>(static_cast<System::Byte>(38)));
		this->playButton->FlatAppearance->BorderSize = 0;
		this->playButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->playButton->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 14.25F, System::Drawing::FontStyle::Bold));
		this->playButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
			static_cast<System::Int32>(static_cast<System::Byte>(67)));
		this->playButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"playButton.Image")));
		this->playButton->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->playButton->Location = System::Drawing::Point(259, 212);
		this->playButton->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
		this->playButton->Name = L"playButton";
		this->playButton->Padding = System::Windows::Forms::Padding(2, 0, 0, 0);
		this->playButton->Size = System::Drawing::Size(226, 40);
		this->playButton->TabIndex = 1;
		this->playButton->Text = L"        Play";
		this->playButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->playButton->UseVisualStyleBackColor = false;
		this->playButton->Click += gcnew System::EventHandler(this, &MenuForm::playButton_Click);
		this->playButton->MouseEnter += gcnew System::EventHandler(this, &MenuForm::playButton_MouseEnter);
		// 
		// leaderboardButton
		// 
		this->leaderboardButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(144)),
			static_cast<System::Int32>(static_cast<System::Byte>(194)), static_cast<System::Int32>(static_cast<System::Byte>(38)));
		this->leaderboardButton->FlatAppearance->BorderSize = 0;
		this->leaderboardButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->leaderboardButton->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 14.25F, System::Drawing::FontStyle::Bold));
		this->leaderboardButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)),
			static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(67)));
		this->leaderboardButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"leaderboardButton.Image")));
		this->leaderboardButton->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->leaderboardButton->Location = System::Drawing::Point(259, 257);
		this->leaderboardButton->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
		this->leaderboardButton->Name = L"leaderboardButton";
		this->leaderboardButton->Padding = System::Windows::Forms::Padding(2, 0, 0, 0);
		this->leaderboardButton->Size = System::Drawing::Size(226, 40);
		this->leaderboardButton->TabIndex = 2;
		this->leaderboardButton->Text = L"        Leaderboard";
		this->leaderboardButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->leaderboardButton->UseVisualStyleBackColor = false;
		this->leaderboardButton->Click += gcnew System::EventHandler(this, &MenuForm::leaderboardButton_Click);
		this->leaderboardButton->MouseEnter += gcnew System::EventHandler(this, &MenuForm::leaderboardButton_MouseEnter);
		// 
		// greetingLabel
		// 
		this->greetingLabel->BackColor = System::Drawing::Color::Transparent;
		this->greetingLabel->Font = (gcnew System::Drawing::Font(L"Montserrat", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->greetingLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
			static_cast<System::Int32>(static_cast<System::Byte>(38)));
		this->greetingLabel->Location = System::Drawing::Point(146, 150);
		this->greetingLabel->Name = L"greetingLabel";
		this->greetingLabel->Size = System::Drawing::Size(447, 41);
		this->greetingLabel->TabIndex = 3;
		this->greetingLabel->Text = L"Welcome User!";
		this->greetingLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
		// 
		// quitButton
		// 
		this->quitButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
			static_cast<System::Int32>(static_cast<System::Byte>(38)));
		this->quitButton->FlatAppearance->BorderSize = 0;
		this->quitButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->quitButton->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 14.25F, System::Drawing::FontStyle::Bold));
		this->quitButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
			static_cast<System::Int32>(static_cast<System::Byte>(67)));
		this->quitButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"quitButton.Image")));
		this->quitButton->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->quitButton->Location = System::Drawing::Point(259, 391);
		this->quitButton->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
		this->quitButton->Name = L"quitButton";
		this->quitButton->Padding = System::Windows::Forms::Padding(2, 0, 0, 0);
		this->quitButton->Size = System::Drawing::Size(226, 40);
		this->quitButton->TabIndex = 5;
		this->quitButton->Text = L"        Quit";
		this->quitButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->quitButton->UseVisualStyleBackColor = false;
		this->quitButton->Click += gcnew System::EventHandler(this, &MenuForm::quitButton_Click);
		this->quitButton->MouseEnter += gcnew System::EventHandler(this, &MenuForm::quitButton_MouseEnter);
		// 
		// creditsButton
		// 
		this->creditsButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
			static_cast<System::Int32>(static_cast<System::Byte>(38)));
		this->creditsButton->FlatAppearance->BorderSize = 0;
		this->creditsButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->creditsButton->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 14.25F, System::Drawing::FontStyle::Bold));
		this->creditsButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
			static_cast<System::Int32>(static_cast<System::Byte>(67)));
		this->creditsButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"creditsButton.Image")));
		this->creditsButton->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->creditsButton->Location = System::Drawing::Point(259, 346);
		this->creditsButton->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
		this->creditsButton->Name = L"creditsButton";
		this->creditsButton->Padding = System::Windows::Forms::Padding(2, 0, 0, 0);
		this->creditsButton->Size = System::Drawing::Size(226, 40);
		this->creditsButton->TabIndex = 6;
		this->creditsButton->Text = L"        Credits";
		this->creditsButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->creditsButton->UseVisualStyleBackColor = false;
		this->creditsButton->Click += gcnew System::EventHandler(this, &MenuForm::creditsButton_Click);
		this->creditsButton->MouseEnter += gcnew System::EventHandler(this, &MenuForm::creditsButton_MouseEnter);
		// 
		// wordGuesserLabel
		// 
		this->wordGuesserLabel->BackColor = System::Drawing::Color::Transparent;
		this->wordGuesserLabel->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"wordGuesserLabel.Image")));
		this->wordGuesserLabel->Location = System::Drawing::Point(16, 10);
		this->wordGuesserLabel->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
		this->wordGuesserLabel->Name = L"wordGuesserLabel";
		this->wordGuesserLabel->Size = System::Drawing::Size(697, 138);
		this->wordGuesserLabel->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
		this->wordGuesserLabel->TabIndex = 7;
		this->wordGuesserLabel->TabStop = false;
		// 
		// accountButton
		// 
		this->accountButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
			static_cast<System::Int32>(static_cast<System::Byte>(38)));
		this->accountButton->FlatAppearance->BorderSize = 0;
		this->accountButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->accountButton->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 14.25F, System::Drawing::FontStyle::Bold));
		this->accountButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
			static_cast<System::Int32>(static_cast<System::Byte>(67)));
		this->accountButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"accountButton.Image")));
		this->accountButton->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->accountButton->Location = System::Drawing::Point(259, 301);
		this->accountButton->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
		this->accountButton->Name = L"accountButton";
		this->accountButton->Padding = System::Windows::Forms::Padding(2, 0, 0, 0);
		this->accountButton->Size = System::Drawing::Size(226, 40);
		this->accountButton->TabIndex = 8;
		this->accountButton->Text = L"        Account";
		this->accountButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->accountButton->UseVisualStyleBackColor = false;
		this->accountButton->Click += gcnew System::EventHandler(this, &MenuForm::accountButton_Click);
		this->accountButton->MouseEnter += gcnew System::EventHandler(this, &MenuForm::accountButton_MouseEnter);
		// 
		// MenuForm
		// 
		this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
			static_cast<System::Int32>(static_cast<System::Byte>(67)));
		this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
		this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
		this->ClientSize = System::Drawing::Size(736, 466);
		this->Controls->Add(this->accountButton);
		this->Controls->Add(this->wordGuesserLabel);
		this->Controls->Add(this->creditsButton);
		this->Controls->Add(this->quitButton);
		this->Controls->Add(this->greetingLabel);
		this->Controls->Add(this->leaderboardButton);
		this->Controls->Add(this->playButton);
		this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
		this->Name = L"MenuForm";
		this->Text = L"MenuForm";
		this->Load += gcnew System::EventHandler(this, &MenuForm::MenuForm_Load);
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->wordGuesserLabel))->EndInit();
		this->ResumeLayout(false);

	}
	#pragma endregion

private: System::Void MenuForm_Load(System::Object^ sender, System::EventArgs^ e) {
	greetingLabel->Text = "Welcome " + Navigation::username + "!";
}

private: System::Void leaderboardButton_Click(System::Object^ sender, System::EventArgs^ e) {
	Navigation::LoadLeaderboardForm();
}
private: System::Void quitButton_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void creditsButton_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Junaid Irfan*\t(FA25-BCS-005)\n\nNasrullah\t(FA25-BCS-006)\n\nAhmad Ali\t(FA25-BCS-033)\n\nUmair Asghar\t(FA25-BCS-042)\n\nUzair Hamid\t(FA23-BCS-157)", "Credits");
}
private: System::Void playButton_Click(System::Object^ sender, System::EventArgs^ e) {
	Navigation::soundPlayer->SoundLocation = Application::StartupPath + "\\sounds\\click.wav";
	Navigation::soundPlayer->Play();
	Navigation::LoadPlayForm();
}

private: System::Void accountButton_Click(System::Object^ sender, System::EventArgs^ e) {
	Navigation::LoadAccountForm();
}
private: System::Void playButton_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	Navigation::soundPlayer->SoundLocation = Application::StartupPath + "\\sounds\\hover.wav";
	Navigation::soundPlayer->Play();
}
private: System::Void leaderboardButton_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	Navigation::soundPlayer->SoundLocation = Application::StartupPath + "\\sounds\\hover.wav";
	Navigation::soundPlayer->Play();
}
private: System::Void accountButton_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	Navigation::soundPlayer->SoundLocation = Application::StartupPath + "\\sounds\\hover.wav";
	Navigation::soundPlayer->Play();
}
private: System::Void creditsButton_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	Navigation::soundPlayer->SoundLocation = Application::StartupPath + "\\sounds\\hover.wav";
	Navigation::soundPlayer->Play();
}
private: System::Void quitButton_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	Navigation::soundPlayer->SoundLocation = Application::StartupPath + "\\sounds\\hover.wav";
	Navigation::soundPlayer->Play();
}
};
