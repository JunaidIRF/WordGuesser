#pragma once

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Media;

public ref class Navigation
{
public:
	static Panel^ mainPanel;
	static String^ username;
	static int difficulty = 0; //1 = easy, 2 = medium, 3 = hard
	static int challenge = 0; //1 = speedrun, 2 = comeback, 3 = score grinder, 4 = clutch master  
	
	static int totalScore = 0;
	static int Score = 0; // last
	static int maxCombo = 0; // last
	static bool challengeDone = false;
	static bool gaveUp = false;


	static SoundPlayer^ soundPlayer = gcnew SoundPlayer();

	static Action^ LoadLoginForm;
	static Action^ LoadMenuForm;
	static Action^ LoadPlayForm;
	static Action^ LoadLeaderboardForm;
	static Action^ LoadGameForm;
	static Action^ LoadResultForm;
	static Action^ LoadAccountForm;
	static Action^ LoadChallengesForm;
	static Action^ LoadMilestonesForm;



static void LoadForm(Form^ newForm) {
    mainPanel->SuspendLayout(); 

    newForm->TopLevel = false;
    newForm->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
    newForm->Dock = DockStyle::Fill;

    mainPanel->Controls->Add(newForm);

    newForm->Show();
    newForm->BringToFront();

    for (int i = mainPanel->Controls->Count - 1; i >= 0; i--) 
	{
        Control^ c = mainPanel->Controls[i];
        if (c != newForm) {
            mainPanel->Controls->Remove(c);
        }
    }

    mainPanel->ResumeLayout();
}
};