#pragma once
#include "Mainmenu.h"
#include "functions.h"

namespace Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Summary for Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login(void)
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
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  usernamebox;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  passwordbox;
	private: System::Windows::Forms::Button^  loginbutton;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->usernamebox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->passwordbox = (gcnew System::Windows::Forms::TextBox());
			this->loginbutton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// usernamebox
			// 
			this->usernamebox->Location = System::Drawing::Point(265, 127);
			this->usernamebox->Name = L"usernamebox";
			this->usernamebox->Size = System::Drawing::Size(366, 30);
			this->usernamebox->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(151, 130);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(108, 25);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Username:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(155, 166);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(104, 25);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Password:";
			// 
			// passwordbox
			// 
			this->passwordbox->Location = System::Drawing::Point(265, 163);
			this->passwordbox->Name = L"passwordbox";
			this->passwordbox->PasswordChar = '*';
			this->passwordbox->Size = System::Drawing::Size(366, 30);
			this->passwordbox->TabIndex = 2;
			// 
			// loginbutton
			// 
			this->loginbutton->Location = System::Drawing::Point(354, 216);
			this->loginbutton->Name = L"loginbutton";
			this->loginbutton->Size = System::Drawing::Size(94, 36);
			this->loginbutton->TabIndex = 4;
			this->loginbutton->Text = L"Login";
			this->loginbutton->UseVisualStyleBackColor = true;
			this->loginbutton->Click += gcnew System::EventHandler(this, &Login::loginbutton_Click);
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(778, 344);
			this->Controls->Add(this->loginbutton);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->passwordbox);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->usernamebox);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Login";
			this->Text = L"Login";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void loginbutton_Click(System::Object^  sender, System::EventArgs^  e) {
		//getinput from user
		String^ getuser = usernamebox->Text;
		String ^getpass = passwordbox->Text;

		//convert system string to std string
		string user = msclr::interop::marshal_as<std::string>(getuser);
		string pass = msclr::interop::marshal_as<std::string>(getpass);

		//open file
		fstream file;
		file.open(user + ".txt");

		//check input
		string check;
		getline(file, check);

		if (check == pass && file.is_open())
		{
			//open mainmenu
			this->Hide();
			Mainmenu ^obj1 = gcnew Mainmenu(this);
			obj1->ShowDialog();
			this->Show();

			//clear textbox
			usernamebox->Clear();
			passwordbox->Clear();
		}
		else
		{
			MessageBox::Show("Incorrect username/password!");
		}

	}
};
}

