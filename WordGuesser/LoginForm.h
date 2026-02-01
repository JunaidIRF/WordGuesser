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

public ref class LoginForm : public System::Windows::Forms::Form
{
	#pragma region Initalize Form
		public:
			LoginForm(void)
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
			~LoginForm()
			{
				if (components)
				{
					delete components;
				}
			}

		private: System::Windows::Forms::TextBox^ usernameBox;
		private: System::Windows::Forms::Label^ usernameLabel;
		private: System::Windows::Forms::Label^ passwordLabel;
		private: System::Windows::Forms::TextBox^ passwordBox;
		private: System::Windows::Forms::Button^ loginButton;
		private: System::Windows::Forms::Button^ registerButton;
private: System::Windows::Forms::CheckBox^ keeploggedCheck;
private: System::Windows::Forms::Label^ accountLabel;











		protected:

		private:
			/// <summary>
			/// Required designer variable.
			/// </summary>
			System::ComponentModel::Container^ components;
	#pragma endregion
	#pragma region Windows Form Designer generated code
			/// <summary>
			/// Required method for Designer support - do not modify
			/// the contents of this method with the code editor.
			/// </summary>
			void InitializeComponent(void)
			{
				System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginForm::typeid));
				this->usernameBox = (gcnew System::Windows::Forms::TextBox());
				this->usernameLabel = (gcnew System::Windows::Forms::Label());
				this->passwordLabel = (gcnew System::Windows::Forms::Label());
				this->passwordBox = (gcnew System::Windows::Forms::TextBox());
				this->loginButton = (gcnew System::Windows::Forms::Button());
				this->registerButton = (gcnew System::Windows::Forms::Button());
				this->keeploggedCheck = (gcnew System::Windows::Forms::CheckBox());
				this->accountLabel = (gcnew System::Windows::Forms::Label());
				this->SuspendLayout();
				// 
				// usernameBox
				// 
				this->usernameBox->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->usernameBox->Location = System::Drawing::Point(362, 159);
				this->usernameBox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
				this->usernameBox->MaxLength = 16;
				this->usernameBox->Name = L"usernameBox";
				this->usernameBox->Size = System::Drawing::Size(148, 27);
				this->usernameBox->TabIndex = 2;
				this->usernameBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &LoginForm::usernameBox_KeyPress);
				// 
				// usernameLabel
				// 
				this->usernameLabel->AutoSize = true;
				this->usernameLabel->BackColor = System::Drawing::Color::Transparent;
				this->usernameLabel->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 18, System::Drawing::FontStyle::Bold));
				this->usernameLabel->ForeColor = System::Drawing::Color::White;
				this->usernameLabel->Location = System::Drawing::Point(207, 156);
				this->usernameLabel->Name = L"usernameLabel";
				this->usernameLabel->Size = System::Drawing::Size(150, 38);
				this->usernameLabel->TabIndex = 3;
				this->usernameLabel->Text = L"Username:";
				// 
				// passwordLabel
				// 
				this->passwordLabel->AutoSize = true;
				this->passwordLabel->BackColor = System::Drawing::Color::Transparent;
				this->passwordLabel->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 18, System::Drawing::FontStyle::Bold));
				this->passwordLabel->ForeColor = System::Drawing::Color::White;
				this->passwordLabel->Location = System::Drawing::Point(215, 203);
				this->passwordLabel->Name = L"passwordLabel";
				this->passwordLabel->Size = System::Drawing::Size(142, 38);
				this->passwordLabel->TabIndex = 5;
				this->passwordLabel->Text = L"Password:";
				// 
				// passwordBox
				// 
				this->passwordBox->Font = (gcnew System::Drawing::Font(L"Montserrat", 12));
				this->passwordBox->Location = System::Drawing::Point(362, 207);
				this->passwordBox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
				this->passwordBox->MaxLength = 16;
				this->passwordBox->Name = L"passwordBox";
				this->passwordBox->Size = System::Drawing::Size(148, 27);
				this->passwordBox->TabIndex = 4;
				this->passwordBox->UseSystemPasswordChar = true;
				this->passwordBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &LoginForm::passwordBox_KeyPress);
				// 
				// loginButton
				// 
				this->loginButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
					static_cast<System::Int32>(static_cast<System::Byte>(38)));
				this->loginButton->FlatAppearance->BorderSize = 0;
				this->loginButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				this->loginButton->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 14.25F, System::Drawing::FontStyle::Bold));
				this->loginButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
					static_cast<System::Int32>(static_cast<System::Byte>(67)));
				this->loginButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"loginButton.Image")));
				this->loginButton->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
				this->loginButton->Location = System::Drawing::Point(173, 302);
				this->loginButton->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
				this->loginButton->Name = L"loginButton";
				this->loginButton->Padding = System::Windows::Forms::Padding(2, 0, 0, 0);
				this->loginButton->Size = System::Drawing::Size(188, 40);
				this->loginButton->TabIndex = 6;
				this->loginButton->Text = L"        Login";
				this->loginButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
				this->loginButton->UseVisualStyleBackColor = false;
				this->loginButton->Click += gcnew System::EventHandler(this, &LoginForm::loginButton_Click);
				// 
				// registerButton
				// 
				this->registerButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
					static_cast<System::Int32>(static_cast<System::Byte>(38)));
				this->registerButton->FlatAppearance->BorderSize = 0;
				this->registerButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				this->registerButton->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 14.25F, System::Drawing::FontStyle::Bold));
				this->registerButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
					static_cast<System::Int32>(static_cast<System::Byte>(67)));
				this->registerButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"registerButton.Image")));
				this->registerButton->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
				this->registerButton->Location = System::Drawing::Point(374, 302);
				this->registerButton->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
				this->registerButton->Name = L"registerButton";
				this->registerButton->Padding = System::Windows::Forms::Padding(2, 0, 0, 0);
				this->registerButton->Size = System::Drawing::Size(184, 40);
				this->registerButton->TabIndex = 7;
				this->registerButton->Text = L"        Register";
				this->registerButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
				this->registerButton->UseVisualStyleBackColor = false;
				this->registerButton->Click += gcnew System::EventHandler(this, &LoginForm::registerButton_Click);
				// 
				// keeploggedCheck
				// 
				this->keeploggedCheck->AutoSize = true;
				this->keeploggedCheck->BackColor = System::Drawing::Color::Transparent;
				this->keeploggedCheck->Font = (gcnew System::Drawing::Font(L"Montserrat", 12));
				this->keeploggedCheck->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
					static_cast<System::Int32>(static_cast<System::Byte>(38)));
				this->keeploggedCheck->Location = System::Drawing::Point(272, 250);
				this->keeploggedCheck->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
				this->keeploggedCheck->Name = L"keeploggedCheck";
				this->keeploggedCheck->Size = System::Drawing::Size(190, 29);
				this->keeploggedCheck->TabIndex = 8;
				this->keeploggedCheck->Text = L"Keep me Logged In";
				this->keeploggedCheck->UseVisualStyleBackColor = false;
				// 
				// accountLabel
				// 
				this->accountLabel->AutoSize = true;
				this->accountLabel->BackColor = System::Drawing::Color::Transparent;
				this->accountLabel->Font = (gcnew System::Drawing::Font(L"Montserrat", 38.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->accountLabel->ForeColor = System::Drawing::Color::White;
				this->accountLabel->Location = System::Drawing::Point(236, 34);
				this->accountLabel->Name = L"accountLabel";
				this->accountLabel->Size = System::Drawing::Size(256, 80);
				this->accountLabel->TabIndex = 13;
				this->accountLabel->Text = L"Account";
				// 
				// LoginForm
				// 
				this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
					static_cast<System::Int32>(static_cast<System::Byte>(67)));
				this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
				this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->ClientSize = System::Drawing::Size(736, 449);
				this->Controls->Add(this->accountLabel);
				this->Controls->Add(this->keeploggedCheck);
				this->Controls->Add(this->registerButton);
				this->Controls->Add(this->loginButton);
				this->Controls->Add(this->passwordLabel);
				this->Controls->Add(this->passwordBox);
				this->Controls->Add(this->usernameLabel);
				this->Controls->Add(this->usernameBox);
				this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
				this->Name = L"LoginForm";
				this->Text = L"LoginForm";
				this->Load += gcnew System::EventHandler(this, &LoginForm::LoginForm_Load);
				this->ResumeLayout(false);
				this->PerformLayout();

			}
	#pragma endregion


private: void login() {
	string username = to_string(usernameBox->Text);
	string password = to_string(passwordBox->Text);

	if (username == "" || password == "") {
		MessageBox::Show("Username or password cannot be empty", "", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	ifstream readFile("accsList.txt");
	string line;
	bool correct = false;

	if (readFile.is_open())
	{
		while (getline(readFile, line))
		{
			if (line.find(':') != -1)
			{
				if (line.substr(0, line.find(':')) == username)
				{
					if (line.substr(line.find(':') + 1) == password)
					{
						correct = true;

						ofstream rememberFile("loggedIn.txt");
						if (rememberFile.is_open() && keeploggedCheck->Checked)
						{
							rememberFile << username;
						}
						else
						{
							rememberFile << "";
						}
						rememberFile.close();
					}
					break;
				}
			}
		}
		readFile.close();
	}

	if (correct)
	{
		Navigation::username = to_String(username);
		//MessageBox::Show("Logged in successfully");
		Navigation::LoadMenuForm();
	}
	else
	{
		MessageBox::Show("Incorrect username or password", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

private: System::Void LoginForm_Load(System::Object^ sender, System::EventArgs^ e) {
	
}

private: System::Void loginButton_Click(System::Object^ sender, System::EventArgs^ e) {
	login();

}
private: System::Void registerButton_Click(System::Object^ sender, System::EventArgs^ e) {
	string username = to_string(usernameBox->Text);
	string password = to_string(passwordBox->Text);

	if (username == "" || password == "") 
	{
		MessageBox::Show("Username or password cannot be empty", "", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	ifstream readFile("accsList.txt");
	string line;
	bool userExists = false;

	if (readFile.is_open()) 
	{
		while (getline(readFile, line)) 
		{
			if (line.find(':') != -1) 
			{
				if (line.substr(0, line.find(':')) == username) 
				{
					userExists = true;
					break;
				}
			}
		}
		readFile.close();
	}

	if (userExists) 
	{
		string msg = "Username '" + username + "' is already taken";
		MessageBox::Show(to_String(msg), "", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	else 
	{
		ofstream writeFile("accsList.txt", ios::app);

		writeFile << username << ":" << password << endl;
		writeFile.close();

		MessageBox::Show("Registered Successfully!\nYou can login now", "", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}

private: System::Void usernameBox_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == (char)Keys::Enter) {
		passwordBox->Focus();
		e->Handled = true;
	}
	else if (!Char::IsLetterOrDigit(e->KeyChar) && e->KeyChar != '\b' && e->KeyChar != ' ' && e->KeyChar != '_' && e->KeyChar != '.') {
		e->Handled = true;
	}
}

private: System::Void passwordBox_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == (char)Keys::Enter) {
		login();
		e->Handled = true;
	}
}

};