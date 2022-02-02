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
	/// Summary for Studlist
	/// </summary>
	public ref class Studlist : public System::Windows::Forms::Form
	{
	public:
		Form ^obj;
		Studlist(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Studlist(Form ^obj1)
		{
			obj = obj1;
			InitializeComponent();
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Studlist()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  searchbox;
	protected:
	private: System::Windows::Forms::Button^  searchbutton;
	private: System::Windows::Forms::ComboBox^  sybox;
	private: System::Windows::Forms::ComboBox^  sex;
	private: System::Windows::Forms::Label^  sexlabel;
	private: System::Windows::Forms::TextBox^  citizen;
	private: System::Windows::Forms::Label^  citizenshiplabel;
	private: System::Windows::Forms::Label^  contactnolabel;
	private: System::Windows::Forms::TextBox^  contactno;
	private: System::Windows::Forms::Label^  Addresslabel;
	private: System::Windows::Forms::TextBox^  address;
	private: System::Windows::Forms::Label^  civilstatuslabel;
	private: System::Windows::Forms::ComboBox^  civilstatus;
	private: System::Windows::Forms::Label^  bdaylabel;

	private: System::Windows::Forms::Label^  snlabel;
	private: System::Windows::Forms::Label^  mnlabel;
	private: System::Windows::Forms::Label^  fnlabel;
	private: System::Windows::Forms::TextBox^  surname;
	private: System::Windows::Forms::TextBox^  middlename;
	private: System::Windows::Forms::TextBox^  firstname;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  editbutton;
	private: System::Windows::Forms::Button^  updatebutton;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  studno;
	private: System::Windows::Forms::ErrorProvider^  error;
	private: System::Windows::Forms::Button^  clearbutton;
	private: System::Windows::Forms::ErrorProvider^  error1;
	private: System::Windows::Forms::ErrorProvider^  error2;
	private: System::Windows::Forms::ErrorProvider^  error3;
	private: System::Windows::Forms::ErrorProvider^  error4;
	private: System::Windows::Forms::DateTimePicker^  bdaypicker;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->searchbox = (gcnew System::Windows::Forms::TextBox());
			this->searchbutton = (gcnew System::Windows::Forms::Button());
			this->sybox = (gcnew System::Windows::Forms::ComboBox());
			this->sex = (gcnew System::Windows::Forms::ComboBox());
			this->sexlabel = (gcnew System::Windows::Forms::Label());
			this->citizen = (gcnew System::Windows::Forms::TextBox());
			this->citizenshiplabel = (gcnew System::Windows::Forms::Label());
			this->contactnolabel = (gcnew System::Windows::Forms::Label());
			this->contactno = (gcnew System::Windows::Forms::TextBox());
			this->Addresslabel = (gcnew System::Windows::Forms::Label());
			this->address = (gcnew System::Windows::Forms::TextBox());
			this->civilstatuslabel = (gcnew System::Windows::Forms::Label());
			this->civilstatus = (gcnew System::Windows::Forms::ComboBox());
			this->bdaylabel = (gcnew System::Windows::Forms::Label());
			this->snlabel = (gcnew System::Windows::Forms::Label());
			this->mnlabel = (gcnew System::Windows::Forms::Label());
			this->fnlabel = (gcnew System::Windows::Forms::Label());
			this->surname = (gcnew System::Windows::Forms::TextBox());
			this->middlename = (gcnew System::Windows::Forms::TextBox());
			this->firstname = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->editbutton = (gcnew System::Windows::Forms::Button());
			this->updatebutton = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->studno = (gcnew System::Windows::Forms::TextBox());
			this->error = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->clearbutton = (gcnew System::Windows::Forms::Button());
			this->error1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->error2 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->error3 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->error4 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->bdaypicker = (gcnew System::Windows::Forms::DateTimePicker());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->error))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->error1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->error2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->error3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->error4))->BeginInit();
			this->SuspendLayout();
			// 
			// searchbox
			// 
			this->searchbox->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->searchbox->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::CustomSource;
			this->searchbox->Location = System::Drawing::Point(383, 47);
			this->searchbox->Name = L"searchbox";
			this->searchbox->Size = System::Drawing::Size(395, 30);
			this->searchbox->TabIndex = 0;
			// 
			// searchbutton
			// 
			this->searchbutton->Location = System::Drawing::Point(822, 39);
			this->searchbutton->Name = L"searchbutton";
			this->searchbutton->Size = System::Drawing::Size(147, 47);
			this->searchbutton->TabIndex = 1;
			this->searchbutton->Text = L"Search";
			this->searchbutton->UseVisualStyleBackColor = true;
			this->searchbutton->Click += gcnew System::EventHandler(this, &Studlist::searchbutton_Click);
			// 
			// sybox
			// 
			this->sybox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->sybox->FormattingEnabled = true;
			this->sybox->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"2018", L"2019", L"2020", L"2021" });
			this->sybox->Location = System::Drawing::Point(226, 47);
			this->sybox->Name = L"sybox";
			this->sybox->Size = System::Drawing::Size(151, 33);
			this->sybox->TabIndex = 2;
			// 
			// sex
			// 
			this->sex->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->sex->Enabled = false;
			this->sex->FormattingEnabled = true;
			this->sex->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Male", L"Female" });
			this->sex->Location = System::Drawing::Point(784, 337);
			this->sex->Margin = System::Windows::Forms::Padding(2, 5, 2, 5);
			this->sex->Name = L"sex";
			this->sex->Size = System::Drawing::Size(136, 33);
			this->sex->TabIndex = 65;
			// 
			// sexlabel
			// 
			this->sexlabel->AutoSize = true;
			this->sexlabel->Location = System::Drawing::Point(659, 337);
			this->sexlabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->sexlabel->Name = L"sexlabel";
			this->sexlabel->Size = System::Drawing::Size(47, 25);
			this->sexlabel->TabIndex = 64;
			this->sexlabel->Text = L"Sex";
			// 
			// citizen
			// 
			this->citizen->Location = System::Drawing::Point(784, 200);
			this->citizen->Margin = System::Windows::Forms::Padding(2, 5, 2, 5);
			this->citizen->Name = L"citizen";
			this->citizen->ReadOnly = true;
			this->citizen->Size = System::Drawing::Size(214, 30);
			this->citizen->TabIndex = 63;
			// 
			// citizenshiplabel
			// 
			this->citizenshiplabel->AutoSize = true;
			this->citizenshiplabel->Location = System::Drawing::Point(660, 200);
			this->citizenshiplabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->citizenshiplabel->Name = L"citizenshiplabel";
			this->citizenshiplabel->Size = System::Drawing::Size(108, 25);
			this->citizenshiplabel->TabIndex = 62;
			this->citizenshiplabel->Text = L"Citizenship";
			// 
			// contactnolabel
			// 
			this->contactnolabel->AutoSize = true;
			this->contactnolabel->Location = System::Drawing::Point(660, 156);
			this->contactnolabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->contactnolabel->Name = L"contactnolabel";
			this->contactnolabel->Size = System::Drawing::Size(112, 25);
			this->contactnolabel->TabIndex = 61;
			this->contactnolabel->Text = L"Contact no.";
			// 
			// contactno
			// 
			this->contactno->Location = System::Drawing::Point(784, 153);
			this->contactno->Margin = System::Windows::Forms::Padding(2, 5, 2, 5);
			this->contactno->Name = L"contactno";
			this->contactno->ReadOnly = true;
			this->contactno->Size = System::Drawing::Size(214, 30);
			this->contactno->TabIndex = 60;
			// 
			// Addresslabel
			// 
			this->Addresslabel->AutoSize = true;
			this->Addresslabel->Location = System::Drawing::Point(51, 344);
			this->Addresslabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Addresslabel->Name = L"Addresslabel";
			this->Addresslabel->Size = System::Drawing::Size(85, 25);
			this->Addresslabel->TabIndex = 59;
			this->Addresslabel->Text = L"Address";
			// 
			// address
			// 
			this->address->Location = System::Drawing::Point(175, 344);
			this->address->Margin = System::Windows::Forms::Padding(2, 5, 2, 5);
			this->address->Name = L"address";
			this->address->ReadOnly = true;
			this->address->Size = System::Drawing::Size(347, 30);
			this->address->TabIndex = 58;
			// 
			// civilstatuslabel
			// 
			this->civilstatuslabel->AutoSize = true;
			this->civilstatuslabel->Location = System::Drawing::Point(659, 293);
			this->civilstatuslabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->civilstatuslabel->Name = L"civilstatuslabel";
			this->civilstatuslabel->Size = System::Drawing::Size(110, 25);
			this->civilstatuslabel->TabIndex = 57;
			this->civilstatuslabel->Text = L"Civil Status";
			// 
			// civilstatus
			// 
			this->civilstatus->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->civilstatus->Enabled = false;
			this->civilstatus->FormattingEnabled = true;
			this->civilstatus->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Single ", L"Married" });
			this->civilstatus->Location = System::Drawing::Point(784, 293);
			this->civilstatus->Margin = System::Windows::Forms::Padding(2, 5, 2, 5);
			this->civilstatus->Name = L"civilstatus";
			this->civilstatus->Size = System::Drawing::Size(136, 33);
			this->civilstatus->TabIndex = 56;
			// 
			// bdaylabel
			// 
			this->bdaylabel->AutoSize = true;
			this->bdaylabel->Location = System::Drawing::Point(660, 249);
			this->bdaylabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->bdaylabel->Name = L"bdaylabel";
			this->bdaylabel->Size = System::Drawing::Size(97, 25);
			this->bdaylabel->TabIndex = 55;
			this->bdaylabel->Text = L"Birth Date";
			// 
			// snlabel
			// 
			this->snlabel->AutoSize = true;
			this->snlabel->Location = System::Drawing::Point(51, 296);
			this->snlabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->snlabel->Name = L"snlabel";
			this->snlabel->Size = System::Drawing::Size(92, 25);
			this->snlabel->TabIndex = 53;
			this->snlabel->Text = L"Surname";
			// 
			// mnlabel
			// 
			this->mnlabel->AutoSize = true;
			this->mnlabel->Location = System::Drawing::Point(50, 255);
			this->mnlabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->mnlabel->Name = L"mnlabel";
			this->mnlabel->Size = System::Drawing::Size(119, 25);
			this->mnlabel->TabIndex = 52;
			this->mnlabel->Text = L"Middlename";
			// 
			// fnlabel
			// 
			this->fnlabel->AutoSize = true;
			this->fnlabel->Location = System::Drawing::Point(51, 207);
			this->fnlabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->fnlabel->Name = L"fnlabel";
			this->fnlabel->Size = System::Drawing::Size(98, 25);
			this->fnlabel->TabIndex = 51;
			this->fnlabel->Text = L"Firstname";
			// 
			// surname
			// 
			this->surname->Location = System::Drawing::Point(175, 296);
			this->surname->Margin = System::Windows::Forms::Padding(2, 5, 2, 5);
			this->surname->Name = L"surname";
			this->surname->ReadOnly = true;
			this->surname->Size = System::Drawing::Size(347, 30);
			this->surname->TabIndex = 50;
			// 
			// middlename
			// 
			this->middlename->Location = System::Drawing::Point(175, 251);
			this->middlename->Margin = System::Windows::Forms::Padding(2, 5, 2, 5);
			this->middlename->Name = L"middlename";
			this->middlename->ReadOnly = true;
			this->middlename->Size = System::Drawing::Size(347, 30);
			this->middlename->TabIndex = 49;
			// 
			// firstname
			// 
			this->firstname->Location = System::Drawing::Point(175, 204);
			this->firstname->Margin = System::Windows::Forms::Padding(2, 5, 2, 5);
			this->firstname->Name = L"firstname";
			this->firstname->ReadOnly = true;
			this->firstname->Size = System::Drawing::Size(347, 30);
			this->firstname->TabIndex = 48;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(221, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(145, 25);
			this->label1->TabIndex = 66;
			this->label1->Text = L"Academic Year";
			// 
			// editbutton
			// 
			this->editbutton->Location = System::Drawing::Point(642, 443);
			this->editbutton->Name = L"editbutton";
			this->editbutton->Size = System::Drawing::Size(115, 52);
			this->editbutton->TabIndex = 67;
			this->editbutton->Text = L"Edit";
			this->editbutton->UseVisualStyleBackColor = true;
			this->editbutton->Visible = false;
			this->editbutton->Click += gcnew System::EventHandler(this, &Studlist::editbutton_Click);
			// 
			// updatebutton
			// 
			this->updatebutton->Location = System::Drawing::Point(493, 443);
			this->updatebutton->Name = L"updatebutton";
			this->updatebutton->Size = System::Drawing::Size(115, 52);
			this->updatebutton->TabIndex = 68;
			this->updatebutton->Text = L"Update";
			this->updatebutton->UseVisualStyleBackColor = true;
			this->updatebutton->Visible = false;
			this->updatebutton->Click += gcnew System::EventHandler(this, &Studlist::updatebutton_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(50, 159);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(110, 25);
			this->label2->TabIndex = 69;
			this->label2->Text = L"Student No";
			// 
			// studno
			// 
			this->studno->Location = System::Drawing::Point(175, 156);
			this->studno->Margin = System::Windows::Forms::Padding(2, 5, 2, 5);
			this->studno->Name = L"studno";
			this->studno->ReadOnly = true;
			this->studno->Size = System::Drawing::Size(347, 30);
			this->studno->TabIndex = 70;
			// 
			// error
			// 
			this->error->ContainerControl = this;
			this->error->RightToLeft = true;
			// 
			// clearbutton
			// 
			this->clearbutton->Location = System::Drawing::Point(980, 39);
			this->clearbutton->Name = L"clearbutton";
			this->clearbutton->Size = System::Drawing::Size(147, 47);
			this->clearbutton->TabIndex = 71;
			this->clearbutton->Text = L"Clear";
			this->clearbutton->UseVisualStyleBackColor = true;
			this->clearbutton->Click += gcnew System::EventHandler(this, &Studlist::clearbutton_Click);
			// 
			// error1
			// 
			this->error1->ContainerControl = this;
			// 
			// error2
			// 
			this->error2->ContainerControl = this;
			// 
			// error3
			// 
			this->error3->ContainerControl = this;
			// 
			// error4
			// 
			this->error4->ContainerControl = this;
			// 
			// bdaypicker
			// 
			this->bdaypicker->Enabled = false;
			this->bdaypicker->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->bdaypicker->Location = System::Drawing::Point(784, 249);
			this->bdaypicker->Name = L"bdaypicker";
			this->bdaypicker->Size = System::Drawing::Size(136, 30);
			this->bdaypicker->TabIndex = 72;
			// 
			// Studlist
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1228, 594);
			this->Controls->Add(this->bdaypicker);
			this->Controls->Add(this->clearbutton);
			this->Controls->Add(this->studno);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->updatebutton);
			this->Controls->Add(this->editbutton);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->sex);
			this->Controls->Add(this->sexlabel);
			this->Controls->Add(this->citizen);
			this->Controls->Add(this->citizenshiplabel);
			this->Controls->Add(this->contactnolabel);
			this->Controls->Add(this->contactno);
			this->Controls->Add(this->Addresslabel);
			this->Controls->Add(this->address);
			this->Controls->Add(this->civilstatuslabel);
			this->Controls->Add(this->civilstatus);
			this->Controls->Add(this->bdaylabel);
			this->Controls->Add(this->snlabel);
			this->Controls->Add(this->mnlabel);
			this->Controls->Add(this->fnlabel);
			this->Controls->Add(this->surname);
			this->Controls->Add(this->middlename);
			this->Controls->Add(this->firstname);
			this->Controls->Add(this->sybox);
			this->Controls->Add(this->searchbutton);
			this->Controls->Add(this->searchbox);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Studlist";
			this->Text = L"Student List";
			this->Load += gcnew System::EventHandler(this, &Studlist::Studlist_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->error))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->error1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->error2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->error3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->error4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Studlist_Load(System::Object^  sender, System::EventArgs^  e) {
		fstream file;
		String ^str;
		string str1;

		file.open("Database\\Masterlist.txt", ios::in);
		while (getline(file, str1))
		{
			str = gcnew String(str1.c_str());
			searchbox->AutoCompleteCustomSource->Add(str);
		}
		file.close();
	}
	private: System::Void searchbutton_Click(System::Object^  sender, System::EventArgs^  e) {

		if (sybox->Text == "")
		{
			error->SetError(sybox, "Enter academic year");
		}
		else
		{
			fstream file;
			String^ getname = searchbox->Text;
			String^ getyr = sybox->Text;
			string name = stringconversion(getname);
			string yr = stringconversion(getyr);

			file.open("Database\\" + yr + "\\allstudents\\" + name + ".txt", ios::in);
			if (file.is_open())
			{
				cli::array<String^>^ arr = gcnew cli::array<String^>(30);
				vector<string> vect;
				vect.clear();
				string str;
				int i;
				for(i=0;i<10;i++)
				{
					getline(file, str);
					vect.push_back(str);
				}
				for (i = 0; i < 10; i++)
				{
					arr[i] = systemstring(vect[i]);
				}

				studno->Text = arr[0];
				firstname->Text = arr[1];
				middlename->Text = arr[2];
				surname->Text = arr[3];
				bdaypicker->Text = arr[4];
				civilstatus->Text = arr[5];
				sex->Text = arr[6];
				address->Text = arr[7];
				contactno->Text = arr[8];
				citizen->Text = arr[9];

				editbutton->Visible = 1;
			}
			else 
			{
				MessageBox::Show("Student not found!");
			}
		}
	}
private: System::Void editbutton_Click(System::Object^  sender, System::EventArgs^  e) {
	updatebutton->Visible = 1;
	searchbox->Enabled = 0;
	sybox->Enabled = 0;
	firstname->ReadOnly = 0;
	middlename->ReadOnly = 0;
	surname->ReadOnly = 0;
	address->ReadOnly = 0;
	citizen->ReadOnly = 0;
	contactno->ReadOnly = 0;
	bdaypicker->Enabled = 1;
	civilstatus->Enabled = 1;
	sex->Enabled = 1;
	clearbutton->Enabled = 0;
	searchbutton->Enabled = 0;
}
private: System::Void clearbutton_Click(System::Object^  sender, System::EventArgs^  e) {
	studno->Clear();
	searchbox->Clear();
	firstname->Clear();
	middlename->Clear();
	surname->Clear();
	address->Clear();
	contactno->Clear();
	citizen->Clear();
	sybox->SelectedIndex = -1;
	sex->SelectedIndex = -1;
	civilstatus->SelectedIndex = -1;
	editbutton->Visible = 0;
}
private: System::Void updatebutton_Click(System::Object^  sender, System::EventArgs^  e) {
	int error[10];
	if (firstname->Text == "" || middlename->Text == "" || surname->Text == "" || address->Text == "" || contactno->Text == "" || citizen->Text == "")
	{
		MessageBox::Show("Fill all informations");
	}
	else
	{
		int i;
		vector<string> vect;
		vect.clear();
		vector<string> oldvect;
		oldvect.clear();
		cli::array<String^>^ arr = gcnew cli::array<String^>(30);
		arr[0] = studno->Text;
		arr[1] = firstname->Text;
		arr[2] = middlename->Text;
		arr[3] = surname->Text;
		arr[4] = bdaypicker->Text;
		arr[5] = civilstatus->Text;
		arr[6] = sex->Text;
		arr[7] = address->Text;
		arr[8] = contactno->Text;
		arr[9] = citizen->Text;
		
		String ^temp;
		for (i = 0; i < 10; i++)
		{
			temp = arr[i];
			vect.push_back(stringconversion(temp));
		}

		if (has_any_digits(vect[1]) == true)
		{
			error1->SetError(firstname, "Must not cpontain any numbers");
			error[0] = 1;
		}
		else
		{
			error1->Clear();
			error[0] = 0;
		}
		if (has_any_digits(vect[2]) == true)
		{
			error2->SetError(middlename, "Must not contain any numbers!");
			error[1] = 1;
		}
		else
		{
			error2->Clear();
			error[1] = 0;
		}
		if (has_any_digits(vect[3]) == true)
		{
			error3->SetError(surname, "Must not contain any numbers!");
			error[2] = 1;
		}
		else
		{
			error3->Clear();
			error[2] = 0;
		}
		if (has_any_char(contactno->Text) == true)
		{
			error4->SetError(contactno, "Must not containa any letters!");
			error[3] = 1;
		}
		else
		{
			error4->Clear();
			error[3] = 0;
		}
		if (errorchk(error, 4) == 0)
		{
			fstream file;
			string temp1;
			string yr = stringconversion(sybox->Text);
			string name = stringconversion(searchbox->Text);
			file.open("Database\\" + yr + "\\allstudents\\" + name + ".txt", ios::in);
			while (getline(file, temp1))
			{
				oldvect.push_back(temp1);
			}
			file.close();

			string newname = vect[3] + " " + vect[1];
			if (newname == name)
			{
				file.open("Database\\" + yr + "\\allstudents\\" + name + ".txt", ios::out);
				for (i = 0; i < 10; i++)
				{
					file << vect[i] << endl;
				}
				for (i = 10; i < 16; i++)
				{
					file << oldvect[i] << endl;
				}
				file.close();
				MessageBox::Show("Update Complete!");

			}
			else
			{
				int count = 0;
				vector<string> update;

				file.open("Database\\" + yr + "\\allstudents\\" + newname + ".txt", ios::out);
				for (i = 0; i < 10; i++)
				{
					file << vect[i] << endl;
				}
				for (i = 10; i < 16; i++)
				{
					file << oldvect[i] << endl;
				}
				file.close();

				string oldfile = "Database\\" + yr + "\\allstudents\\" + name + ".txt";
				remove(oldfile.c_str());

				file.open("Database\\Masterlist.txt", ios::in);
				while (getline(file, temp1))
				{
					update.push_back(temp1);
					count++;
				}
				file.close();

				file.open("Database\\Masterlist.txt", ios::out);
				for (i = 0; i < count; i++)
				{
					if (name == update[i])
						file << newname << endl;
					else
						file << update[i] << endl;
				}
				file.close();

				vector <string> upend;
				file.open("Database\\" + yr + "\\pending\\pendinglist.txt", ios::in);
				count = 0;
				while (getline(file, temp1))
				{
					upend.push_back(temp1);
					count++ ;
				}
				file.close();

				file.open("Database\\" + yr + "\\pending\\pendinglist.txt", ios::out);
				for (i = 0; i < count; i++)
				{
					if (name == upend[i])
					{
						file << newname << endl;
					}
					else
					{
						file << upend[i] << endl;
					}
				}
				file.close();
				MessageBox::Show("Update Complete!");
			}
			updatebutton->Visible = 0;
			searchbox->Enabled = 1;
			sybox->Enabled = 1;
			firstname->ReadOnly = 1;
			middlename->ReadOnly = 1;
			surname->ReadOnly = 1;
			address->ReadOnly = 1;
			citizen->ReadOnly = 1;
			contactno->ReadOnly = 1;
			bdaypicker->Enabled = 0;
			civilstatus->Enabled = 0;
			sex->Enabled = 0;
			clearbutton->Enabled = 1;
			searchbutton->Enabled = 1;
		}
	}
}
};
}
