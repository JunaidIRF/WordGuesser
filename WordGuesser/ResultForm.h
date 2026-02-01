#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace std;


public ref class ResultForm : public System::Windows::Forms::Form
{
	#pragma region Initalize Form
public:
	ResultForm(void)
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
	~ResultForm()
	{
		if (components)
		{
			delete components;
		}
	}

private: System::Windows::Forms::Label^ winloseLabel;
private: System::Windows::Forms::Label^ scoreLabel;
private: System::Windows::Forms::Label^ diffLabel;
private: System::Windows::Forms::Label^ scoreHeader;
private: System::Windows::Forms::Label^ diffHeader;





private: System::Windows::Forms::Label^ comboLabel;
private: System::Windows::Forms::Label^ comboHeader;
private: System::Windows::Forms::Label^ challengeLabel;
private: System::Windows::Forms::Label^ challengeHeader;
private: System::Windows::Forms::Label^ title;
private: System::Windows::Forms::Button^ backButton;







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
		System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ResultForm::typeid));
		this->winloseLabel = (gcnew System::Windows::Forms::Label());
		this->scoreLabel = (gcnew System::Windows::Forms::Label());
		this->diffLabel = (gcnew System::Windows::Forms::Label());
		this->scoreHeader = (gcnew System::Windows::Forms::Label());
		this->diffHeader = (gcnew System::Windows::Forms::Label());
		this->comboLabel = (gcnew System::Windows::Forms::Label());
		this->comboHeader = (gcnew System::Windows::Forms::Label());
		this->challengeLabel = (gcnew System::Windows::Forms::Label());
		this->challengeHeader = (gcnew System::Windows::Forms::Label());
		this->title = (gcnew System::Windows::Forms::Label());
		this->backButton = (gcnew System::Windows::Forms::Button());
		this->SuspendLayout();
		// 
		// winloseLabel
		// 
		this->winloseLabel->BackColor = System::Drawing::Color::Transparent;
		this->winloseLabel->Font = (gcnew System::Drawing::Font(L"Montserrat", 27.5F, System::Drawing::FontStyle::Bold));
		this->winloseLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
			static_cast<System::Int32>(static_cast<System::Byte>(38)));
		this->winloseLabel->Location = System::Drawing::Point(12, 135);
		this->winloseLabel->Name = L"winloseLabel";
		this->winloseLabel->Size = System::Drawing::Size(712, 58);
		this->winloseLabel->TabIndex = 4;
		this->winloseLabel->Text = L"You Win!";
		this->winloseLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
		// 
		// scoreLabel
		// 
		this->scoreLabel->AutoSize = true;
		this->scoreLabel->BackColor = System::Drawing::Color::Transparent;
		this->scoreLabel->Font = (gcnew System::Drawing::Font(L"Montserrat", 14));
		this->scoreLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
			static_cast<System::Int32>(static_cast<System::Byte>(38)));
		this->scoreLabel->Location = System::Drawing::Point(394, 234);
		this->scoreLabel->Name = L"scoreLabel";
		this->scoreLabel->Size = System::Drawing::Size(26, 30);
		this->scoreLabel->TabIndex = 23;
		this->scoreLabel->Text = L"0";
		// 
		// diffLabel
		// 
		this->diffLabel->AutoSize = true;
		this->diffLabel->BackColor = System::Drawing::Color::Transparent;
		this->diffLabel->Font = (gcnew System::Drawing::Font(L"Montserrat", 14));
		this->diffLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
			static_cast<System::Int32>(static_cast<System::Byte>(38)));
		this->diffLabel->Location = System::Drawing::Point(394, 204);
		this->diffLabel->Name = L"diffLabel";
		this->diffLabel->Size = System::Drawing::Size(56, 30);
		this->diffLabel->TabIndex = 22;
		this->diffLabel->Text = L"Easy";
		// 
		// scoreHeader
		// 
		this->scoreHeader->AutoSize = true;
		this->scoreHeader->BackColor = System::Drawing::Color::Transparent;
		this->scoreHeader->Font = (gcnew System::Drawing::Font(L"Montserrat", 14, System::Drawing::FontStyle::Bold));
		this->scoreHeader->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
			static_cast<System::Int32>(static_cast<System::Byte>(38)));
		this->scoreHeader->Location = System::Drawing::Point(274, 234);
		this->scoreHeader->Name = L"scoreHeader";
		this->scoreHeader->Size = System::Drawing::Size(73, 30);
		this->scoreHeader->TabIndex = 21;
		this->scoreHeader->Text = L"Score:";
		// 
		// diffHeader
		// 
		this->diffHeader->AutoSize = true;
		this->diffHeader->BackColor = System::Drawing::Color::Transparent;
		this->diffHeader->Font = (gcnew System::Drawing::Font(L"Montserrat", 14, System::Drawing::FontStyle::Bold));
		this->diffHeader->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
			static_cast<System::Int32>(static_cast<System::Byte>(38)));
		this->diffHeader->Location = System::Drawing::Point(274, 204);
		this->diffHeader->Name = L"diffHeader";
		this->diffHeader->Size = System::Drawing::Size(108, 30);
		this->diffHeader->TabIndex = 20;
		this->diffHeader->Text = L"Difficulty:";
		// 
		// comboLabel
		// 
		this->comboLabel->AutoSize = true;
		this->comboLabel->BackColor = System::Drawing::Color::Transparent;
		this->comboLabel->Font = (gcnew System::Drawing::Font(L"Montserrat", 14));
		this->comboLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
			static_cast<System::Int32>(static_cast<System::Byte>(38)));
		this->comboLabel->Location = System::Drawing::Point(394, 264);
		this->comboLabel->Name = L"comboLabel";
		this->comboLabel->Size = System::Drawing::Size(30, 30);
		this->comboLabel->TabIndex = 30;
		this->comboLabel->Text = L"1x";
		// 
		// comboHeader
		// 
		this->comboHeader->AutoSize = true;
		this->comboHeader->BackColor = System::Drawing::Color::Transparent;
		this->comboHeader->Font = (gcnew System::Drawing::Font(L"Montserrat", 14, System::Drawing::FontStyle::Bold));
		this->comboHeader->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
			static_cast<System::Int32>(static_cast<System::Byte>(38)));
		this->comboHeader->Location = System::Drawing::Point(274, 264);
		this->comboHeader->Name = L"comboHeader";
		this->comboHeader->Size = System::Drawing::Size(89, 30);
		this->comboHeader->TabIndex = 29;
		this->comboHeader->Text = L"Combo:";
		// 
		// challengeLabel
		// 
		this->challengeLabel->AutoSize = true;
		this->challengeLabel->BackColor = System::Drawing::Color::Transparent;
		this->challengeLabel->Font = (gcnew System::Drawing::Font(L"Montserrat", 14));
		this->challengeLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
			static_cast<System::Int32>(static_cast<System::Byte>(38)));
		this->challengeLabel->Location = System::Drawing::Point(394, 294);
		this->challengeLabel->Name = L"challengeLabel";
		this->challengeLabel->Size = System::Drawing::Size(107, 30);
		this->challengeLabel->TabIndex = 28;
		this->challengeLabel->Text = L"Speedrun";
		this->challengeLabel->Visible = false;
		// 
		// challengeHeader
		// 
		this->challengeHeader->AutoSize = true;
		this->challengeHeader->BackColor = System::Drawing::Color::Transparent;
		this->challengeHeader->Font = (gcnew System::Drawing::Font(L"Montserrat", 14, System::Drawing::FontStyle::Bold));
		this->challengeHeader->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
			static_cast<System::Int32>(static_cast<System::Byte>(38)));
		this->challengeHeader->Location = System::Drawing::Point(274, 294);
		this->challengeHeader->Name = L"challengeHeader";
		this->challengeHeader->Size = System::Drawing::Size(119, 30);
		this->challengeHeader->TabIndex = 27;
		this->challengeHeader->Text = L"Challenge:";
		this->challengeHeader->Visible = false;
		// 
		// title
		// 
		this->title->AutoSize = true;
		this->title->BackColor = System::Drawing::Color::Transparent;
		this->title->Font = (gcnew System::Drawing::Font(L"Montserrat", 38.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->title->ForeColor = System::Drawing::Color::White;
		this->title->Location = System::Drawing::Point(200, 46);
		this->title->Name = L"title";
		this->title->Size = System::Drawing::Size(329, 80);
		this->title->TabIndex = 31;
		this->title->Text = L"Game Over";
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
		this->backButton->Location = System::Drawing::Point(300, 365);
		this->backButton->Margin = System::Windows::Forms::Padding(2);
		this->backButton->Name = L"backButton";
		this->backButton->Size = System::Drawing::Size(150, 35);
		this->backButton->TabIndex = 37;
		this->backButton->Text = L"   Back";
		this->backButton->UseVisualStyleBackColor = false;
		this->backButton->Click += gcnew System::EventHandler(this, &ResultForm::backButton_Click);
		// 
		// ResultForm
		// 
		this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
			static_cast<System::Int32>(static_cast<System::Byte>(67)));
		this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
		this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
		this->ClientSize = System::Drawing::Size(736, 449);
		this->Controls->Add(this->backButton);
		this->Controls->Add(this->title);
		this->Controls->Add(this->comboLabel);
		this->Controls->Add(this->comboHeader);
		this->Controls->Add(this->challengeLabel);
		this->Controls->Add(this->challengeHeader);
		this->Controls->Add(this->scoreLabel);
		this->Controls->Add(this->diffLabel);
		this->Controls->Add(this->scoreHeader);
		this->Controls->Add(this->diffHeader);
		this->Controls->Add(this->winloseLabel);
		this->Margin = System::Windows::Forms::Padding(2);
		this->Name = L"ResultForm";
		this->Text = L"ResultForm";
		this->Load += gcnew System::EventHandler(this, &ResultForm::ResultForm_Load);
		this->ResumeLayout(false);
		this->PerformLayout();

	}
#pragma endregion

private: System::Void ResultForm_Load(System::Object^ sender, System::EventArgs^ e){
	title->Focus();
	Navigation::soundPlayer->SoundLocation = Application::StartupPath + "\\sounds\\result.wav";
	Navigation::soundPlayer->Play();
	ifstream leaderboardFile("leaderboard.txt");
	string output;
	string username = to_string(Navigation::username);
	int count = 1;
	string line;
	bool foundName = false;

	if (leaderboardFile.is_open() && Navigation::Score>0)
	{
		while (getline(leaderboardFile, line))
		{
			//MessageBox::Show("output:\n"+to_String(output));
			if (username == line.substr(0, line.find(":")))
			{
				int fileScore = stoi(line.substr(line.find(":")+1));
				int newScore = fileScore + Navigation::Score;
				output += username  + ":" + to_string(newScore) + "\n";
				foundName = true;
			}
			else
			{
				output += line + "\n";
			}
			count++;
		}
		if (!foundName)
		{
			output += username + ":" + to_string(Navigation::Score);
		}
	}
	leaderboardFile.close();
	if (Navigation::Score > 0)
	{
		ofstream oleaderboardFile("leaderboard.txt");
		oleaderboardFile << output;
		oleaderboardFile.close();
	}
	
	if (Navigation::challenge != 0)
	{
		if (Navigation::challengeDone && !Navigation::gaveUp)
		{
			winloseLabel->Text = "You Win!";
		}
		else
		{
			winloseLabel->Text="You Lose!";
		}
	}
	else if (Navigation::Score >0 && !Navigation::gaveUp)
	{
		winloseLabel->Text="You Win!";
	}
	else
	{
		winloseLabel->Text="You Lose!";
	}
	if (Navigation::difficulty == 1)
	{
		diffLabel->Text="Easy";
	}
	else if (Navigation::difficulty == 2)
	{
		diffLabel->Text="Medium";
	}
	else if(Navigation::difficulty == 3)
	{
		diffLabel->Text = "Hard";
	}
	scoreLabel->Text=Navigation::Score+"";
	comboLabel->Text=Navigation::maxCombo+"x";
	if (Navigation::challenge != 0)
	{
		challengeHeader->Visible = true;
		challengeLabel->Visible = true;
		if (Navigation::challenge == 1) //speedrun
		{
			challengeLabel->Text = "Speedrun";
		}
		else if (Navigation::challenge == 2) //comeback
		{
			challengeLabel->Text = "Comeback";
		}
		else if (Navigation::challenge == 3) //perfectionist
		{
			challengeLabel->Text = "Perfectionist";
		}
		else if (Navigation::challenge == 4) //clutch master
		{
			challengeLabel->Text = "Clutch Master";
		}
	}
}

private: System::Void backButton_Click(System::Object^ sender, System::EventArgs^ e) {
	Navigation::LoadMenuForm();
}
};