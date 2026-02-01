#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace std;

public ref class PlayForm : public System::Windows::Forms::Form
{
	#pragma region Initalize Form
	public:
		PlayForm(void)
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
		~PlayForm()
		{
			if (components)
			{
				delete components;
			}
		}
private: System::Windows::Forms::Button^ hardButton;
protected:
private: System::Windows::Forms::Button^ mediumButton;
private: System::Windows::Forms::Button^ easyButton;

	protected:








private: System::Windows::Forms::Button^ easyChallenges;


private: System::Windows::Forms::Button^ backButton;
private: System::Windows::Forms::Label^ diffLabel;
private: System::Windows::Forms::Button^ mediumChallenges;
private: System::Windows::Forms::Button^ hardChallenges;
















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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PlayForm::typeid));
			this->hardButton = (gcnew System::Windows::Forms::Button());
			this->mediumButton = (gcnew System::Windows::Forms::Button());
			this->easyButton = (gcnew System::Windows::Forms::Button());
			this->easyChallenges = (gcnew System::Windows::Forms::Button());
			this->backButton = (gcnew System::Windows::Forms::Button());
			this->diffLabel = (gcnew System::Windows::Forms::Label());
			this->mediumChallenges = (gcnew System::Windows::Forms::Button());
			this->hardChallenges = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// hardButton
			// 
			this->hardButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->hardButton->FlatAppearance->BorderSize = 0;
			this->hardButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->hardButton->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 14.25F, System::Drawing::FontStyle::Bold));
			this->hardButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(67)));
			this->hardButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"hardButton.Image")));
			this->hardButton->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->hardButton->Location = System::Drawing::Point(272, 260);
			this->hardButton->Margin = System::Windows::Forms::Padding(2);
			this->hardButton->Name = L"hardButton";
			this->hardButton->Padding = System::Windows::Forms::Padding(2, 0, 0, 0);
			this->hardButton->Size = System::Drawing::Size(149, 40);
			this->hardButton->TabIndex = 9;
			this->hardButton->Text = L"        Hard";
			this->hardButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->hardButton->UseVisualStyleBackColor = false;
			this->hardButton->Click += gcnew System::EventHandler(this, &PlayForm::hardButton_Click);
			// 
			// mediumButton
			// 
			this->mediumButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->mediumButton->FlatAppearance->BorderSize = 0;
			this->mediumButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->mediumButton->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 14.25F, System::Drawing::FontStyle::Bold));
			this->mediumButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(67)));
			this->mediumButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"mediumButton.Image")));
			this->mediumButton->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->mediumButton->Location = System::Drawing::Point(272, 215);
			this->mediumButton->Margin = System::Windows::Forms::Padding(2);
			this->mediumButton->Name = L"mediumButton";
			this->mediumButton->Padding = System::Windows::Forms::Padding(2, 0, 0, 0);
			this->mediumButton->Size = System::Drawing::Size(149, 40);
			this->mediumButton->TabIndex = 7;
			this->mediumButton->Text = L"        Medium";
			this->mediumButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->mediumButton->UseVisualStyleBackColor = false;
			this->mediumButton->Click += gcnew System::EventHandler(this, &PlayForm::mediumButton_Click);
			// 
			// easyButton
			// 
			this->easyButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->easyButton->FlatAppearance->BorderSize = 0;
			this->easyButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->easyButton->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 14.25F, System::Drawing::FontStyle::Bold));
			this->easyButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(67)));
			this->easyButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"easyButton.Image")));
			this->easyButton->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->easyButton->Location = System::Drawing::Point(272, 170);
			this->easyButton->Margin = System::Windows::Forms::Padding(2);
			this->easyButton->Name = L"easyButton";
			this->easyButton->Padding = System::Windows::Forms::Padding(2, 0, 0, 0);
			this->easyButton->Size = System::Drawing::Size(149, 40);
			this->easyButton->TabIndex = 6;
			this->easyButton->Text = L"        Easy";
			this->easyButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->easyButton->UseVisualStyleBackColor = false;
			this->easyButton->Click += gcnew System::EventHandler(this, &PlayForm::easyButton_Click);
			// 
			// easyChallenges
			// 
			this->easyChallenges->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->easyChallenges->FlatAppearance->BorderSize = 0;
			this->easyChallenges->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->easyChallenges->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(67)));
			this->easyChallenges->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"easyChallenges.Image")));
			this->easyChallenges->Location = System::Drawing::Point(426, 170);
			this->easyChallenges->Margin = System::Windows::Forms::Padding(0);
			this->easyChallenges->Name = L"easyChallenges";
			this->easyChallenges->Size = System::Drawing::Size(40, 40);
			this->easyChallenges->TabIndex = 31;
			this->easyChallenges->UseVisualStyleBackColor = false;
			this->easyChallenges->Click += gcnew System::EventHandler(this, &PlayForm::easyChallenges_Click);
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
			this->backButton->Location = System::Drawing::Point(293, 365);
			this->backButton->Margin = System::Windows::Forms::Padding(2);
			this->backButton->Name = L"backButton";
			this->backButton->Size = System::Drawing::Size(150, 35);
			this->backButton->TabIndex = 34;
			this->backButton->Text = L"   Back";
			this->backButton->UseVisualStyleBackColor = false;
			this->backButton->Click += gcnew System::EventHandler(this, &PlayForm::backButton_Click);
			// 
			// diffLabel
			// 
			this->diffLabel->AutoSize = true;
			this->diffLabel->BackColor = System::Drawing::Color::Transparent;
			this->diffLabel->Font = (gcnew System::Drawing::Font(L"Montserrat", 38.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->diffLabel->ForeColor = System::Drawing::Color::White;
			this->diffLabel->Location = System::Drawing::Point(229, 44);
			this->diffLabel->Name = L"diffLabel";
			this->diffLabel->Size = System::Drawing::Size(276, 80);
			this->diffLabel->TabIndex = 35;
			this->diffLabel->Text = L"Difficulty";
			// 
			// mediumChallenges
			// 
			this->mediumChallenges->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(144)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)), static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->mediumChallenges->FlatAppearance->BorderSize = 0;
			this->mediumChallenges->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->mediumChallenges->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(67)));
			this->mediumChallenges->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"mediumChallenges.Image")));
			this->mediumChallenges->Location = System::Drawing::Point(426, 216);
			this->mediumChallenges->Margin = System::Windows::Forms::Padding(0);
			this->mediumChallenges->Name = L"mediumChallenges";
			this->mediumChallenges->Size = System::Drawing::Size(40, 40);
			this->mediumChallenges->TabIndex = 36;
			this->mediumChallenges->UseVisualStyleBackColor = false;
			this->mediumChallenges->Click += gcnew System::EventHandler(this, &PlayForm::mediumChallenges_Click);
			// 
			// hardChallenges
			// 
			this->hardChallenges->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->hardChallenges->FlatAppearance->BorderSize = 0;
			this->hardChallenges->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->hardChallenges->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(67)));
			this->hardChallenges->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"hardChallenges.Image")));
			this->hardChallenges->Location = System::Drawing::Point(426, 261);
			this->hardChallenges->Margin = System::Windows::Forms::Padding(0);
			this->hardChallenges->Name = L"hardChallenges";
			this->hardChallenges->Size = System::Drawing::Size(40, 40);
			this->hardChallenges->TabIndex = 37;
			this->hardChallenges->UseVisualStyleBackColor = false;
			this->hardChallenges->Click += gcnew System::EventHandler(this, &PlayForm::hardChallenges_Click);
			// 
			// PlayForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(67)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(736, 449);
			this->Controls->Add(this->hardChallenges);
			this->Controls->Add(this->mediumChallenges);
			this->Controls->Add(this->diffLabel);
			this->Controls->Add(this->backButton);
			this->Controls->Add(this->easyChallenges);
			this->Controls->Add(this->hardButton);
			this->Controls->Add(this->mediumButton);
			this->Controls->Add(this->easyButton);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"PlayForm";
			this->Text = L"PlayForm";
			this->Load += gcnew System::EventHandler(this, &PlayForm::PlayForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	#pragma endregion

private: System::Void PlayForm_Load(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void backButton_Click(System::Object^ sender, System::EventArgs^ e) {
	Navigation::LoadMenuForm();
}

private: System::Void easyButton_Click(System::Object^ sender, System::EventArgs^ e) {
	Navigation::difficulty = 1;
	Navigation::challenge = 0;
	Navigation::LoadGameForm();
}
private: System::Void mediumButton_Click(System::Object^ sender, System::EventArgs^ e) {
	Navigation::difficulty = 2;
	Navigation::challenge = 0;
	Navigation::LoadGameForm();
}
private: System::Void hardButton_Click(System::Object^ sender, System::EventArgs^ e) {
	Navigation::difficulty = 3;
	Navigation::challenge = 0;
	Navigation::LoadGameForm();
}

private: System::Void easyChallenges_Click(System::Object^ sender, System::EventArgs^ e) {
	Navigation::difficulty = 1;
	Navigation::LoadChallengesForm();
		
}
private: System::Void mediumChallenges_Click(System::Object^ sender, System::EventArgs^ e) {
	Navigation::difficulty = 2;
	Navigation::LoadChallengesForm();
}
private: System::Void hardChallenges_Click(System::Object^ sender, System::EventArgs^ e) {
	Navigation::difficulty = 3;
	Navigation::LoadChallengesForm();
}
};
