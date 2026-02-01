#pragma once
#include "MenuForm.h"
#include "LoginForm.h"
#include "PlayForm.h"
#include "LeaderboardForm.h"
#include "GameForm.h"
#include "ResultForm.h"
#include "AccountForm.h"
#include "ChallengesForm.h"
#include "MilestonesForm.h"

#include "navigation.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace std;

public ref class MainForm : public System::Windows::Forms::Form
{
	#pragma region Initalize Form
	public:

	static void OpenLoginForm() {
		Navigation::LoadForm(gcnew LoginForm());
	}
    static void OpenMenuForm() {
        Navigation::LoadForm(gcnew MenuForm());
    }
	static void OpenPlayForm() {
		Navigation::LoadForm(gcnew PlayForm());
	}
	static void OpenLeaderboardForm() {
		Navigation::LoadForm(gcnew LeaderboardForm());
	}
	static void OpenGameForm() {
		Navigation::LoadForm(gcnew GameForm());
	}
	static void OpenResultForm() {
		Navigation::LoadForm(gcnew ResultForm());
	}    
	static void OpenAccountForm() {
		Navigation::LoadForm(gcnew AccountForm());
	}    
	static void OpenChallengesForm() {
		Navigation::LoadForm(gcnew ChallengesForm());
	}    
	static void OpenMilestonesForm() {
		Navigation::LoadForm(gcnew MilestonesForm());
	}

	MainForm(void)
	{
		InitializeComponent();
		Navigation::mainPanel = this->mainPanel;
		// This forces the panel to draw off-screen first, then flip to screen (Zero Flicker)
// 1. Get the "DoubleBuffered" property info
		System::Reflection::PropertyInfo^ prop =
			System::Windows::Forms::Panel::typeid->GetProperty(
				"DoubleBuffered",
				System::Reflection::BindingFlags::Instance | System::Reflection::BindingFlags::NonPublic
			);

		// 2. Set the value to true
		// We use 'cli::array' to avoid conflict with 'std::array'
		prop->SetValue(mainPanel, true, nullptr);
	}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
public: System::Windows::Forms::Panel^ mainPanel;
protected:
	virtual property System::Windows::Forms::CreateParams^ CreateParams{
		System::Windows::Forms::CreateParams ^ get() override {
			System::Windows::Forms::CreateParams^ cp = __super::CreateParams;
			cp->ExStyle |= 0x02000000;
			return cp;
		}
	}

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->mainPanel = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();
			// 
			// mainPanel
			// 
			this->mainPanel->BackColor = System::Drawing::SystemColors::Control;
			this->mainPanel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"mainPanel.BackgroundImage")));
			this->mainPanel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->mainPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->mainPanel->Location = System::Drawing::Point(0, 0);
			this->mainPanel->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->mainPanel->Name = L"mainPanel";
			this->mainPanel->Size = System::Drawing::Size(981, 574);
			this->mainPanel->TabIndex = 0;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(981, 574);
			this->Controls->Add(this->mainPanel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->MaximizeBox = false;
			this->Name = L"MainForm";
			this->Text = L"Word Guesser";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->ResumeLayout(false);

		}
	#pragma endregion


private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	Navigation::LoadLoginForm = gcnew Action(&OpenLoginForm);
	Navigation::LoadMenuForm = gcnew Action(&OpenMenuForm);
	Navigation::LoadPlayForm = gcnew Action(&OpenPlayForm);
	Navigation::LoadLeaderboardForm = gcnew Action(&OpenLeaderboardForm);
	Navigation::LoadGameForm = gcnew Action(&OpenGameForm);
	Navigation::LoadResultForm = gcnew Action(&OpenResultForm);
	Navigation::LoadAccountForm = gcnew Action(&OpenAccountForm);
	Navigation::LoadChallengesForm = gcnew Action(&OpenChallengesForm);
	Navigation::LoadMilestonesForm = gcnew Action(&OpenMilestonesForm);

	ifstream rememberFile("loggedIn.txt");
	if (rememberFile.is_open())
	{
		string line;
		if (getline(rememberFile, line) && !line.empty())
		{
			Navigation::username = to_String(line);
			Navigation::LoadMenuForm();
		}
		else
		{
			Navigation::LoadLoginForm();
		}

		rememberFile.close();
	}
	else
	{
		Navigation::LoadLoginForm();
	}
	
}
};
