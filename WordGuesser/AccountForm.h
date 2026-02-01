#pragma once
#include <fstream>


using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Drawing::Drawing2D;
using namespace System::IO;


public ref class AccountForm : public System::Windows::Forms::Form
{
#pragma region Initalize Form
public:
	AccountForm(void)
	{
		InitializeComponent();
		//
		//TODO: Add the constructor code here
		//
		this->DoubleBuffered = true;
		this->SetStyle(ControlStyles::AllPaintingInWmPaint | ControlStyles::UserPaint | ControlStyles::OptimizedDoubleBuffer, true);
		this->UpdateStyles();
	}

protected:
	/// <summary>
	/// Clean up any resources being used.
	/// </summary>
	~AccountForm()
	{
		if (components)
		{
			delete components;
		}
	}
private: System::Windows::Forms::Label^ accountLabel;
protected:
private: System::Windows::Forms::Button^ nameButton;
private: System::Windows::Forms::TextBox^ usernameBox;
private: System::Windows::Forms::PictureBox^ pfpBox;

private: System::Windows::Forms::Label^ nameLabel;
private: System::Windows::Forms::TextBox^ passwordBox;
private: System::Windows::Forms::Button^ passButton;



private: System::Windows::Forms::Label^ scoreLabel;
private: System::Windows::Forms::Label^ scoreHeader;
private: System::Windows::Forms::Label^ rankingLabel;
private: System::Windows::Forms::Label^ rankingHeader;
private: System::Windows::Forms::Button^ backButton;
private: System::Windows::Forms::Button^ logoutButton;
private: System::Windows::Forms::PictureBox^ scoreIcon;
private: System::Windows::Forms::PictureBox^ rankIcon;
private: System::Windows::Forms::Button^ milestoneButton;





private: System::ComponentModel::IContainer^ components;



protected:

private:
	/// <summary>
	/// Required designer variable.
	/// </summary>

#pragma endregion
#pragma region Windows Form Designer generated code
	/// <summary>
	/// Required method for Designer support - do not modify
	/// the contents of this method with the code editor.
	/// </summary>
	void InitializeComponent(void)
	{
		System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AccountForm::typeid));
		this->accountLabel = (gcnew System::Windows::Forms::Label());
		this->nameButton = (gcnew System::Windows::Forms::Button());
		this->usernameBox = (gcnew System::Windows::Forms::TextBox());
		this->pfpBox = (gcnew System::Windows::Forms::PictureBox());
		this->nameLabel = (gcnew System::Windows::Forms::Label());
		this->passwordBox = (gcnew System::Windows::Forms::TextBox());
		this->passButton = (gcnew System::Windows::Forms::Button());
		this->scoreLabel = (gcnew System::Windows::Forms::Label());
		this->scoreHeader = (gcnew System::Windows::Forms::Label());
		this->rankingLabel = (gcnew System::Windows::Forms::Label());
		this->rankingHeader = (gcnew System::Windows::Forms::Label());
		this->backButton = (gcnew System::Windows::Forms::Button());
		this->logoutButton = (gcnew System::Windows::Forms::Button());
		this->scoreIcon = (gcnew System::Windows::Forms::PictureBox());
		this->rankIcon = (gcnew System::Windows::Forms::PictureBox());
		this->milestoneButton = (gcnew System::Windows::Forms::Button());
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pfpBox))->BeginInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->scoreIcon))->BeginInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->rankIcon))->BeginInit();
		this->SuspendLayout();
		// 
		// accountLabel
		// 
		this->accountLabel->AutoSize = true;
		this->accountLabel->BackColor = System::Drawing::Color::Transparent;
		this->accountLabel->Font = (gcnew System::Drawing::Font(L"Montserrat", 38.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->accountLabel->ForeColor = System::Drawing::Color::White;
		this->accountLabel->Location = System::Drawing::Point(261, 21);
		this->accountLabel->Name = L"accountLabel";
		this->accountLabel->Size = System::Drawing::Size(256, 80);
		this->accountLabel->TabIndex = 12;
		this->accountLabel->Text = L"Account";
		this->accountLabel->Click += gcnew System::EventHandler(this, &AccountForm::leaderboardLabel_Click);
		// 
		// nameButton
		// 
		this->nameButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
			static_cast<System::Int32>(static_cast<System::Byte>(38)));
		this->nameButton->FlatAppearance->BorderSize = 0;
		this->nameButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->nameButton->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->nameButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
			static_cast<System::Int32>(static_cast<System::Byte>(67)));
		this->nameButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"nameButton.Image")));
		this->nameButton->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->nameButton->Location = System::Drawing::Point(365, 285);
		this->nameButton->Margin = System::Windows::Forms::Padding(2);
		this->nameButton->Name = L"nameButton";
		this->nameButton->Size = System::Drawing::Size(263, 35);
		this->nameButton->TabIndex = 13;
		this->nameButton->Text = L"Change Name";
		this->nameButton->UseVisualStyleBackColor = false;
		this->nameButton->Click += gcnew System::EventHandler(this, &AccountForm::nameButton_Click);
		// 
		// usernameBox
		// 
		this->usernameBox->Font = (gcnew System::Drawing::Font(L"Maiandra GD", 18));
		this->usernameBox->Location = System::Drawing::Point(147, 285);
		this->usernameBox->Margin = System::Windows::Forms::Padding(2);
		this->usernameBox->MaxLength = 16;
		this->usernameBox->Name = L"usernameBox";
		this->usernameBox->Size = System::Drawing::Size(197, 36);
		this->usernameBox->TabIndex = 14;
		// 
		// pfpBox
		// 
		this->pfpBox->BackColor = System::Drawing::Color::Transparent;
		this->pfpBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pfpBox.Image")));
		this->pfpBox->Location = System::Drawing::Point(29, 32);
		this->pfpBox->Margin = System::Windows::Forms::Padding(2);
		this->pfpBox->Name = L"pfpBox";
		this->pfpBox->Size = System::Drawing::Size(160, 160);
		this->pfpBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
		this->pfpBox->TabIndex = 15;
		this->pfpBox->TabStop = false;
		this->pfpBox->Click += gcnew System::EventHandler(this, &AccountForm::pfpBox_Click);
		// 
		// nameLabel
		// 
		this->nameLabel->BackColor = System::Drawing::Color::Transparent;
		this->nameLabel->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->nameLabel->ForeColor = System::Drawing::Color::White;
		this->nameLabel->Location = System::Drawing::Point(29, 194);
		this->nameLabel->Name = L"nameLabel";
		this->nameLabel->Size = System::Drawing::Size(160, 81);
		this->nameLabel->TabIndex = 16;
		this->nameLabel->Text = L"Name";
		this->nameLabel->TextAlign = System::Drawing::ContentAlignment::TopCenter;
		// 
		// passwordBox
		// 
		this->passwordBox->Font = (gcnew System::Drawing::Font(L"Maiandra GD", 18));
		this->passwordBox->Location = System::Drawing::Point(147, 332);
		this->passwordBox->Margin = System::Windows::Forms::Padding(2);
		this->passwordBox->MaxLength = 16;
		this->passwordBox->Name = L"passwordBox";
		this->passwordBox->Size = System::Drawing::Size(197, 36);
		this->passwordBox->TabIndex = 18;
		this->passwordBox->UseSystemPasswordChar = true;
		// 
		// passButton
		// 
		this->passButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
			static_cast<System::Int32>(static_cast<System::Byte>(38)));
		this->passButton->FlatAppearance->BorderSize = 0;
		this->passButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->passButton->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->passButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
			static_cast<System::Int32>(static_cast<System::Byte>(67)));
		this->passButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"passButton.Image")));
		this->passButton->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->passButton->Location = System::Drawing::Point(365, 332);
		this->passButton->Margin = System::Windows::Forms::Padding(2);
		this->passButton->Name = L"passButton";
		this->passButton->Size = System::Drawing::Size(263, 35);
		this->passButton->TabIndex = 19;
		this->passButton->Text = L"          Change Password";
		this->passButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->passButton->UseVisualStyleBackColor = false;
		this->passButton->Click += gcnew System::EventHandler(this, &AccountForm::passButton_Click);
		// 
		// scoreLabel
		// 
		this->scoreLabel->AutoSize = true;
		this->scoreLabel->BackColor = System::Drawing::Color::Transparent;
		this->scoreLabel->Font = (gcnew System::Drawing::Font(L"Montserrat Light", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->scoreLabel->ForeColor = System::Drawing::Color::White;
		this->scoreLabel->Location = System::Drawing::Point(480, 128);
		this->scoreLabel->Name = L"scoreLabel";
		this->scoreLabel->Size = System::Drawing::Size(36, 42);
		this->scoreLabel->TabIndex = 25;
		this->scoreLabel->Text = L"0";
		// 
		// scoreHeader
		// 
		this->scoreHeader->AutoSize = true;
		this->scoreHeader->BackColor = System::Drawing::Color::Transparent;
		this->scoreHeader->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->scoreHeader->ForeColor = System::Drawing::Color::White;
		this->scoreHeader->Location = System::Drawing::Point(298, 126);
		this->scoreHeader->Name = L"scoreHeader";
		this->scoreHeader->Size = System::Drawing::Size(176, 42);
		this->scoreHeader->TabIndex = 24;
		this->scoreHeader->Text = L"Total Score:";
		// 
		// rankingLabel
		// 
		this->rankingLabel->AutoSize = true;
		this->rankingLabel->BackColor = System::Drawing::Color::Transparent;
		this->rankingLabel->Font = (gcnew System::Drawing::Font(L"Montserrat Light", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->rankingLabel->ForeColor = System::Drawing::Color::White;
		this->rankingLabel->Location = System::Drawing::Point(480, 175);
		this->rankingLabel->Name = L"rankingLabel";
		this->rankingLabel->Size = System::Drawing::Size(47, 42);
		this->rankingLabel->TabIndex = 27;
		this->rankingLabel->Text = L"#1";
		// 
		// rankingHeader
		// 
		this->rankingHeader->AutoSize = true;
		this->rankingHeader->BackColor = System::Drawing::Color::Transparent;
		this->rankingHeader->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->rankingHeader->ForeColor = System::Drawing::Color::White;
		this->rankingHeader->Location = System::Drawing::Point(298, 175);
		this->rankingHeader->Name = L"rankingHeader";
		this->rankingHeader->Size = System::Drawing::Size(141, 42);
		this->rankingHeader->TabIndex = 26;
		this->rankingHeader->Text = L"Ranking:";
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
		this->backButton->Location = System::Drawing::Point(142, 406);
		this->backButton->Margin = System::Windows::Forms::Padding(2);
		this->backButton->Name = L"backButton";
		this->backButton->Size = System::Drawing::Size(150, 35);
		this->backButton->TabIndex = 28;
		this->backButton->Text = L"   Back";
		this->backButton->UseVisualStyleBackColor = false;
		this->backButton->Click += gcnew System::EventHandler(this, &AccountForm::backButton_Click);
		// 
		// logoutButton
		// 
		this->logoutButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
			static_cast<System::Int32>(static_cast<System::Byte>(38)));
		this->logoutButton->FlatAppearance->BorderSize = 0;
		this->logoutButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->logoutButton->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->logoutButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
			static_cast<System::Int32>(static_cast<System::Byte>(67)));
		this->logoutButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"logoutButton.Image")));
		this->logoutButton->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->logoutButton->Location = System::Drawing::Point(487, 406);
		this->logoutButton->Margin = System::Windows::Forms::Padding(2);
		this->logoutButton->Name = L"logoutButton";
		this->logoutButton->Size = System::Drawing::Size(150, 35);
		this->logoutButton->TabIndex = 29;
		this->logoutButton->Text = L"    Logout";
		this->logoutButton->UseVisualStyleBackColor = false;
		this->logoutButton->Click += gcnew System::EventHandler(this, &AccountForm::logoutButton_Click);
		// 
		// scoreIcon
		// 
		this->scoreIcon->BackColor = System::Drawing::Color::Transparent;
		this->scoreIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"scoreIcon.Image")));
		this->scoreIcon->Location = System::Drawing::Point(253, 126);
		this->scoreIcon->Margin = System::Windows::Forms::Padding(2);
		this->scoreIcon->Name = L"scoreIcon";
		this->scoreIcon->Size = System::Drawing::Size(40, 40);
		this->scoreIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
		this->scoreIcon->TabIndex = 30;
		this->scoreIcon->TabStop = false;
		// 
		// rankIcon
		// 
		this->rankIcon->BackColor = System::Drawing::Color::Transparent;
		this->rankIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"rankIcon.Image")));
		this->rankIcon->Location = System::Drawing::Point(253, 170);
		this->rankIcon->Margin = System::Windows::Forms::Padding(2);
		this->rankIcon->Name = L"rankIcon";
		this->rankIcon->Size = System::Drawing::Size(40, 40);
		this->rankIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
		this->rankIcon->TabIndex = 31;
		this->rankIcon->TabStop = false;
		// 
		// milestoneButton
		// 
		this->milestoneButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
			static_cast<System::Int32>(static_cast<System::Byte>(38)));
		this->milestoneButton->FlatAppearance->BorderSize = 0;
		this->milestoneButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->milestoneButton->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->milestoneButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
			static_cast<System::Int32>(static_cast<System::Byte>(67)));
		this->milestoneButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"milestoneButton.Image")));
		this->milestoneButton->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->milestoneButton->Location = System::Drawing::Point(305, 406);
		this->milestoneButton->Margin = System::Windows::Forms::Padding(2, 2, 0, 2);
		this->milestoneButton->Name = L"milestoneButton";
		this->milestoneButton->Size = System::Drawing::Size(169, 35);
		this->milestoneButton->TabIndex = 32;
		this->milestoneButton->Text = L"       Milestones";
		this->milestoneButton->UseVisualStyleBackColor = false;
		this->milestoneButton->Click += gcnew System::EventHandler(this, &AccountForm::milestoneButton_Click);
		// 
		// AccountForm
		// 
		this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
			static_cast<System::Int32>(static_cast<System::Byte>(67)));
		this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
		this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
		this->ClientSize = System::Drawing::Size(736, 466);
		this->Controls->Add(this->milestoneButton);
		this->Controls->Add(this->rankIcon);
		this->Controls->Add(this->scoreIcon);
		this->Controls->Add(this->logoutButton);
		this->Controls->Add(this->backButton);
		this->Controls->Add(this->rankingLabel);
		this->Controls->Add(this->rankingHeader);
		this->Controls->Add(this->scoreLabel);
		this->Controls->Add(this->scoreHeader);
		this->Controls->Add(this->passButton);
		this->Controls->Add(this->passwordBox);
		this->Controls->Add(this->nameLabel);
		this->Controls->Add(this->pfpBox);
		this->Controls->Add(this->usernameBox);
		this->Controls->Add(this->nameButton);
		this->Controls->Add(this->accountLabel);
		this->Margin = System::Windows::Forms::Padding(2);
		this->Name = L"AccountForm";
		this->Text = L"AccountForm";
		this->Load += gcnew System::EventHandler(this, &AccountForm::AccountForm_Load);
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pfpBox))->EndInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->scoreIcon))->EndInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->rankIcon))->EndInit();
		this->ResumeLayout(false);
		this->PerformLayout();

	}
#pragma endregion

String^ pfpFolder = Application::StartupPath + "\\accsPfps\\";
string getRanking()
{
	string username = to_string(Navigation::username);
	string line;
	ifstream file("leaderboard.txt");
	int p = 1;
	int pos;
	string name, score;
	while (getline(file, line))
	{
		pos = line.find(":");
		name = line.substr(0, pos);
		if (name == username)
		{
			line = "#"+to_string(p);
			file.close();
			return line;
		}
		p++;
	}
	file.close();
	line = "#" + to_string(p);
	return line;
}
string getTotalScore()
{
	string username = to_string(Navigation::username);
	string line;
	ifstream leaderboardFile("leaderboard.txt");
	if (leaderboardFile.is_open())
	{
		while (getline(leaderboardFile, line))
		{
			if (username == line.substr(0, line.find(":")))
			{
				string fileScore = line.substr(line.find(":") + 1);
				leaderboardFile.close();
				return fileScore;
			}
		}
	}
	leaderboardFile.close();
	return "0";
}
void scoreorder()
{
	string line;
	int i = 0;
	ifstream file("leaderboard.txt");
	if (file.is_open())
	{
		while (getline(file, line))
		{
			if (line.size() > 0)
			{
				i++;
			}
		}
	}
	file.close();
	int num = i;
	int* score = new int[i];
	string* name = new string[i];
	int pos, j = 0;
	string linee, lead;
	ifstream filee("leaderboard.txt");
	while (getline(filee, linee))
	{
		pos = linee.find(":");
		name[j] = linee.substr(0, pos);
		lead = linee.substr(pos + 1);
		score[j] = stoi(lead);
		j++;
	}
	file.close();
	for (int i = 0; i < num; i++)
	{
		for (int j = i + 1; j < num; j++)
		{
			if (score[j] > score[i])
			{
				swap(score[i], score[j]);
				swap(name[i], name[j]);
			}
		}
	}
	ofstream ofile("leaderboard.txt");
	if (ofile.is_open())
	{
		for (int k = 0; k < num; k++)
		{
			ofile << name[k] << ":" << score[k] << endl;
		}
	}
}
private: System::Void AccountForm_Load(System::Object^ sender, System::EventArgs^ e) {
	nameLabel->Text=Navigation::username;
	
	scoreorder();

	scoreLabel->Text=to_String(getTotalScore());
	rankingLabel->Text=to_String(getRanking());

	string username = to_string(Navigation::username);
	auto pfps = Directory::GetFiles(pfpFolder, "*.png");
	for (int i = 0; i < pfps->Length; i++)
	{
		string pfpName = to_string(Path::GetFileNameWithoutExtension(pfps[i]));
		if (pfpName == username)
		{
			pfpBox->Image = Image::FromFile(pfps[i]);
		}
	}

}
private: System::Void leaderboardLabel_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void backButton_Click(System::Object^ sender, System::EventArgs^ e) {
delete pfpBox->Image;
Navigation::LoadMenuForm();
}
private: System::Void nameButton_Click(System::Object^ sender, System::EventArgs^ e) {
	string username = to_string(Navigation::username);
	string newUsername = to_string(usernameBox->Text);

	if (newUsername == "")
	{
		MessageBox::Show("Username cannot be empty", "", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}
	bool userExists = false;
	ifstream readFile("accsList.txt");
	string line;
	if (readFile.is_open())
	{
		while (getline(readFile, line))
		{
			if (line.find(':') != -1)
			{
				if (line.substr(0, line.find(':')) == newUsername)
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
		string msg = "Username '" + newUsername + "' is already taken";
		MessageBox::Show(to_String(msg), "", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}
	String^ pfpPath = pfpFolder + Navigation::username + ".png";
	String^ pfpNewPath = pfpFolder + usernameBox->Text + ".png";

	if (File::Exists(pfpPath))
	{
		delete pfpBox->Image;
		File::Move(pfpPath, pfpNewPath);
		pfpBox->Image = Image::FromFile(pfpNewPath);
	}

	ifstream leaderboardFile("leaderboard.txt");
	string output;
	int count = 1;

	if (leaderboardFile.is_open())
	{
		while (getline(leaderboardFile, line))
		{
			if (username == line.substr(0, line.find(":")))
			{
				string fileScore = line.substr(line.find(":") + 1);
				output += newUsername + ":" + fileScore + "\n";
			}
			else
			{
				output += line + "\n";
			}
			count++;
		}
	}
	leaderboardFile.close();
	ofstream oleaderboardFile("leaderboard.txt");
	oleaderboardFile << output;
	oleaderboardFile.close();

	count = 1;
	output = "";
	ifstream loginFile("accsList.txt");
	if (loginFile.is_open())
	{
		while (getline(loginFile, line))
		{
			if (username == line.substr(0, line.find(":")))
			{
				string pass = line.substr(line.find(":") + 1);
				output += newUsername + ":" + pass + "\n";
			}
			else
			{
				output += line + "\n";
			}
			count++;
		}
	}
	loginFile.close();
	ofstream ologinFile("accsList.txt");
	ologinFile << output;
	ologinFile.close();

	bool remember = false;
	ifstream rememberFile("loggedIn.txt");
	if (rememberFile.is_open())
	{
		string remName;
		getline(rememberFile, remName);

		if (remName == username)
		{
			remember = true;
		}
	}
	rememberFile.close();

	ofstream orememberFile("loggedIn.txt");
	if (orememberFile.is_open() && remember)
	{
		orememberFile << newUsername;
	}
	rememberFile.close();
	Navigation::username = to_String(newUsername);
	nameLabel->Text = to_String(newUsername);

}
private: System::Void passButton_Click(System::Object^ sender, System::EventArgs^ e) {
	string output;
	string username = to_string(Navigation::username);
	string newPassword = to_string(passwordBox->Text);
	if (newPassword== "")
	{
		MessageBox::Show("Password cannot be empty", "", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}
	int count = 1;
	string line;
	ifstream loginFile("accsList.txt");
	if (loginFile.is_open())
	{
		while (getline(loginFile, line))
		{
			if (username == line.substr(0, line.find(":")))
			{
				string pass = line.substr(line.find(":") + 1);
				output += username + ":" + newPassword + "\n";
			}
			else
			{
				output += line + "\n";
			}
			count++;
		}
	}
	loginFile.close();
	ofstream ologinFile("accsList.txt");
	ologinFile << output;
	ologinFile.close();
}
private: System::Void logoutButton_Click(System::Object^ sender, System::EventArgs^ e) {
	Navigation::username = "";

	ofstream rememberFile("loggedIn.txt");
	if (rememberFile.is_open())
	{
		rememberFile << "";
	}

	Navigation::LoadLoginForm();
}
private: System::Void pfpBox_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ fileDialog = gcnew OpenFileDialog();

	fileDialog->Filter = "Image Files|*.bmp;*.jpg;*.png|All Files|*.*";
	fileDialog->Title = "Select an Profile Picture";

	if (fileDialog->ShowDialog() == Windows::Forms::DialogResult::OK)
	{
		Directory::CreateDirectory(pfpFolder);
		String^ dest = pfpFolder + Navigation::username + ".png";

		//crop img in circle
		Bitmap^ src = gcnew Bitmap(fileDialog->FileName);
		int size = Math::Min(src->Width, src->Height);
		Bitmap^ dst = gcnew Bitmap(size, size);
		Graphics^ g = Graphics::FromImage(dst);
		g->SmoothingMode = SmoothingMode::AntiAlias;
		GraphicsPath^ path = gcnew GraphicsPath();
		path->AddEllipse(0, 0, size, size);
		g->SetClip(path);
		g->DrawImage(src, Rectangle(0, 0, size, size), Rectangle((src->Width - size) / 2, (src->Height - size) / 2, size, size), GraphicsUnit::Pixel);

		delete pfpBox->Image;
		dst->Save(dest, System::Drawing::Imaging::ImageFormat::Png);

		pfpBox->Image = dst;
	}
}
private: System::Void milestoneButton_Click(System::Object^ sender, System::EventArgs^ e) {
	Navigation::totalScore = stoi(getTotalScore());
	delete pfpBox->Image;
	Navigation::LoadMilestonesForm();
}
};
