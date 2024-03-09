#pragma once

/*
*Jonathan Swardson jswardson@cnm.edu
*MyForm.h
* The code that lets you interact with the gui.
*/


#include "CrapsGame.h"
#include "UtilityFunctions.h"

namespace SBSP7 {


	


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	/// 
	/// 
	CrapsGame game;


	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_Roll;
	protected:
	private: System::Windows::Forms::Button^ btn_Done;
	private: System::Windows::Forms::Button^ btn_PlayAgain;
	private: System::Windows::Forms::Button^ btn_Ready;
	private: System::Windows::Forms::TextBox^ txt_Balance;
	private: System::Windows::Forms::TextBox^ txt_GameStatus;
	private: System::Windows::Forms::TextBox^ txt_Bet;
	private: System::Windows::Forms::TextBox^ txt_name;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ img_RedDice;
	private: System::Windows::Forms::PictureBox^ img_PurpleDice;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ rulesToolStripMenuItem;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->btn_Roll = (gcnew System::Windows::Forms::Button());
			this->btn_Done = (gcnew System::Windows::Forms::Button());
			this->btn_PlayAgain = (gcnew System::Windows::Forms::Button());
			this->btn_Ready = (gcnew System::Windows::Forms::Button());
			this->txt_Balance = (gcnew System::Windows::Forms::TextBox());
			this->txt_GameStatus = (gcnew System::Windows::Forms::TextBox());
			this->txt_Bet = (gcnew System::Windows::Forms::TextBox());
			this->txt_name = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->img_RedDice = (gcnew System::Windows::Forms::PictureBox());
			this->img_PurpleDice = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->rulesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img_RedDice))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img_PurpleDice))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// btn_Roll
			// 
			this->btn_Roll->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->btn_Roll->BackColor = System::Drawing::Color::DarkGreen;
			this->btn_Roll->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_Roll->FlatAppearance->BorderSize = 2;
			this->btn_Roll->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Roll->Location = System::Drawing::Point(558, 277);
			this->btn_Roll->Margin = System::Windows::Forms::Padding(1);
			this->btn_Roll->Name = L"btn_Roll";
			this->btn_Roll->Size = System::Drawing::Size(61, 31);
			this->btn_Roll->TabIndex = 0;
			this->btn_Roll->Text = L"Roll Dice";
			this->btn_Roll->UseVisualStyleBackColor = false;
			this->btn_Roll->Click += gcnew System::EventHandler(this, &MyForm::btn_Roll_Click);
			// 
			// btn_Done
			// 
			this->btn_Done->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->btn_Done->BackColor = System::Drawing::Color::DarkGreen;
			this->btn_Done->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_Done->FlatAppearance->BorderSize = 2;
			this->btn_Done->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Done->Location = System::Drawing::Point(557, 310);
			this->btn_Done->Margin = System::Windows::Forms::Padding(1);
			this->btn_Done->Name = L"btn_Done";
			this->btn_Done->Size = System::Drawing::Size(61, 28);
			this->btn_Done->TabIndex = 1;
			this->btn_Done->Text = L"Done";
			this->btn_Done->UseVisualStyleBackColor = false;
			this->btn_Done->Click += gcnew System::EventHandler(this, &MyForm::btn_Done_Click);
			// 
			// btn_PlayAgain
			// 
			this->btn_PlayAgain->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->btn_PlayAgain->BackColor = System::Drawing::Color::DarkGreen;
			this->btn_PlayAgain->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_PlayAgain->FlatAppearance->BorderSize = 2;
			this->btn_PlayAgain->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_PlayAgain->Location = System::Drawing::Point(486, 310);
			this->btn_PlayAgain->Margin = System::Windows::Forms::Padding(1);
			this->btn_PlayAgain->Name = L"btn_PlayAgain";
			this->btn_PlayAgain->Size = System::Drawing::Size(63, 28);
			this->btn_PlayAgain->TabIndex = 2;
			this->btn_PlayAgain->Text = L"Play Again";
			this->btn_PlayAgain->UseVisualStyleBackColor = false;
			this->btn_PlayAgain->Click += gcnew System::EventHandler(this, &MyForm::btn_PlayAgain_Click);
			// 
			// btn_Ready
			// 
			this->btn_Ready->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->btn_Ready->BackColor = System::Drawing::Color::DarkGreen;
			this->btn_Ready->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_Ready->FlatAppearance->BorderSize = 2;
			this->btn_Ready->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Ready->Location = System::Drawing::Point(486, 277);
			this->btn_Ready->Margin = System::Windows::Forms::Padding(1);
			this->btn_Ready->Name = L"btn_Ready";
			this->btn_Ready->Size = System::Drawing::Size(63, 31);
			this->btn_Ready->TabIndex = 3;
			this->btn_Ready->Text = L"Ready";
			this->btn_Ready->UseVisualStyleBackColor = false;
			this->btn_Ready->Click += gcnew System::EventHandler(this, &MyForm::btn_Ready_Click);
			// 
			// txt_Balance
			// 
			this->txt_Balance->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->txt_Balance->BackColor = System::Drawing::Color::DarkGreen;
			this->txt_Balance->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_Balance->ForeColor = System::Drawing::Color::Yellow;
			this->txt_Balance->Location = System::Drawing::Point(486, 182);
			this->txt_Balance->Margin = System::Windows::Forms::Padding(1);
			this->txt_Balance->Multiline = true;
			this->txt_Balance->Name = L"txt_Balance";
			this->txt_Balance->ReadOnly = true;
			this->txt_Balance->Size = System::Drawing::Size(132, 93);
			this->txt_Balance->TabIndex = 4;
			this->txt_Balance->Text = L"Balance: ";
			// 
			// txt_GameStatus
			// 
			this->txt_GameStatus->AcceptsReturn = true;
			this->txt_GameStatus->AcceptsTab = true;
			this->txt_GameStatus->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->txt_GameStatus->BackColor = System::Drawing::Color::DarkGreen;
			this->txt_GameStatus->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_GameStatus->ForeColor = System::Drawing::Color::Yellow;
			this->txt_GameStatus->Location = System::Drawing::Point(487, 25);
			this->txt_GameStatus->Margin = System::Windows::Forms::Padding(1);
			this->txt_GameStatus->Multiline = true;
			this->txt_GameStatus->Name = L"txt_GameStatus";
			this->txt_GameStatus->ReadOnly = true;
			this->txt_GameStatus->Size = System::Drawing::Size(132, 155);
			this->txt_GameStatus->TabIndex = 5;
			this->txt_GameStatus->Text = L"Game Status:";
			// 
			// txt_Bet
			// 
			this->txt_Bet->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->txt_Bet->BackColor = System::Drawing::Color::DarkGreen;
			this->txt_Bet->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_Bet->ForeColor = System::Drawing::Color::Yellow;
			this->txt_Bet->Location = System::Drawing::Point(335, 325);
			this->txt_Bet->Margin = System::Windows::Forms::Padding(1);
			this->txt_Bet->Name = L"txt_Bet";
			this->txt_Bet->Size = System::Drawing::Size(56, 13);
			this->txt_Bet->TabIndex = 6;
			this->txt_Bet->TextChanged += gcnew System::EventHandler(this, &MyForm::txt_Bet_TextChanged);
			// 
			// txt_name
			// 
			this->txt_name->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->txt_name->BackColor = System::Drawing::Color::DarkGreen;
			this->txt_name->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_name->ForeColor = System::Drawing::Color::Yellow;
			this->txt_name->Location = System::Drawing::Point(60, 325);
			this->txt_name->Margin = System::Windows::Forms::Padding(1);
			this->txt_name->Name = L"txt_name";
			this->txt_name->Size = System::Drawing::Size(75, 13);
			this->txt_name->TabIndex = 7;
			this->txt_name->TextChanged += gcnew System::EventHandler(this, &MyForm::txt_name_TextChanged);
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(18, 326);
			this->label1->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(38, 13);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Name:";
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(309, 326);
			this->label2->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(26, 13);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Bet:";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Lime;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->ImageLocation = L"";
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(4, 25);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(1);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(477, 286);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 10;
			this->pictureBox1->TabStop = false;
			// 
			// img_RedDice
			// 
			this->img_RedDice->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"img_RedDice.Image")));
			this->img_RedDice->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"img_RedDice.InitialImage")));
			this->img_RedDice->Location = System::Drawing::Point(362, 40);
			this->img_RedDice->Name = L"img_RedDice";
			this->img_RedDice->Size = System::Drawing::Size(58, 57);
			this->img_RedDice->TabIndex = 11;
			this->img_RedDice->TabStop = false;
			// 
			// img_PurpleDice
			// 
			this->img_PurpleDice->BackColor = System::Drawing::Color::Transparent;
			this->img_PurpleDice->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"img_PurpleDice.Image")));
			this->img_PurpleDice->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"img_PurpleDice.InitialImage")));
			this->img_PurpleDice->Location = System::Drawing::Point(409, 86);
			this->img_PurpleDice->Name = L"img_PurpleDice";
			this->img_PurpleDice->Size = System::Drawing::Size(58, 57);
			this->img_PurpleDice->TabIndex = 12;
			this->img_PurpleDice->TabStop = false;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->rulesToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(629, 24);
			this->menuStrip1->TabIndex = 13;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// rulesToolStripMenuItem
			// 
			this->rulesToolStripMenuItem->Name = L"rulesToolStripMenuItem";
			this->rulesToolStripMenuItem->Size = System::Drawing::Size(47, 20);
			this->rulesToolStripMenuItem->Text = L"Rules";
			this->rulesToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::rulesToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::ForestGreen;
			this->ClientSize = System::Drawing::Size(629, 354);
			this->Controls->Add(this->img_PurpleDice);
			this->Controls->Add(this->img_RedDice);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txt_name);
			this->Controls->Add(this->txt_Bet);
			this->Controls->Add(this->txt_GameStatus);
			this->Controls->Add(this->txt_Balance);
			this->Controls->Add(this->btn_Ready);
			this->Controls->Add(this->btn_PlayAgain);
			this->Controls->Add(this->btn_Done);
			this->Controls->Add(this->btn_Roll);
			this->Controls->Add(this->menuStrip1);
			this->ForeColor = System::Drawing::Color::Yellow;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(1);
			this->Name = L"MyForm";
			this->Text = L"Craps Game";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img_RedDice))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img_PurpleDice))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

			

		}

		String^ betStr = "";
		String^ nameStr = "";

#pragma endregion
		private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) 
		{
			txt_Balance->Text = game.GetBalance().ToString();
		}
		private: System::Void btn_Roll_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			if (game.GetPoint())
			{
				game.PlayPointRound();
				txt_GameStatus->Text = "In Point Round";
			}
			else
			{
				game.MakeYourPlay();
				txt_GameStatus->Text = "Not in Point Round";
			}

			ShowDice();

			txt_Balance->Text = game.GetBalance().ToString();
		}

		private: System::Void btn_Done_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			// Display the game summary
			String^ summary = gcnew String(game.GetSummary().c_str());
			txt_GameStatus->Text = summary;
			game.GameOver();
		}

		private: System::Void btn_PlayAgain_Click(System::Object^ sender, System::EventArgs^ e) {
			// Reset the game and provide instructions to the player
			game.ResetGame();
			txt_GameStatus->Text = "Enter a new bet and click 'I'm Ready' to start a new round.";
		}

		private: System::Void btn_Ready_Click(System::Object^ sender, System::EventArgs^ e) {
			// Read the bet from the text box and set it in the CrapsGame object
			double bet;
			if (Double::TryParse(betStr, bet)) 
			{
				if (game.SetBet(bet)) 
				{
					txt_GameStatus->Text = "Bet set successfully.";
				}
				else 
				{
					txt_GameStatus->Text = "Invalid bet. Please enter a valid bet.";
				}
			}
			else 
			{
				txt_GameStatus->Text = "Invalid bet format. Please enter a valid bet.";
			}
		}
		
		private: System::Void rulesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			String^ rules = gcnew String(game.GetRules().c_str());
			MessageBox::Show(rules, "Rules", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		private: System::Void ShowDice()
		{
			tuple<int, int> diceVals = game.GetTheDice();

			int dice1 = get<0>(diceVals);
			int dice2 = get<1>(diceVals);

			int total = dice1 + dice2;

			String^ dice1FileName = "./die" + dice1 + ".png";
			String^ dice2FileName = "./die" + dice2 + "p.png";

			// Load and set the images for img_RedDice and img_PurpleDice
			img_RedDice->Image = Image::FromFile(dice1FileName);
			img_PurpleDice->Image = Image::FromFile(dice2FileName);
		}
		private: System::Void txt_name_TextChanged(System::Object^ sender, System::EventArgs^ e) 
		{
			nameStr = txt_name->Text;
			string name = "";

			To_string(nameStr, name);
			game.SetName(name);
		}
		private: System::Void txt_Bet_TextChanged(System::Object^ sender, System::EventArgs^ e) 
		{
			betStr = txt_Bet->Text;
		}
	};
};