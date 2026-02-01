#pragma once
#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
#include<sstream>
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


public ref class LeaderboardForm : public System::Windows::Forms::Form
{
	#pragma region Initalize Form
	public:
		LeaderboardForm(void)
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
		~LeaderboardForm()
		{
			if (components)
			{
				delete components;
			}
		}






private: System::Windows::Forms::DataGridView^ leaderboardGrid;



private: System::Windows::Forms::Label^ leaderboardLabel;



private: System::Windows::Forms::Button^ backButton;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ rankCol;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ nameCol;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ scoreCol;














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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LeaderboardForm::typeid));
			this->leaderboardGrid = (gcnew System::Windows::Forms::DataGridView());
			this->leaderboardLabel = (gcnew System::Windows::Forms::Label());
			this->backButton = (gcnew System::Windows::Forms::Button());
			this->scoreCol = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->nameCol = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->rankCol = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->leaderboardGrid))->BeginInit();
			this->SuspendLayout();
			// 
			// leaderboardGrid
			// 
			this->leaderboardGrid->AllowUserToAddRows = false;
			this->leaderboardGrid->AllowUserToDeleteRows = false;
			this->leaderboardGrid->AllowUserToResizeColumns = false;
			this->leaderboardGrid->AllowUserToResizeRows = false;
			this->leaderboardGrid->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->leaderboardGrid->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->leaderboardGrid->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::SingleHorizontal;
			this->leaderboardGrid->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(144)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)), static_cast<System::Int32>(static_cast<System::Byte>(38)));
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(144)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)), static_cast<System::Int32>(static_cast<System::Byte>(38)));
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->leaderboardGrid->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->leaderboardGrid->ColumnHeadersHeight = 40;
			this->leaderboardGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->leaderboardGrid->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->rankCol,
					this->nameCol, this->scoreCol
			});
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(144)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)), static_cast<System::Int32>(static_cast<System::Byte>(38)));
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Montserrat Medium", 12, System::Drawing::FontStyle::Bold));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->leaderboardGrid->DefaultCellStyle = dataGridViewCellStyle2;
			this->leaderboardGrid->EnableHeadersVisualStyles = false;
			this->leaderboardGrid->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(70)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->leaderboardGrid->Location = System::Drawing::Point(196, 110);
			this->leaderboardGrid->Margin = System::Windows::Forms::Padding(4);
			this->leaderboardGrid->Name = L"leaderboardGrid";
			this->leaderboardGrid->ReadOnly = true;
			this->leaderboardGrid->RowHeadersVisible = false;
			this->leaderboardGrid->RowHeadersWidth = 51;
			this->leaderboardGrid->RowTemplate->DefaultCellStyle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->leaderboardGrid->RowTemplate->DefaultCellStyle->ForeColor = System::Drawing::Color::White;
			this->leaderboardGrid->RowTemplate->DefaultCellStyle->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(90)), static_cast<System::Int32>(static_cast<System::Byte>(90)));
			this->leaderboardGrid->RowTemplate->DefaultCellStyle->SelectionForeColor = System::Drawing::Color::White;
			this->leaderboardGrid->RowTemplate->Height = 35;
			this->leaderboardGrid->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->leaderboardGrid->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->leaderboardGrid->Size = System::Drawing::Size(596, 356);
			this->leaderboardGrid->TabIndex = 17;
			// 
			// leaderboardLabel
			// 
			this->leaderboardLabel->AutoSize = true;
			this->leaderboardLabel->BackColor = System::Drawing::Color::Transparent;
			this->leaderboardLabel->Font = (gcnew System::Drawing::Font(L"Montserrat", 38.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->leaderboardLabel->ForeColor = System::Drawing::Color::White;
			this->leaderboardLabel->Location = System::Drawing::Point(253, 7);
			this->leaderboardLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->leaderboardLabel->Name = L"leaderboardLabel";
			this->leaderboardLabel->Size = System::Drawing::Size(464, 100);
			this->leaderboardLabel->TabIndex = 36;
			this->leaderboardLabel->Text = L"Leaderboard";
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
			this->backButton->Location = System::Drawing::Point(397, 482);
			this->backButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->backButton->Name = L"backButton";
			this->backButton->Size = System::Drawing::Size(200, 43);
			this->backButton->TabIndex = 37;
			this->backButton->Text = L"   Back";
			this->backButton->UseVisualStyleBackColor = false;
			this->backButton->Click += gcnew System::EventHandler(this, &LeaderboardForm::backButton_Click);
			// 
			// scoreCol
			// 
			this->scoreCol->HeaderText = L"SCORE";
			this->scoreCol->MinimumWidth = 6;
			this->scoreCol->Name = L"scoreCol";
			this->scoreCol->ReadOnly = true;
			this->scoreCol->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->scoreCol->Width = 147;
			// 
			// nameCol
			// 
			this->nameCol->HeaderText = L"NAME";
			this->nameCol->MinimumWidth = 6;
			this->nameCol->Name = L"nameCol";
			this->nameCol->ReadOnly = true;
			this->nameCol->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->nameCol->Width = 200;
			// 
			// rankCol
			// 
			this->rankCol->HeaderText = L"RANK";
			this->rankCol->MinimumWidth = 6;
			this->rankCol->Name = L"rankCol";
			this->rankCol->ReadOnly = true;
			this->rankCol->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->rankCol->Width = 125;
			// 
			// LeaderboardForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(67)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(981, 553);
			this->Controls->Add(this->backButton);
			this->Controls->Add(this->leaderboardLabel);
			this->Controls->Add(this->leaderboardGrid);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"LeaderboardForm";
			this->Text = L"LeaderboardForm";
			this->Load += gcnew System::EventHandler(this, &LeaderboardForm::LeaderboardForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->leaderboardGrid))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	#pragma endregion

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
		for (int k = 0;k < num;k++)
		{
			ofile << name[k] << ":" << score[k] << endl;
		}
	}
}

private: System::Void LeaderboardForm_Load(System::Object^ sender, System::EventArgs^ e) {
	scoreorder();
	leaderboardGrid->Rows->Clear();

	ifstream file("leaderboard.txt");
	string line;
	int p = 1;

	if (file.is_open()) {
		while (getline(file, line))
		{
			int pos = line.find(":");
			string name = line.substr(0, pos);
			string score = line.substr(pos + 1);

			string rankDisplay;
			if (p == 1) rankDisplay = "1st";
			else if (p == 2) rankDisplay = "2nd";
			else if (p == 3) rankDisplay = "3rd";
			else rankDisplay = to_string(p) + "th";

			int rowIndex = leaderboardGrid->Rows->Add(to_String(rankDisplay), to_String(name), to_String(score));
			DataGridViewRow^ row = leaderboardGrid->Rows[rowIndex];

			if (p == 1)
			{
				row->DefaultCellStyle->BackColor = Color::FromArgb(140, 110, 40);
				row->DefaultCellStyle->SelectionBackColor = Color::FromArgb(175, 145, 65);
			}
			else if (p == 2) {
				row->DefaultCellStyle->BackColor = Color::FromArgb(90, 100, 110);
				row->DefaultCellStyle->SelectionBackColor = Color::FromArgb(130, 140, 150);
			}
			else if (p == 3) {
				row->DefaultCellStyle->BackColor = Color::FromArgb(100, 60, 30);
				row->DefaultCellStyle->SelectionBackColor = Color::FromArgb(145, 95, 55);
			}

			p++;
		}
		file.close();
	}

	leaderboardGrid->ClearSelection();
}

private: System::Void leaderboardList_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void backButton_Click(System::Object^ sender, System::EventArgs^ e) 
{
Navigation::LoadMenuForm();
}
};