#pragma once
#include<fstream>
#include <cstdlib> // for rand(), srand(), system()
#include <ctime>// time() seed for random

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace std;

int second=30;
string word;
string wordlist;
int Score = 0;
int Round = 0;
int Combo = 1;
int maxCombo = 1;

int typeEffect = 1;

int wrongCombo = 0;
int wrongComboMax = 0;

public ref class GameForm : public System::Windows::Forms::Form
{
	#pragma region Initialize Form
	public:
		GameForm(void)
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
		~GameForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ wordLabel;
	protected:

	private: System::Windows::Forms::TextBox^ guessBox;
	private: System::Windows::Forms::Label^ guessLabel;
private: System::Windows::Forms::Label^ diffHeader;
private: System::Windows::Forms::Label^ roundHeader;
private: System::Windows::Forms::Label^ scoreHeader;
private: System::Windows::Forms::Label^ difficultyLabel;
private: System::Windows::Forms::Label^ roundLabel;
private: System::Windows::Forms::Label^ scoreLabel;
private: System::Windows::Forms::Button^ giveupButton;









private: System::Windows::Forms::Label^ timeHeader;
private: System::Windows::Forms::Label^ timeLabel;
private: System::Windows::Forms::Timer^ timer;
private: System::Windows::Forms::Label^ challengeLabel;
private: System::Windows::Forms::Label^ challengeHeader;
private: System::Windows::Forms::Label^ comboLabel;
private: System::Windows::Forms::Label^ comboHeader;




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
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(GameForm::typeid));
			this->wordLabel = (gcnew System::Windows::Forms::Label());
			this->guessBox = (gcnew System::Windows::Forms::TextBox());
			this->guessLabel = (gcnew System::Windows::Forms::Label());
			this->diffHeader = (gcnew System::Windows::Forms::Label());
			this->roundHeader = (gcnew System::Windows::Forms::Label());
			this->scoreHeader = (gcnew System::Windows::Forms::Label());
			this->difficultyLabel = (gcnew System::Windows::Forms::Label());
			this->roundLabel = (gcnew System::Windows::Forms::Label());
			this->scoreLabel = (gcnew System::Windows::Forms::Label());
			this->giveupButton = (gcnew System::Windows::Forms::Button());
			this->timeHeader = (gcnew System::Windows::Forms::Label());
			this->timeLabel = (gcnew System::Windows::Forms::Label());
			this->timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->challengeLabel = (gcnew System::Windows::Forms::Label());
			this->challengeHeader = (gcnew System::Windows::Forms::Label());
			this->comboLabel = (gcnew System::Windows::Forms::Label());
			this->comboHeader = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// wordLabel
			// 
			this->wordLabel->BackColor = System::Drawing::Color::Transparent;
			this->wordLabel->Font = (gcnew System::Drawing::Font(L"Montserrat", 36, System::Drawing::FontStyle::Bold));
			this->wordLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->wordLabel->Location = System::Drawing::Point(10, 163);
			this->wordLabel->Name = L"wordLabel";
			this->wordLabel->Size = System::Drawing::Size(717, 70);
			this->wordLabel->TabIndex = 11;
			this->wordLabel->Text = L"W _ _ D";
			this->wordLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// guessBox
			// 
			this->guessBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(247)),
				static_cast<System::Int32>(static_cast<System::Byte>(193)));
			this->guessBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->guessBox->Font = (gcnew System::Drawing::Font(L"Montserrat", 15));
			this->guessBox->Location = System::Drawing::Point(208, 313);
			this->guessBox->Margin = System::Windows::Forms::Padding(2);
			this->guessBox->Name = L"guessBox";
			this->guessBox->Size = System::Drawing::Size(321, 25);
			this->guessBox->TabIndex = 12;
			this->guessBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->guessBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &GameForm::guessBox_KeyPress);
			// 
			// guessLabel
			// 
			this->guessLabel->BackColor = System::Drawing::Color::Transparent;
			this->guessLabel->Font = (gcnew System::Drawing::Font(L"Montserrat", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->guessLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->guessLabel->Location = System::Drawing::Point(273, 276);
			this->guessLabel->Name = L"guessLabel";
			this->guessLabel->Size = System::Drawing::Size(197, 35);
			this->guessLabel->TabIndex = 13;
			this->guessLabel->Text = L"Guess Word:";
			this->guessLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// diffHeader
			// 
			this->diffHeader->AutoSize = true;
			this->diffHeader->BackColor = System::Drawing::Color::Transparent;
			this->diffHeader->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Bold));
			this->diffHeader->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->diffHeader->Location = System::Drawing::Point(10, 7);
			this->diffHeader->Name = L"diffHeader";
			this->diffHeader->Size = System::Drawing::Size(93, 25);
			this->diffHeader->TabIndex = 14;
			this->diffHeader->Text = L"Difficulty:";
			// 
			// roundHeader
			// 
			this->roundHeader->AutoSize = true;
			this->roundHeader->BackColor = System::Drawing::Color::Transparent;
			this->roundHeader->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Bold));
			this->roundHeader->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->roundHeader->Location = System::Drawing::Point(10, 32);
			this->roundHeader->Name = L"roundHeader";
			this->roundHeader->Size = System::Drawing::Size(71, 25);
			this->roundHeader->TabIndex = 15;
			this->roundHeader->Text = L"Round:";
			// 
			// scoreHeader
			// 
			this->scoreHeader->AutoSize = true;
			this->scoreHeader->BackColor = System::Drawing::Color::Transparent;
			this->scoreHeader->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Bold));
			this->scoreHeader->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->scoreHeader->Location = System::Drawing::Point(10, 58);
			this->scoreHeader->Name = L"scoreHeader";
			this->scoreHeader->Size = System::Drawing::Size(62, 25);
			this->scoreHeader->TabIndex = 16;
			this->scoreHeader->Text = L"Score:";
			// 
			// difficultyLabel
			// 
			this->difficultyLabel->AutoSize = true;
			this->difficultyLabel->BackColor = System::Drawing::Color::Transparent;
			this->difficultyLabel->Font = (gcnew System::Drawing::Font(L"Montserrat", 12));
			this->difficultyLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->difficultyLabel->Location = System::Drawing::Point(117, 7);
			this->difficultyLabel->Name = L"difficultyLabel";
			this->difficultyLabel->Size = System::Drawing::Size(49, 25);
			this->difficultyLabel->TabIndex = 17;
			this->difficultyLabel->Text = L"Easy";
			// 
			// roundLabel
			// 
			this->roundLabel->AutoSize = true;
			this->roundLabel->BackColor = System::Drawing::Color::Transparent;
			this->roundLabel->Font = (gcnew System::Drawing::Font(L"Montserrat", 12));
			this->roundLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->roundLabel->Location = System::Drawing::Point(117, 32);
			this->roundLabel->Name = L"roundLabel";
			this->roundLabel->Size = System::Drawing::Size(38, 25);
			this->roundLabel->TabIndex = 18;
			this->roundLabel->Text = L"1/15";
			// 
			// scoreLabel
			// 
			this->scoreLabel->AutoSize = true;
			this->scoreLabel->BackColor = System::Drawing::Color::Transparent;
			this->scoreLabel->Font = (gcnew System::Drawing::Font(L"Montserrat", 12));
			this->scoreLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->scoreLabel->Location = System::Drawing::Point(117, 58);
			this->scoreLabel->Name = L"scoreLabel";
			this->scoreLabel->Size = System::Drawing::Size(23, 25);
			this->scoreLabel->TabIndex = 19;
			this->scoreLabel->Text = L"0";
			// 
			// giveupButton
			// 
			this->giveupButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->giveupButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->giveupButton->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 14.25F, System::Drawing::FontStyle::Bold));
			this->giveupButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(67)));
			this->giveupButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"giveupButton.Image")));
			this->giveupButton->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->giveupButton->Location = System::Drawing::Point(289, 387);
			this->giveupButton->Margin = System::Windows::Forms::Padding(2);
			this->giveupButton->Name = L"giveupButton";
			this->giveupButton->Padding = System::Windows::Forms::Padding(2, 0, 0, 0);
			this->giveupButton->Size = System::Drawing::Size(165, 40);
			this->giveupButton->TabIndex = 20;
			this->giveupButton->Text = L"        Give Up";
			this->giveupButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->giveupButton->UseVisualStyleBackColor = false;
			this->giveupButton->Click += gcnew System::EventHandler(this, &GameForm::giveupButton_Click);
			// 
			// timeHeader
			// 
			this->timeHeader->AutoSize = true;
			this->timeHeader->BackColor = System::Drawing::Color::Transparent;
			this->timeHeader->Font = (gcnew System::Drawing::Font(L"Montserrat", 20, System::Drawing::FontStyle::Bold));
			this->timeHeader->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->timeHeader->Location = System::Drawing::Point(553, 9);
			this->timeHeader->Name = L"timeHeader";
			this->timeHeader->Size = System::Drawing::Size(95, 42);
			this->timeHeader->TabIndex = 21;
			this->timeHeader->Text = L"Time:";
			// 
			// timeLabel
			// 
			this->timeLabel->AutoSize = true;
			this->timeLabel->BackColor = System::Drawing::Color::Transparent;
			this->timeLabel->Font = (gcnew System::Drawing::Font(L"Montserrat", 20));
			this->timeLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->timeLabel->Location = System::Drawing::Point(654, 9);
			this->timeLabel->Name = L"timeLabel";
			this->timeLabel->Size = System::Drawing::Size(51, 42);
			this->timeLabel->TabIndex = 22;
			this->timeLabel->Text = L"30";
			// 
			// timer
			// 
			this->timer->Enabled = true;
			this->timer->Interval = 1000;
			this->timer->Tick += gcnew System::EventHandler(this, &GameForm::timer_Tick);
			// 
			// challengeLabel
			// 
			this->challengeLabel->AutoSize = true;
			this->challengeLabel->BackColor = System::Drawing::Color::Transparent;
			this->challengeLabel->Font = (gcnew System::Drawing::Font(L"Montserrat", 12));
			this->challengeLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->challengeLabel->Location = System::Drawing::Point(117, 104);
			this->challengeLabel->Name = L"challengeLabel";
			this->challengeLabel->Size = System::Drawing::Size(92, 25);
			this->challengeLabel->TabIndex = 24;
			this->challengeLabel->Text = L"Speedrun";
			this->challengeLabel->Visible = false;
			// 
			// challengeHeader
			// 
			this->challengeHeader->AutoSize = true;
			this->challengeHeader->BackColor = System::Drawing::Color::Transparent;
			this->challengeHeader->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Bold));
			this->challengeHeader->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->challengeHeader->Location = System::Drawing::Point(10, 104);
			this->challengeHeader->Name = L"challengeHeader";
			this->challengeHeader->Size = System::Drawing::Size(101, 25);
			this->challengeHeader->TabIndex = 23;
			this->challengeHeader->Text = L"Challenge:";
			this->challengeHeader->Visible = false;
			// 
			// comboLabel
			// 
			this->comboLabel->AutoSize = true;
			this->comboLabel->BackColor = System::Drawing::Color::Transparent;
			this->comboLabel->Font = (gcnew System::Drawing::Font(L"Montserrat", 12));
			this->comboLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->comboLabel->Location = System::Drawing::Point(117, 82);
			this->comboLabel->Name = L"comboLabel";
			this->comboLabel->Size = System::Drawing::Size(27, 25);
			this->comboLabel->TabIndex = 26;
			this->comboLabel->Text = L"1x";
			// 
			// comboHeader
			// 
			this->comboHeader->AutoSize = true;
			this->comboHeader->BackColor = System::Drawing::Color::Transparent;
			this->comboHeader->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Bold));
			this->comboHeader->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->comboHeader->Location = System::Drawing::Point(10, 82);
			this->comboHeader->Name = L"comboHeader";
			this->comboHeader->Size = System::Drawing::Size(76, 25);
			this->comboHeader->TabIndex = 25;
			this->comboHeader->Text = L"Combo:";
			// 
			// GameForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(67)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(736, 466);
			this->Controls->Add(this->comboLabel);
			this->Controls->Add(this->comboHeader);
			this->Controls->Add(this->challengeLabel);
			this->Controls->Add(this->challengeHeader);
			this->Controls->Add(this->timeLabel);
			this->Controls->Add(this->timeHeader);
			this->Controls->Add(this->guessBox);
			this->Controls->Add(this->giveupButton);
			this->Controls->Add(this->scoreLabel);
			this->Controls->Add(this->roundLabel);
			this->Controls->Add(this->difficultyLabel);
			this->Controls->Add(this->scoreHeader);
			this->Controls->Add(this->roundHeader);
			this->Controls->Add(this->diffHeader);
			this->Controls->Add(this->guessLabel);
			this->Controls->Add(this->wordLabel);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"GameForm";
			this->Text = L"GameForm";
			this->Load += gcnew System::EventHandler(this, &GameForm::GameForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	#pragma endregion


void toUpperCase(string &text)
{
	for (int i = 0; i < text.length(); i++)
	{
		if (text[i] >= 'a' && text[i] <= 'z')
		{
			text[i] = text[i] - 32;
		}
	}
}

void WordGenerate(string filename, int lines)
{
	wordlist = filename;
	ifstream wordList(filename);
	string labelText;
	string line;
	int lineNo = 0;

	int wordNo = rand() % lines;

	if (wordList.is_open())
	{
		while (getline(wordList, line))
		{
			if (lineNo == wordNo)
			{
				labelText = line.front();
				for (int i = 0; i < line.length() - 2; i++)
				{
					labelText += " _";
				}
				labelText = labelText + " " + line.back();

				wordLabel->Text = to_String(labelText);
				word = line;
			}
			lineNo++;
		}
		wordList.close();
	}
}
void EndRun()
{
	Navigation::Score = Score;
	if (Navigation::challenge != 0 && Score>0 && Navigation::challengeDone)
	{
		if (Navigation::challenge == 2) // comeback
		{
			if (maxCombo >= 12 && wrongCombo == 3)
			{
				Navigation::Score += 20;
			}
		}
		else if (Navigation::challenge == 3) // perfectionist
		{
			Navigation::Score += 25;
		}
		else //speedrun, clutch master
		{
			Navigation::Score += 10;
		}
		
	}
	Navigation::maxCombo = maxCombo;
	Score = 0;
	Round = 0;
	Combo = 1;
	maxCombo = 1;
	timer->Stop();
	Navigation::LoadResultForm();
}

void EasyWordGenerate()
{
	WordGenerate("wordlistEasy.txt", 1379);

}
void MediumWordGenerate()
{
	WordGenerate("wordlistMedium.txt", 934);
}
void HardWordGenerate()
{
	WordGenerate("wordlistHard.txt", 558);
}

void loadWord(bool initiate, bool matches)
{
	guessBox->Focus();
	Round++;
	if (Navigation::difficulty == 1) // easy
	{
		difficultyLabel->Text = "Easy";
		if (Navigation::challenge == 1) // speedrun check
		{
			second=7;
		}
		else
		{
			second=15;
		}
		EasyWordGenerate();
	}
	else if (Navigation::difficulty == 2) // medium
	{
		difficultyLabel->Text = "Medium";
		if (Navigation::challenge == 1)
		{
			second = 15;
		}
		else
		{
			second = 30;
		}
		MediumWordGenerate();
	}
	else if (Navigation::difficulty == 3) // hard
	{
		difficultyLabel->Text = "Hard";
		if (Navigation::challenge == 1)
		{
			second = 25;
		}
		else
		{
			second = 45;
		}
		HardWordGenerate();
	}
	if (!initiate)
	{
		if (matches)
		{
			Navigation::soundPlayer->SoundLocation = Application::StartupPath + "\\sounds\\correct.wav";
			if (Navigation::difficulty == 1) // easy
			{
				Score += 2 * Combo;
			}
			else if (Navigation::difficulty == 2) // medium
			{
				Score += 3 * Combo;
			}
			else if (Navigation::difficulty == 3) // hard
			{
				Score += 5 * Combo;
			}
			Combo++;
			if (Combo > maxCombo)
			{
				maxCombo = Combo;
			}
			if (Navigation::challenge == 2 && Round >= 1 && Round <= 4) // comeback
			{
				EndRun();
			}
		}
		else
		{
			Navigation::soundPlayer->SoundLocation = Application::StartupPath + "\\sounds\\incorrect.wav";
			if (Navigation::difficulty == 1) // easy
			{
				Score -= 1 * Combo;
			}
			else if (Navigation::difficulty == 2) // medium
			{
				Score -= 2 * Combo;
			}
			else if (Navigation::difficulty == 3) // hard
			{
				Score -= 1 * Combo;
			}
			Combo = 1;
			if (Round >= 1 && Round <= 4)
			{
				wrongCombo++;
			}
			else if (Navigation::challenge == 2)
			{
				EndRun();
			}

			if (Navigation::challenge == 3)
			{
				EndRun();
			}
		}
		Navigation::soundPlayer->Play();
		comboLabel->Text = Combo+"x";

	}
	timeLabel->Text=second+"";
	roundLabel->Text = Round + "/15";
	scoreLabel->Text = Score + "";

	guessBox->Text = "";

	if (Round > 15)
	{
		Navigation::challengeDone = true;
		EndRun();
	}
}

private: System::Void GameForm_Load(System::Object^ sender, System::EventArgs^ e) {
	srand(time(0));

	Navigation::challengeDone = false;
	Navigation::gaveUp = false;
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
	loadWord(true, false);
}

private: System::Void giveupButton_Click(System::Object^ sender, System::EventArgs^ e) {
	Navigation::gaveUp = true;
	EndRun();
}

private: System::Void guessBox_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == (char)Keys::Enter)
	{
		string guessWord = to_string(guessBox->Text);
		toUpperCase(guessWord);

		bool matches = false;
		ifstream wordfile(wordlist);
		if (wordfile.is_open())
		{
		   string line;
		   while (getline(wordfile, line))
		   {
			   if (guessWord== line)
			   {
			       //MessageBox::Show(to_String(line));
				   matches=true;
				   break;
			   }

		   }
		}

		if (Navigation::challenge == 4) // clutch challenge
		{
			if (second == 1)
			{
				loadWord(false, matches);
			}
			else
			{
				loadWord(false, false);
			}
		}
		else
		{
			loadWord(false, matches);
		}
		e->Handled = true;	
	}
	else
	{
		Navigation::soundPlayer->SoundLocation = Application::StartupPath + "\\sounds\\type" + typeEffect + ".wav";
		Navigation::soundPlayer->Play();
		if (typeEffect >= 3)
		{
			typeEffect=1;
		}
		else
		{
			typeEffect++;
		}
	}
}

private: System::Void timer_Tick(System::Object^ sender, System::EventArgs^ e) {
	second--;
	if (second < 0)
	{
		loadWord(false, false);
	}
	timeLabel->Text=second+" ";


}
};
