#pragma once
#include "Enroll.h"
#include "Studlist.h"
#include "Gradsys.h"
#include "Pendlist.h"

namespace Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Mainmenu
	/// </summary>
	public ref class Mainmenu : public System::Windows::Forms::Form
	{
	public:

		Form ^obj;

		Mainmenu(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Mainmenu(Form^ obj1)
		{
			obj = obj1;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Mainmenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  enrollbutton;
	protected:
	private: System::Windows::Forms::Button^  studlistbutton;
	private: System::Windows::Forms::Button^  gradebutton;
	private: System::Windows::Forms::Button^  pendingbutton;

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
			this->enrollbutton = (gcnew System::Windows::Forms::Button());
			this->studlistbutton = (gcnew System::Windows::Forms::Button());
			this->gradebutton = (gcnew System::Windows::Forms::Button());
			this->pendingbutton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// enrollbutton
			// 
			this->enrollbutton->Location = System::Drawing::Point(62, 58);
			this->enrollbutton->Name = L"enrollbutton";
			this->enrollbutton->Size = System::Drawing::Size(220, 80);
			this->enrollbutton->TabIndex = 0;
			this->enrollbutton->Text = L"Enrollment";
			this->enrollbutton->UseVisualStyleBackColor = true;
			this->enrollbutton->Click += gcnew System::EventHandler(this, &Mainmenu::enrollbutton_Click);
			// 
			// studlistbutton
			// 
			this->studlistbutton->Location = System::Drawing::Point(62, 144);
			this->studlistbutton->Name = L"studlistbutton";
			this->studlistbutton->Size = System::Drawing::Size(220, 80);
			this->studlistbutton->TabIndex = 1;
			this->studlistbutton->Text = L"Student List";
			this->studlistbutton->UseVisualStyleBackColor = true;
			this->studlistbutton->Click += gcnew System::EventHandler(this, &Mainmenu::studlistbutton_Click);
			// 
			// gradebutton
			// 
			this->gradebutton->Location = System::Drawing::Point(62, 230);
			this->gradebutton->Name = L"gradebutton";
			this->gradebutton->Size = System::Drawing::Size(220, 80);
			this->gradebutton->TabIndex = 2;
			this->gradebutton->Text = L"Grading System";
			this->gradebutton->UseVisualStyleBackColor = true;
			this->gradebutton->Click += gcnew System::EventHandler(this, &Mainmenu::gradebutton_Click);
			// 
			// pendingbutton
			// 
			this->pendingbutton->Location = System::Drawing::Point(62, 316);
			this->pendingbutton->Name = L"pendingbutton";
			this->pendingbutton->Size = System::Drawing::Size(220, 80);
			this->pendingbutton->TabIndex = 3;
			this->pendingbutton->Text = L"Pending List";
			this->pendingbutton->UseVisualStyleBackColor = true;
			this->pendingbutton->Click += gcnew System::EventHandler(this, &Mainmenu::pendingbutton_Click);
			// 
			// Mainmenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1078, 444);
			this->Controls->Add(this->pendingbutton);
			this->Controls->Add(this->gradebutton);
			this->Controls->Add(this->studlistbutton);
			this->Controls->Add(this->enrollbutton);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Mainmenu";
			this->Text = L"Mainmenu";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void enrollbutton_Click(System::Object^  sender, System::EventArgs^  e) {
		//open enrollment form
		this->Hide();
		Enroll ^obj1 = gcnew Enroll(this);
		obj1->ShowDialog();
		this->Show();
	}
	private: System::Void studlistbutton_Click(System::Object^  sender, System::EventArgs^  e) {
		//open student list form
		this->Hide();
		Studlist ^obj1 = gcnew Studlist(this);
		obj1->ShowDialog();
		this->Show();
	}
private: System::Void gradebutton_Click(System::Object^  sender, System::EventArgs^  e) {
	//open grading system form
	this->Hide();
	Gradsys ^obj1 = gcnew Gradsys(this);
	obj1->ShowDialog();
	this->Show();
}
private: System::Void pendingbutton_Click(System::Object^  sender, System::EventArgs^  e) {
	//open pending list
	this->Hide();
	Pendlist ^obj1 = gcnew Pendlist(this);
	obj1->ShowDialog();
	this->Show();
}
};
}
