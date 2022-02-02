#pragma once
#include "functions.h"

namespace Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Pendlist
	/// </summary>
	public ref class Pendlist : public System::Windows::Forms::Form
	{
	public:
		Form ^obj;
		Pendlist(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Pendlist(Form ^obj1)
		{
			obj = obj1;
			InitializeComponent();
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Pendlist()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	protected:
	private: System::Windows::Forms::TextBox^  namebox;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::CheckBox^  birthcert;
	private: System::Windows::Forms::TextBox^  defbox;
	private: System::Windows::Forms::CheckBox^  goodmoral;
	private: System::Windows::Forms::Button^  updatebutton;
	private: System::Windows::Forms::CheckBox^  medex;
	private: System::Windows::Forms::Button^  searchbutton;

	private: System::Windows::Forms::CheckBox^  form137;
	private: System::Windows::Forms::Panel^  panel1;

	private: System::Windows::Forms::ComboBox^  acadyr;

	private: System::Windows::Forms::ListBox^  def;
	private: System::Windows::Forms::Button^  viewlistbtn;
	private: System::Windows::Forms::TextBox^  studno;
	private: System::Windows::Forms::Button^  clearbutton;
	private: System::Windows::Forms::Button^  editbutton;


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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->clearbutton = (gcnew System::Windows::Forms::Button());
			this->editbutton = (gcnew System::Windows::Forms::Button());
			this->studno = (gcnew System::Windows::Forms::TextBox());
			this->namebox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->birthcert = (gcnew System::Windows::Forms::CheckBox());
			this->defbox = (gcnew System::Windows::Forms::TextBox());
			this->goodmoral = (gcnew System::Windows::Forms::CheckBox());
			this->updatebutton = (gcnew System::Windows::Forms::Button());
			this->medex = (gcnew System::Windows::Forms::CheckBox());
			this->searchbutton = (gcnew System::Windows::Forms::Button());
			this->form137 = (gcnew System::Windows::Forms::CheckBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->acadyr = (gcnew System::Windows::Forms::ComboBox());
			this->def = (gcnew System::Windows::Forms::ListBox());
			this->viewlistbtn = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->clearbutton);
			this->groupBox1->Controls->Add(this->editbutton);
			this->groupBox1->Controls->Add(this->studno);
			this->groupBox1->Controls->Add(this->namebox);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->birthcert);
			this->groupBox1->Controls->Add(this->defbox);
			this->groupBox1->Controls->Add(this->goodmoral);
			this->groupBox1->Controls->Add(this->updatebutton);
			this->groupBox1->Controls->Add(this->medex);
			this->groupBox1->Controls->Add(this->searchbutton);
			this->groupBox1->Controls->Add(this->form137);
			this->groupBox1->Location = System::Drawing::Point(624, 52);
			this->groupBox1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->groupBox1->Size = System::Drawing::Size(470, 401);
			this->groupBox1->TabIndex = 12;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"DISPLAY";
			// 
			// clearbutton
			// 
			this->clearbutton->Location = System::Drawing::Point(288, 106);
			this->clearbutton->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->clearbutton->Name = L"clearbutton";
			this->clearbutton->Size = System::Drawing::Size(168, 29);
			this->clearbutton->TabIndex = 12;
			this->clearbutton->Text = L"Clear";
			this->clearbutton->UseVisualStyleBackColor = true;
			this->clearbutton->Click += gcnew System::EventHandler(this, &Pendlist::clearbutton_Click);
			// 
			// editbutton
			// 
			this->editbutton->Location = System::Drawing::Point(21, 298);
			this->editbutton->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->editbutton->Name = L"editbutton";
			this->editbutton->Size = System::Drawing::Size(194, 29);
			this->editbutton->TabIndex = 11;
			this->editbutton->Text = L"Edit";
			this->editbutton->UseVisualStyleBackColor = true;
			this->editbutton->Visible = false;
			this->editbutton->Click += gcnew System::EventHandler(this, &Pendlist::editbutton_Click);
			// 
			// studno
			// 
			this->studno->Location = System::Drawing::Point(7, 105);
			this->studno->Name = L"studno";
			this->studno->ReadOnly = true;
			this->studno->Size = System::Drawing::Size(183, 30);
			this->studno->TabIndex = 10;
			// 
			// namebox
			// 
			this->namebox->Location = System::Drawing::Point(21, 31);
			this->namebox->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->namebox->Name = L"namebox";
			this->namebox->Size = System::Drawing::Size(435, 30);
			this->namebox->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(247, 186);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(197, 25);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Number of Deficiency";
			// 
			// birthcert
			// 
			this->birthcert->AutoSize = true;
			this->birthcert->Enabled = false;
			this->birthcert->Location = System::Drawing::Point(7, 152);
			this->birthcert->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->birthcert->Name = L"birthcert";
			this->birthcert->Size = System::Drawing::Size(169, 29);
			this->birthcert->TabIndex = 2;
			this->birthcert->Text = L"Birth Certificate";
			this->birthcert->UseVisualStyleBackColor = true;
			// 
			// defbox
			// 
			this->defbox->Location = System::Drawing::Point(250, 152);
			this->defbox->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->defbox->Name = L"defbox";
			this->defbox->ReadOnly = true;
			this->defbox->Size = System::Drawing::Size(193, 30);
			this->defbox->TabIndex = 8;
			this->defbox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// goodmoral
			// 
			this->goodmoral->AutoSize = true;
			this->goodmoral->Enabled = false;
			this->goodmoral->Location = System::Drawing::Point(7, 188);
			this->goodmoral->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->goodmoral->Name = L"goodmoral";
			this->goodmoral->Size = System::Drawing::Size(232, 29);
			this->goodmoral->TabIndex = 3;
			this->goodmoral->Text = L"Good Moral Certificate";
			this->goodmoral->UseVisualStyleBackColor = true;
			// 
			// updatebutton
			// 
			this->updatebutton->Location = System::Drawing::Point(249, 298);
			this->updatebutton->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->updatebutton->Name = L"updatebutton";
			this->updatebutton->Size = System::Drawing::Size(194, 29);
			this->updatebutton->TabIndex = 7;
			this->updatebutton->Text = L"Update";
			this->updatebutton->UseVisualStyleBackColor = true;
			this->updatebutton->Visible = false;
			this->updatebutton->Click += gcnew System::EventHandler(this, &Pendlist::updatebutton_Click);
			// 
			// medex
			// 
			this->medex->AutoSize = true;
			this->medex->Enabled = false;
			this->medex->Location = System::Drawing::Point(7, 222);
			this->medex->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->medex->Name = L"medex";
			this->medex->Size = System::Drawing::Size(218, 29);
			this->medex->TabIndex = 4;
			this->medex->Text = L"Medical Examination";
			this->medex->UseVisualStyleBackColor = true;
			// 
			// searchbutton
			// 
			this->searchbutton->Location = System::Drawing::Point(288, 69);
			this->searchbutton->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->searchbutton->Name = L"searchbutton";
			this->searchbutton->Size = System::Drawing::Size(168, 29);
			this->searchbutton->TabIndex = 6;
			this->searchbutton->Text = L"Search";
			this->searchbutton->UseVisualStyleBackColor = true;
			this->searchbutton->Click += gcnew System::EventHandler(this, &Pendlist::searchbutton_Click);
			// 
			// form137
			// 
			this->form137->AutoSize = true;
			this->form137->Enabled = false;
			this->form137->Location = System::Drawing::Point(7, 258);
			this->form137->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->form137->Name = L"form137";
			this->form137->Size = System::Drawing::Size(121, 29);
			this->form137->TabIndex = 5;
			this->form137->Text = L"Form 137";
			this->form137->UseVisualStyleBackColor = true;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->acadyr);
			this->panel1->Controls->Add(this->def);
			this->panel1->Controls->Add(this->viewlistbtn);
			this->panel1->Location = System::Drawing::Point(28, 51);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(519, 402);
			this->panel1->TabIndex = 11;
			// 
			// acadyr
			// 
			this->acadyr->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->acadyr->FormattingEnabled = true;
			this->acadyr->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"2018", L"2019", L"2020", L"2021" });
			this->acadyr->Location = System::Drawing::Point(3, 5);
			this->acadyr->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->acadyr->Name = L"acadyr";
			this->acadyr->Size = System::Drawing::Size(118, 33);
			this->acadyr->TabIndex = 3;
			// 
			// def
			// 
			this->def->FormattingEnabled = true;
			this->def->ItemHeight = 25;
			this->def->Location = System::Drawing::Point(128, 5);
			this->def->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->def->Name = L"def";
			this->def->Size = System::Drawing::Size(365, 379);
			this->def->TabIndex = 2;
			this->def->SelectedIndexChanged += gcnew System::EventHandler(this, &Pendlist::def_SelectedIndexChanged);
			// 
			// viewlistbtn
			// 
			this->viewlistbtn->Location = System::Drawing::Point(3, 56);
			this->viewlistbtn->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->viewlistbtn->Name = L"viewlistbtn";
			this->viewlistbtn->Size = System::Drawing::Size(118, 29);
			this->viewlistbtn->TabIndex = 0;
			this->viewlistbtn->Text = L"View list";
			this->viewlistbtn->UseVisualStyleBackColor = true;
			this->viewlistbtn->Click += gcnew System::EventHandler(this, &Pendlist::button1_Click);
			// 
			// Pendlist
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1178, 544);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Pendlist";
			this->Text = L"Pending List";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		fstream myFile;
		String ^getyear = acadyr->Text;
		string yr = stringconversion(getyear);
		def->Items->Clear();
		myFile.open("Database\\"+ yr +  "\\pending\\pendinglist.txt", ios::in);
		string line;
		vector<string> VecToDisp;
		vector<string>::iterator ToDisp_ptr;
		string OutToDisp;
		while (getline(myFile, line, '\n'))
		{
			VecToDisp.push_back(line);
		}
		for (ToDisp_ptr = VecToDisp.begin(); ToDisp_ptr != VecToDisp.end(); ToDisp_ptr++)
		{
			OutToDisp = *ToDisp_ptr;
			String ^wow = Convert::ToString(line.c_str());
			this->def->Items->Add(gcnew String(OutToDisp.c_str()));
		}
	}

private: System::Void def_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	namebox->Text = def->Text;
	fstream file;
	string name = stringconversion(namebox->Text);
	string yr = stringconversion(acadyr->Text);
	string studnum;
	string str;
	vector<string> get;
	file.open("Database\\" + yr + "\\allstudents\\" + name + ".txt", ios::in);
	getline(file, studnum);
	file.close();

	studno->Text = systemstring(studnum);

	file.open("Database\\" + yr + "\\pending\\" + studnum + ".txt", ios::in);
	if (file.is_open())
	{
		while (getline(file, str))
		{
			get.push_back(str);
		}

		defbox->Text = systemstring(get[0]);
		if (get[1] == "True")
		{
			birthcert->Checked = 1;
		}
		if (get[2] == "True")
		{
			goodmoral->Checked = 1;
		}
		if (get[3] == "True")
		{
			medex->Checked = 1;
		}
		if (get[4] == "True")
		{
			form137->Checked = 1;
		}
	}
	else
	{
		MessageBox::Show("Student not found!");
	}

	editbutton->Visible = 1;
}

private: System::Void searchbutton_Click(System::Object^  sender, System::EventArgs^  e) {
	fstream file;
	string name = stringconversion(namebox->Text);
	string yr = stringconversion(acadyr->Text);
	string studnum;
	string str;
	vector<string> get;
	file.open("Database\\" + yr + "\\allstudents\\" + name + ".txt", ios::in);
	getline(file, studnum);
	file.close();

	studno->Text = systemstring(studnum);

	file.open("Database\\" + yr + "\\pending\\" + studnum + ".txt", ios::in);
	if (file.is_open())
	{
		while (getline(file, str))
		{
			get.push_back(str);
		}

		defbox->Text = systemstring(get[0]);
		if (get[1] == "True")
		{
			birthcert->Checked = 1;
		}
		if (get[2] == "True")
		{
			goodmoral->Checked = 1;
		}
		if (get[3] == "True")
		{
			medex->Checked = 1;
		}
		if (get[4] == "True")
		{
			form137->Checked = 1;
		}
		editbutton->Visible = 1;
	}
	else
	{
		MessageBox::Show("Student not found!");
		defbox->Clear();
		editbutton->Visible = 0;
	}
	
}
private: System::Void updatebutton_Click(System::Object^  sender, System::EventArgs^  e) {
	fstream file;
	vector<string> vect;
	string check[10];
	string name = stringconversion(namebox->Text);
	string studnum = stringconversion(studno->Text);
	string yr = stringconversion(acadyr->Text);
	int deficiency = 0;

	if (birthcert->Checked == 1)
		check[1] = "True";
	else
	{
		check[1] = "False";
		deficiency++;
	}
	if (goodmoral->Checked == 1)
		check[2] = "True";
	else
	{
		check[2] = "False";
		deficiency++;
	}
	if (medex->Checked == 1)
		check[3] = "True";
	else
	{
		check[3] = "False";
		deficiency++;
	}
	if (form137->Checked == 1)
		check[4] = "True";
	else
	{
		check[4] = "False";
		deficiency++;
	}
	if (deficiency == 0)
	{
		defbox->Text = "0";
		file.open("Database\\" + yr + "\\pending\\pendinglist.txt", ios::in);
		string temp[5];
		int i = 0, n = 0;
		while (getline(file, temp[i]))
		{
			i++;
			n++;
		}
		file.close();
		file.open("Database\\" + yr + "\\pending\\pendinglist.txt", ios::out);
		for (i = 0; i < n ;i++)
		{
			if (temp[i] != name)
			{
				file << temp[i] << endl;
			}
		}
		file.close();

		string str;
		string oldfile = "Database\\" + yr + "\\pending\\" + studnum + ".txt";
		remove(oldfile.c_str());
		vector<string> data;

		file.open("Database\\" + yr + "\\allstudents\\" + name + ".txt", ios::in);
		while (getline(file, str))
		{
			data.push_back(str);
		}
		file.close();

		file.open("Database\\" + yr + "\\allstudents\\" + name + ".txt", ios::out);
		for (i = 0; i < 16; i++)
		{
			if (data[i] != "False")
			{
				file << data[i] << endl;
			}
			else
			{
				file << "True" << endl;
			}
		}
		file.close();
		MessageBox::Show("Update Complete!");

	}
	else
	{
		std::stringstream ss;
		ss << deficiency;
		check[0] = ss.str();
		string str;
		vector<string> data;
		int i;
		defbox->Text = systemstring(check[0]);
		
		file.open("Database\\" + yr + "\\pending\\" + studnum + ".txt", ios::out);
		{
			for (i = 0; i < 5; i++)
			{
				file << check[i] << endl;
			}
		}
		file.close();

		file.open("Database\\" + yr + "\\allstudents\\" + name + ".txt", ios::in);
		while (getline(file, str))
		{
			data.push_back(str);
		}
		file.close();

		file.open("Database\\" + yr + "\\allstudents\\" + name + ".txt", ios::out);
		for (i = 0; i < 12; i++)
		{
			file << data[i] << endl;
		}
		for( i = 1;i < 5; i++)
		{
			file << check[i] << endl;
		}

		file.close();
		MessageBox::Show("Update Success!");
	}
	updatebutton->Visible = 0;
	birthcert->Enabled = 0;
	goodmoral->Enabled = 0;
	medex->Enabled = 0;
	form137->Enabled = 0;
	clearbutton->Visible = 1;
	searchbutton->Visible = 1;
	namebox->Enabled = 1;
	acadyr->Enabled = 1;
	editbutton->Visible = 0;

}
private: System::Void editbutton_Click(System::Object^  sender, System::EventArgs^  e) {
	birthcert->Enabled = 1;
	goodmoral->Enabled = 1;
	medex->Enabled = 1;
	form137->Enabled = 1;
	updatebutton->Visible = 1;
	acadyr->Enabled = 0;
	namebox->Enabled = 0;
	clearbutton->Visible = 0;
	searchbutton->Visible = 0;
}
private: System::Void clearbutton_Click(System::Object^  sender, System::EventArgs^  e) {
	acadyr->SelectedIndex = -1;
	namebox->Clear();
	studno->Clear();
	def->Items->Clear();
	birthcert->Checked = 0;
	goodmoral->Checked = 0;
	medex->Checked = 0;
	form137->Checked = 0;
	defbox->Clear();
	editbutton->Visible = 0;
}
};
}
