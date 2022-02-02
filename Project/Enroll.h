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
	/// Summary for Enroll
	/// </summary>
	public ref class Enroll : public System::Windows::Forms::Form
	{
	public:
		Form ^obj;

		Enroll(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Enroll(Form ^obj1)
		{
			obj = obj1;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Enroll()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^  tabPage1;

	private: System::Windows::Forms::ComboBox^  section;
	private: System::Windows::Forms::ComboBox^  yearlevel;
	private: System::Windows::Forms::ComboBox^  schoolyear;
	private: System::Windows::Forms::Label^  sectionlabel;
	private: System::Windows::Forms::Label^  yearlabel;
	private: System::Windows::Forms::Label^  Acadyrlabel;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::Button^  enrollbutton;
	private: System::Windows::Forms::Label^  requirementslabel;
	private: System::Windows::Forms::GroupBox^  requirements;
	private: System::Windows::Forms::CheckBox^  birthcert;
	private: System::Windows::Forms::CheckBox^  form137;
	private: System::Windows::Forms::CheckBox^  goodmoralcert;
	private: System::Windows::Forms::CheckBox^  medex;
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
	private: System::Windows::Forms::DateTimePicker^  bdaypicker;
	private: System::Windows::Forms::Label^  snlabel;
	private: System::Windows::Forms::Label^  mnlabel;
	private: System::Windows::Forms::Label^  fnlabel;
	private: System::Windows::Forms::TextBox^  surname;

	private: System::Windows::Forms::TextBox^  middlename;

	private: System::Windows::Forms::TextBox^  firstname;
	private: System::Windows::Forms::ErrorProvider^  fnameerror;
	private: System::Windows::Forms::ErrorProvider^  mnameerror;
	private: System::Windows::Forms::ErrorProvider^  snameerror;
	private: System::Windows::Forms::ErrorProvider^  cnerror;



	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label15;

	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Button^  clearbutton;
	private: System::Windows::Forms::Button^  searchbutton;
	private: System::Windows::Forms::TextBox^  searchbox;
	private: System::Windows::Forms::ComboBox^  yearsearch;
	private: System::Windows::Forms::Label^  label3;

	private: System::Windows::Forms::Label^  label17;

	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::ComboBox^  newsect;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  enrollbutton2;
	private: System::Windows::Forms::Label^  reqlbl;


	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::CheckBox^  shwbirthcert;
	private: System::Windows::Forms::CheckBox^  shwform137;


private: System::Windows::Forms::CheckBox^  shwgoodmoral;
private: System::Windows::Forms::CheckBox^  shwmedex;



private: System::Windows::Forms::Label^  label2;
private: System::Windows::Forms::TextBox^  shwgrade;
private: System::Windows::Forms::TextBox^  shwstudnum;
private: System::Windows::Forms::TextBox^  shwfname;
private: System::Windows::Forms::TextBox^  shwmname;
private: System::Windows::Forms::TextBox^  shwsname;
private: System::Windows::Forms::TextBox^  shwcsect;
private: System::Windows::Forms::TextBox^  shwcyrlvl;
private: System::Windows::Forms::Label^  label7;
private: System::Windows::Forms::Label^  label5;
private: System::Windows::Forms::Label^  label4;
private: System::Windows::Forms::Label^  label8;
private: System::Windows::Forms::TextBox^  newyrlvl;
private: System::Windows::Forms::TextBox^  newacadyr;
private: System::Windows::Forms::ErrorProvider^  error;












































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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->requirementslabel = (gcnew System::Windows::Forms::Label());
			this->requirements = (gcnew System::Windows::Forms::GroupBox());
			this->birthcert = (gcnew System::Windows::Forms::CheckBox());
			this->form137 = (gcnew System::Windows::Forms::CheckBox());
			this->goodmoralcert = (gcnew System::Windows::Forms::CheckBox());
			this->medex = (gcnew System::Windows::Forms::CheckBox());
			this->enrollbutton = (gcnew System::Windows::Forms::Button());
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
			this->bdaypicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->snlabel = (gcnew System::Windows::Forms::Label());
			this->mnlabel = (gcnew System::Windows::Forms::Label());
			this->fnlabel = (gcnew System::Windows::Forms::Label());
			this->surname = (gcnew System::Windows::Forms::TextBox());
			this->middlename = (gcnew System::Windows::Forms::TextBox());
			this->firstname = (gcnew System::Windows::Forms::TextBox());
			this->section = (gcnew System::Windows::Forms::ComboBox());
			this->yearlevel = (gcnew System::Windows::Forms::ComboBox());
			this->schoolyear = (gcnew System::Windows::Forms::ComboBox());
			this->sectionlabel = (gcnew System::Windows::Forms::Label());
			this->yearlabel = (gcnew System::Windows::Forms::Label());
			this->Acadyrlabel = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->newyrlvl = (gcnew System::Windows::Forms::TextBox());
			this->newacadyr = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->shwcsect = (gcnew System::Windows::Forms::TextBox());
			this->shwcyrlvl = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->shwgrade = (gcnew System::Windows::Forms::TextBox());
			this->shwstudnum = (gcnew System::Windows::Forms::TextBox());
			this->shwfname = (gcnew System::Windows::Forms::TextBox());
			this->shwmname = (gcnew System::Windows::Forms::TextBox());
			this->shwsname = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->enrollbutton2 = (gcnew System::Windows::Forms::Button());
			this->reqlbl = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->shwbirthcert = (gcnew System::Windows::Forms::CheckBox());
			this->shwform137 = (gcnew System::Windows::Forms::CheckBox());
			this->shwgoodmoral = (gcnew System::Windows::Forms::CheckBox());
			this->shwmedex = (gcnew System::Windows::Forms::CheckBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->newsect = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->clearbutton = (gcnew System::Windows::Forms::Button());
			this->searchbutton = (gcnew System::Windows::Forms::Button());
			this->searchbox = (gcnew System::Windows::Forms::TextBox());
			this->yearsearch = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->fnameerror = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->mnameerror = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->snameerror = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->cnerror = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->error = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->requirements->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fnameerror))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mnameerror))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->snameerror))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cnerror))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->error))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(12, 12);
			this->tabControl1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1154, 521);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->requirementslabel);
			this->tabPage1->Controls->Add(this->requirements);
			this->tabPage1->Controls->Add(this->enrollbutton);
			this->tabPage1->Controls->Add(this->sex);
			this->tabPage1->Controls->Add(this->sexlabel);
			this->tabPage1->Controls->Add(this->citizen);
			this->tabPage1->Controls->Add(this->citizenshiplabel);
			this->tabPage1->Controls->Add(this->contactnolabel);
			this->tabPage1->Controls->Add(this->contactno);
			this->tabPage1->Controls->Add(this->Addresslabel);
			this->tabPage1->Controls->Add(this->address);
			this->tabPage1->Controls->Add(this->civilstatuslabel);
			this->tabPage1->Controls->Add(this->civilstatus);
			this->tabPage1->Controls->Add(this->bdaylabel);
			this->tabPage1->Controls->Add(this->bdaypicker);
			this->tabPage1->Controls->Add(this->snlabel);
			this->tabPage1->Controls->Add(this->mnlabel);
			this->tabPage1->Controls->Add(this->fnlabel);
			this->tabPage1->Controls->Add(this->surname);
			this->tabPage1->Controls->Add(this->middlename);
			this->tabPage1->Controls->Add(this->firstname);
			this->tabPage1->Controls->Add(this->section);
			this->tabPage1->Controls->Add(this->yearlevel);
			this->tabPage1->Controls->Add(this->schoolyear);
			this->tabPage1->Controls->Add(this->sectionlabel);
			this->tabPage1->Controls->Add(this->yearlabel);
			this->tabPage1->Controls->Add(this->Acadyrlabel);
			this->tabPage1->Location = System::Drawing::Point(4, 34);
			this->tabPage1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage1->Size = System::Drawing::Size(1146, 483);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"New Student Entry";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// requirementslabel
			// 
			this->requirementslabel->AutoSize = true;
			this->requirementslabel->Location = System::Drawing::Point(883, 94);
			this->requirementslabel->Name = L"requirementslabel";
			this->requirementslabel->Size = System::Drawing::Size(132, 25);
			this->requirementslabel->TabIndex = 50;
			this->requirementslabel->Text = L"Requirements";
			// 
			// requirements
			// 
			this->requirements->Controls->Add(this->birthcert);
			this->requirements->Controls->Add(this->form137);
			this->requirements->Controls->Add(this->goodmoralcert);
			this->requirements->Controls->Add(this->medex);
			this->requirements->Location = System::Drawing::Point(877, 119);
			this->requirements->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->requirements->Name = L"requirements";
			this->requirements->Padding = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->requirements->Size = System::Drawing::Size(253, 145);
			this->requirements->TabIndex = 49;
			this->requirements->TabStop = false;
			// 
			// birthcert
			// 
			this->birthcert->AutoSize = true;
			this->birthcert->Location = System::Drawing::Point(7, 12);
			this->birthcert->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->birthcert->Name = L"birthcert";
			this->birthcert->Size = System::Drawing::Size(169, 29);
			this->birthcert->TabIndex = 26;
			this->birthcert->Text = L"Birth Certificate";
			this->birthcert->UseVisualStyleBackColor = true;
			// 
			// form137
			// 
			this->form137->AutoSize = true;
			this->form137->Location = System::Drawing::Point(7, 114);
			this->form137->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->form137->Name = L"form137";
			this->form137->Size = System::Drawing::Size(121, 29);
			this->form137->TabIndex = 29;
			this->form137->Text = L"Form 137";
			this->form137->UseVisualStyleBackColor = true;
			// 
			// goodmoralcert
			// 
			this->goodmoralcert->AutoSize = true;
			this->goodmoralcert->Location = System::Drawing::Point(7, 45);
			this->goodmoralcert->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->goodmoralcert->Name = L"goodmoralcert";
			this->goodmoralcert->Size = System::Drawing::Size(232, 29);
			this->goodmoralcert->TabIndex = 27;
			this->goodmoralcert->Text = L"Good Moral Certificate";
			this->goodmoralcert->UseVisualStyleBackColor = true;
			// 
			// medex
			// 
			this->medex->AutoSize = true;
			this->medex->Location = System::Drawing::Point(7, 80);
			this->medex->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->medex->Name = L"medex";
			this->medex->Size = System::Drawing::Size(218, 29);
			this->medex->TabIndex = 28;
			this->medex->Text = L"Medical Examination";
			this->medex->UseVisualStyleBackColor = true;
			// 
			// enrollbutton
			// 
			this->enrollbutton->Location = System::Drawing::Point(843, 370);
			this->enrollbutton->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->enrollbutton->Name = L"enrollbutton";
			this->enrollbutton->Size = System::Drawing::Size(288, 41);
			this->enrollbutton->TabIndex = 48;
			this->enrollbutton->Text = L"Enroll";
			this->enrollbutton->UseVisualStyleBackColor = true;
			this->enrollbutton->Click += gcnew System::EventHandler(this, &Enroll::enrollbutton_Click);
			// 
			// sex
			// 
			this->sex->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->sex->FormattingEnabled = true;
			this->sex->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Male", L"Female" });
			this->sex->Location = System::Drawing::Point(692, 189);
			this->sex->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->sex->Name = L"sex";
			this->sex->Size = System::Drawing::Size(136, 33);
			this->sex->TabIndex = 47;
			// 
			// sexlabel
			// 
			this->sexlabel->AutoSize = true;
			this->sexlabel->Location = System::Drawing::Point(575, 189);
			this->sexlabel->Name = L"sexlabel";
			this->sexlabel->Size = System::Drawing::Size(47, 25);
			this->sexlabel->TabIndex = 46;
			this->sexlabel->Text = L"Sex";
			// 
			// citizen
			// 
			this->citizen->Location = System::Drawing::Point(137, 345);
			this->citizen->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->citizen->Name = L"citizen";
			this->citizen->Size = System::Drawing::Size(215, 30);
			this->citizen->TabIndex = 45;
			// 
			// citizenshiplabel
			// 
			this->citizenshiplabel->AutoSize = true;
			this->citizenshiplabel->Location = System::Drawing::Point(13, 345);
			this->citizenshiplabel->Name = L"citizenshiplabel";
			this->citizenshiplabel->Size = System::Drawing::Size(108, 25);
			this->citizenshiplabel->TabIndex = 44;
			this->citizenshiplabel->Text = L"Citizenship";
			// 
			// contactnolabel
			// 
			this->contactnolabel->AutoSize = true;
			this->contactnolabel->Location = System::Drawing::Point(13, 298);
			this->contactnolabel->Name = L"contactnolabel";
			this->contactnolabel->Size = System::Drawing::Size(112, 25);
			this->contactnolabel->TabIndex = 43;
			this->contactnolabel->Text = L"Contact no.";
			// 
			// contactno
			// 
			this->contactno->Location = System::Drawing::Point(137, 296);
			this->contactno->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->contactno->Name = L"contactno";
			this->contactno->Size = System::Drawing::Size(215, 30);
			this->contactno->TabIndex = 42;
			// 
			// Addresslabel
			// 
			this->Addresslabel->AutoSize = true;
			this->Addresslabel->Location = System::Drawing::Point(13, 245);
			this->Addresslabel->Name = L"Addresslabel";
			this->Addresslabel->Size = System::Drawing::Size(85, 25);
			this->Addresslabel->TabIndex = 40;
			this->Addresslabel->Text = L"Address";
			// 
			// address
			// 
			this->address->Location = System::Drawing::Point(137, 245);
			this->address->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->address->Name = L"address";
			this->address->Size = System::Drawing::Size(347, 30);
			this->address->TabIndex = 39;
			// 
			// civilstatuslabel
			// 
			this->civilstatuslabel->AutoSize = true;
			this->civilstatuslabel->Location = System::Drawing::Point(575, 142);
			this->civilstatuslabel->Name = L"civilstatuslabel";
			this->civilstatuslabel->Size = System::Drawing::Size(110, 25);
			this->civilstatuslabel->TabIndex = 38;
			this->civilstatuslabel->Text = L"Civil Status";
			// 
			// civilstatus
			// 
			this->civilstatus->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->civilstatus->FormattingEnabled = true;
			this->civilstatus->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Single ", L"Married" });
			this->civilstatus->Location = System::Drawing::Point(692, 142);
			this->civilstatus->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->civilstatus->Name = L"civilstatus";
			this->civilstatus->Size = System::Drawing::Size(136, 33);
			this->civilstatus->TabIndex = 37;
			// 
			// bdaylabel
			// 
			this->bdaylabel->AutoSize = true;
			this->bdaylabel->Location = System::Drawing::Point(575, 98);
			this->bdaylabel->Name = L"bdaylabel";
			this->bdaylabel->Size = System::Drawing::Size(97, 25);
			this->bdaylabel->TabIndex = 36;
			this->bdaylabel->Text = L"Birth Date";
			// 
			// bdaypicker
			// 
			this->bdaypicker->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->bdaypicker->Location = System::Drawing::Point(692, 98);
			this->bdaypicker->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->bdaypicker->MaxDate = System::DateTime(2010, 12, 31, 0, 0, 0, 0);
			this->bdaypicker->MinDate = System::DateTime(1990, 1, 1, 0, 0, 0, 0);
			this->bdaypicker->Name = L"bdaypicker";
			this->bdaypicker->Size = System::Drawing::Size(132, 30);
			this->bdaypicker->TabIndex = 35;
			this->bdaypicker->Value = System::DateTime(2010, 12, 31, 0, 0, 0, 0);
			// 
			// snlabel
			// 
			this->snlabel->AutoSize = true;
			this->snlabel->Location = System::Drawing::Point(13, 195);
			this->snlabel->Name = L"snlabel";
			this->snlabel->Size = System::Drawing::Size(92, 25);
			this->snlabel->TabIndex = 34;
			this->snlabel->Text = L"Surname";
			// 
			// mnlabel
			// 
			this->mnlabel->AutoSize = true;
			this->mnlabel->Location = System::Drawing::Point(12, 152);
			this->mnlabel->Name = L"mnlabel";
			this->mnlabel->Size = System::Drawing::Size(119, 25);
			this->mnlabel->TabIndex = 33;
			this->mnlabel->Text = L"Middlename";
			// 
			// fnlabel
			// 
			this->fnlabel->AutoSize = true;
			this->fnlabel->Location = System::Drawing::Point(13, 102);
			this->fnlabel->Name = L"fnlabel";
			this->fnlabel->Size = System::Drawing::Size(98, 25);
			this->fnlabel->TabIndex = 32;
			this->fnlabel->Text = L"Firstname";
			// 
			// surname
			// 
			this->surname->Location = System::Drawing::Point(137, 195);
			this->surname->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->surname->Name = L"surname";
			this->surname->Size = System::Drawing::Size(347, 30);
			this->surname->TabIndex = 31;
			// 
			// middlename
			// 
			this->middlename->Location = System::Drawing::Point(137, 148);
			this->middlename->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->middlename->Name = L"middlename";
			this->middlename->Size = System::Drawing::Size(347, 30);
			this->middlename->TabIndex = 30;
			// 
			// firstname
			// 
			this->firstname->Location = System::Drawing::Point(137, 99);
			this->firstname->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->firstname->Name = L"firstname";
			this->firstname->Size = System::Drawing::Size(347, 30);
			this->firstname->TabIndex = 29;
			// 
			// section
			// 
			this->section->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->section->FormattingEnabled = true;
			this->section->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Section A", L"Section B" });
			this->section->Location = System::Drawing::Point(341, 51);
			this->section->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->section->Name = L"section";
			this->section->Size = System::Drawing::Size(143, 33);
			this->section->TabIndex = 28;
			// 
			// yearlevel
			// 
			this->yearlevel->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->yearlevel->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->yearlevel->FormattingEnabled = true;
			this->yearlevel->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Grade 7", L"Grade 8", L"Grade 9", L"Grade 10" });
			this->yearlevel->Location = System::Drawing::Point(176, 51);
			this->yearlevel->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->yearlevel->Name = L"yearlevel";
			this->yearlevel->Size = System::Drawing::Size(159, 33);
			this->yearlevel->TabIndex = 27;
			// 
			// schoolyear
			// 
			this->schoolyear->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->schoolyear->FormattingEnabled = true;
			this->schoolyear->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"2018", L"2019", L"2020", L"2021" });
			this->schoolyear->Location = System::Drawing::Point(11, 51);
			this->schoolyear->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->schoolyear->Name = L"schoolyear";
			this->schoolyear->Size = System::Drawing::Size(159, 33);
			this->schoolyear->TabIndex = 26;
			// 
			// sectionlabel
			// 
			this->sectionlabel->AutoSize = true;
			this->sectionlabel->Location = System::Drawing::Point(348, 22);
			this->sectionlabel->Name = L"sectionlabel";
			this->sectionlabel->Size = System::Drawing::Size(78, 25);
			this->sectionlabel->TabIndex = 8;
			this->sectionlabel->Text = L"Section";
			// 
			// yearlabel
			// 
			this->yearlabel->AutoSize = true;
			this->yearlabel->Location = System::Drawing::Point(181, 24);
			this->yearlabel->Name = L"yearlabel";
			this->yearlabel->Size = System::Drawing::Size(105, 25);
			this->yearlabel->TabIndex = 7;
			this->yearlabel->Text = L"Year Level";
			// 
			// Acadyrlabel
			// 
			this->Acadyrlabel->AutoSize = true;
			this->Acadyrlabel->Location = System::Drawing::Point(13, 20);
			this->Acadyrlabel->Name = L"Acadyrlabel";
			this->Acadyrlabel->Size = System::Drawing::Size(145, 25);
			this->Acadyrlabel->TabIndex = 6;
			this->Acadyrlabel->Text = L"Academic Year";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->newyrlvl);
			this->tabPage2->Controls->Add(this->newacadyr);
			this->tabPage2->Controls->Add(this->label8);
			this->tabPage2->Controls->Add(this->shwcsect);
			this->tabPage2->Controls->Add(this->shwcyrlvl);
			this->tabPage2->Controls->Add(this->label7);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Controls->Add(this->shwgrade);
			this->tabPage2->Controls->Add(this->shwstudnum);
			this->tabPage2->Controls->Add(this->shwfname);
			this->tabPage2->Controls->Add(this->shwmname);
			this->tabPage2->Controls->Add(this->shwsname);
			this->tabPage2->Controls->Add(this->label2);
			this->tabPage2->Controls->Add(this->enrollbutton2);
			this->tabPage2->Controls->Add(this->reqlbl);
			this->tabPage2->Controls->Add(this->groupBox1);
			this->tabPage2->Controls->Add(this->label17);
			this->tabPage2->Controls->Add(this->label16);
			this->tabPage2->Controls->Add(this->newsect);
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->label9);
			this->tabPage2->Controls->Add(this->label10);
			this->tabPage2->Controls->Add(this->label12);
			this->tabPage2->Controls->Add(this->label15);
			this->tabPage2->Controls->Add(this->label14);
			this->tabPage2->Controls->Add(this->clearbutton);
			this->tabPage2->Controls->Add(this->searchbutton);
			this->tabPage2->Controls->Add(this->searchbox);
			this->tabPage2->Controls->Add(this->yearsearch);
			this->tabPage2->Controls->Add(this->label3);
			this->tabPage2->Location = System::Drawing::Point(4, 34);
			this->tabPage2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage2->Size = System::Drawing::Size(1146, 483);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Old Student Entry";
			// 
			// newyrlvl
			// 
			this->newyrlvl->Location = System::Drawing::Point(748, 158);
			this->newyrlvl->Name = L"newyrlvl";
			this->newyrlvl->ReadOnly = true;
			this->newyrlvl->Size = System::Drawing::Size(157, 30);
			this->newyrlvl->TabIndex = 101;
			// 
			// newacadyr
			// 
			this->newacadyr->Location = System::Drawing::Point(571, 158);
			this->newacadyr->Name = L"newacadyr";
			this->newacadyr->ReadOnly = true;
			this->newacadyr->Size = System::Drawing::Size(157, 30);
			this->newacadyr->TabIndex = 100;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(566, 105);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(57, 25);
			this->label8->TabIndex = 99;
			this->label8->Text = L"New:";
			// 
			// shwcsect
			// 
			this->shwcsect->Location = System::Drawing::Point(748, 67);
			this->shwcsect->Name = L"shwcsect";
			this->shwcsect->ReadOnly = true;
			this->shwcsect->Size = System::Drawing::Size(157, 30);
			this->shwcsect->TabIndex = 98;
			// 
			// shwcyrlvl
			// 
			this->shwcyrlvl->Location = System::Drawing::Point(571, 67);
			this->shwcyrlvl->Name = L"shwcyrlvl";
			this->shwcyrlvl->ReadOnly = true;
			this->shwcyrlvl->Size = System::Drawing::Size(157, 30);
			this->shwcyrlvl->TabIndex = 97;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(743, 39);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(78, 25);
			this->label7->TabIndex = 96;
			this->label7->Text = L"Section";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(566, 39);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(105, 25);
			this->label5->TabIndex = 95;
			this->label5->Text = L"Year Level";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(564, 13);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(83, 25);
			this->label4->TabIndex = 94;
			this->label4->Text = L"Current:";
			// 
			// shwgrade
			// 
			this->shwgrade->Location = System::Drawing::Point(164, 381);
			this->shwgrade->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->shwgrade->Name = L"shwgrade";
			this->shwgrade->ReadOnly = true;
			this->shwgrade->Size = System::Drawing::Size(325, 30);
			this->shwgrade->TabIndex = 93;
			// 
			// shwstudnum
			// 
			this->shwstudnum->Location = System::Drawing::Point(164, 183);
			this->shwstudnum->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->shwstudnum->Name = L"shwstudnum";
			this->shwstudnum->ReadOnly = true;
			this->shwstudnum->Size = System::Drawing::Size(325, 30);
			this->shwstudnum->TabIndex = 92;
			// 
			// shwfname
			// 
			this->shwfname->Location = System::Drawing::Point(164, 231);
			this->shwfname->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->shwfname->Name = L"shwfname";
			this->shwfname->ReadOnly = true;
			this->shwfname->Size = System::Drawing::Size(325, 30);
			this->shwfname->TabIndex = 89;
			// 
			// shwmname
			// 
			this->shwmname->Location = System::Drawing::Point(164, 281);
			this->shwmname->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->shwmname->Name = L"shwmname";
			this->shwmname->ReadOnly = true;
			this->shwmname->Size = System::Drawing::Size(325, 30);
			this->shwmname->TabIndex = 90;
			// 
			// shwsname
			// 
			this->shwsname->Location = System::Drawing::Point(164, 329);
			this->shwsname->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->shwsname->Name = L"shwsname";
			this->shwsname->ReadOnly = true;
			this->shwsname->Size = System::Drawing::Size(325, 30);
			this->shwsname->TabIndex = 91;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(10, 381);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(127, 25);
			this->label2->TabIndex = 88;
			this->label2->Text = L"Grade Status";
			// 
			// enrollbutton2
			// 
			this->enrollbutton2->Location = System::Drawing::Point(868, 370);
			this->enrollbutton2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->enrollbutton2->Name = L"enrollbutton2";
			this->enrollbutton2->Size = System::Drawing::Size(186, 69);
			this->enrollbutton2->TabIndex = 87;
			this->enrollbutton2->Text = L"Enroll";
			this->enrollbutton2->UseVisualStyleBackColor = true;
			this->enrollbutton2->Click += gcnew System::EventHandler(this, &Enroll::enrollbutton2_Click);
			// 
			// reqlbl
			// 
			this->reqlbl->AutoSize = true;
			this->reqlbl->Location = System::Drawing::Point(565, 208);
			this->reqlbl->Name = L"reqlbl";
			this->reqlbl->Size = System::Drawing::Size(132, 25);
			this->reqlbl->TabIndex = 86;
			this->reqlbl->Text = L"Requirements";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->shwbirthcert);
			this->groupBox1->Controls->Add(this->shwform137);
			this->groupBox1->Controls->Add(this->shwgoodmoral);
			this->groupBox1->Controls->Add(this->shwmedex);
			this->groupBox1->Location = System::Drawing::Point(563, 228);
			this->groupBox1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->groupBox1->Size = System::Drawing::Size(239, 145);
			this->groupBox1->TabIndex = 85;
			this->groupBox1->TabStop = false;
			// 
			// shwbirthcert
			// 
			this->shwbirthcert->AutoSize = true;
			this->shwbirthcert->Enabled = false;
			this->shwbirthcert->Location = System::Drawing::Point(7, 12);
			this->shwbirthcert->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->shwbirthcert->Name = L"shwbirthcert";
			this->shwbirthcert->Size = System::Drawing::Size(169, 29);
			this->shwbirthcert->TabIndex = 26;
			this->shwbirthcert->Text = L"Birth Certificate";
			this->shwbirthcert->UseVisualStyleBackColor = true;
			// 
			// shwform137
			// 
			this->shwform137->AutoSize = true;
			this->shwform137->Enabled = false;
			this->shwform137->Location = System::Drawing::Point(7, 114);
			this->shwform137->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->shwform137->Name = L"shwform137";
			this->shwform137->Size = System::Drawing::Size(121, 29);
			this->shwform137->TabIndex = 29;
			this->shwform137->Text = L"Form 137";
			this->shwform137->UseVisualStyleBackColor = true;
			// 
			// shwgoodmoral
			// 
			this->shwgoodmoral->AutoSize = true;
			this->shwgoodmoral->Enabled = false;
			this->shwgoodmoral->Location = System::Drawing::Point(7, 46);
			this->shwgoodmoral->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->shwgoodmoral->Name = L"shwgoodmoral";
			this->shwgoodmoral->Size = System::Drawing::Size(232, 29);
			this->shwgoodmoral->TabIndex = 27;
			this->shwgoodmoral->Text = L"Good Moral Certificate";
			this->shwgoodmoral->UseVisualStyleBackColor = true;
			// 
			// shwmedex
			// 
			this->shwmedex->AutoSize = true;
			this->shwmedex->Enabled = false;
			this->shwmedex->Location = System::Drawing::Point(7, 80);
			this->shwmedex->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->shwmedex->Name = L"shwmedex";
			this->shwmedex->Size = System::Drawing::Size(218, 29);
			this->shwmedex->TabIndex = 28;
			this->shwmedex->Text = L"Medical Examination";
			this->shwmedex->UseVisualStyleBackColor = true;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(742, 130);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(105, 25);
			this->label17->TabIndex = 84;
			this->label17->Text = L"Year Level";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(565, 130);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(145, 25);
			this->label16->TabIndex = 82;
			this->label16->Text = L"Academic Year";
			// 
			// newsect
			// 
			this->newsect->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->newsect->FormattingEnabled = true;
			this->newsect->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Section A", L"Section B" });
			this->newsect->Location = System::Drawing::Point(918, 155);
			this->newsect->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->newsect->Name = L"newsect";
			this->newsect->Size = System::Drawing::Size(142, 33);
			this->newsect->TabIndex = 79;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(913, 130);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(78, 25);
			this->label6->TabIndex = 80;
			this->label6->Text = L"Section";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(10, 231);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(98, 25);
			this->label9->TabIndex = 76;
			this->label9->Text = L"Firstname";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(10, 281);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(119, 25);
			this->label10->TabIndex = 77;
			this->label10->Text = L"Middlename";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(10, 329);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(92, 25);
			this->label12->TabIndex = 78;
			this->label12->Text = L"Surname";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(10, 186);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(151, 25);
			this->label15->TabIndex = 72;
			this->label15->Text = L"Student number";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(6, 13);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(389, 25);
			this->label14->TabIndex = 70;
			this->label14->Text = L"Enter Student Name (Lastname, Firstname)";
			// 
			// clearbutton
			// 
			this->clearbutton->Location = System::Drawing::Point(236, 113);
			this->clearbutton->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->clearbutton->Name = L"clearbutton";
			this->clearbutton->Size = System::Drawing::Size(159, 29);
			this->clearbutton->TabIndex = 69;
			this->clearbutton->Text = L"Clear";
			this->clearbutton->UseVisualStyleBackColor = true;
			this->clearbutton->Click += gcnew System::EventHandler(this, &Enroll::clearbutton_Click);
			// 
			// searchbutton
			// 
			this->searchbutton->Location = System::Drawing::Point(236, 77);
			this->searchbutton->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->searchbutton->Name = L"searchbutton";
			this->searchbutton->Size = System::Drawing::Size(159, 29);
			this->searchbutton->TabIndex = 68;
			this->searchbutton->Text = L"Search";
			this->searchbutton->UseVisualStyleBackColor = true;
			this->searchbutton->Click += gcnew System::EventHandler(this, &Enroll::searchbutton_Click);
			// 
			// searchbox
			// 
			this->searchbox->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->searchbox->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::CustomSource;
			this->searchbox->Location = System::Drawing::Point(9, 39);
			this->searchbox->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->searchbox->Name = L"searchbox";
			this->searchbox->Size = System::Drawing::Size(334, 30);
			this->searchbox->TabIndex = 67;
			// 
			// yearsearch
			// 
			this->yearsearch->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->yearsearch->FormattingEnabled = true;
			this->yearsearch->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"2018", L"2019", L"2020", L"2021" });
			this->yearsearch->Location = System::Drawing::Point(9, 102);
			this->yearsearch->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->yearsearch->Name = L"yearsearch";
			this->yearsearch->Size = System::Drawing::Size(159, 33);
			this->yearsearch->TabIndex = 65;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 77);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(145, 25);
			this->label3->TabIndex = 66;
			this->label3->Text = L"Academic Year";
			// 
			// fnameerror
			// 
			this->fnameerror->ContainerControl = this;
			// 
			// mnameerror
			// 
			this->mnameerror->ContainerControl = this;
			// 
			// snameerror
			// 
			this->snameerror->ContainerControl = this;
			// 
			// cnerror
			// 
			this->cnerror->ContainerControl = this;
			// 
			// error
			// 
			this->error->ContainerControl = this;
			// 
			// Enroll
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1178, 544);
			this->Controls->Add(this->tabControl1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"Enroll";
			this->Text = L"Enrollment";
			this->Load += gcnew System::EventHandler(this, &Enroll::Enroll_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->requirements->ResumeLayout(false);
			this->requirements->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fnameerror))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mnameerror))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->snameerror))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cnerror))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->error))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	
private: System::Void enrollbutton_Click(System::Object^  sender, System::EventArgs^  e) {
		////NEW STUDENT ENTRY

		void *ptr = malloc(sizeof(INFORMATION));
		INFORMATION *info = new(ptr) INFORMATION();
		int deficiency = 0;
		int error[10];

		if (schoolyear->Text == "" || yearlevel->Text == "" || section->Text == "" || firstname->Text == "" || middlename->Text == "" || surname->Text == "" || address->Text == "" || contactno->Text == "" ||
			citizen->Text == "" || civilstatus->Text == "" || sex->Text == "")
		{
			MessageBox::Show("Please fill all informations!");
		}
		else
		{
			//getinfo
			String^ getschoolyear = schoolyear->Text;
			info->SYgradesect.SY = stringconversion(getschoolyear);
			String^ getyearlevel = yearlevel->Text;
			info->SYgradesect.grade = stringconversion(getyearlevel);
			String^ getsection = section->Text;
			info->SYgradesect.sect = stringconversion(getsection);

			String^ getfname = firstname->Text;
			info->wholename.fname = stringconversion(getfname);
			String^ getmname = middlename->Text;
			info->wholename.mname = stringconversion(getmname);
			String^ getsname = surname->Text;
			info->wholename.sname = stringconversion(getsname);

			String^ getbday = bdaypicker->Text;
			info->bio.birthdate = stringconversion(getbday);
			String^ getcivilstatus = civilstatus->Text;
			info->bio.civilstatus = stringconversion(getcivilstatus);
			String^ getsex = sex->Text;
			info->bio.sex = stringconversion(getsex);

			String^ getaddress = address->Text;
			info->bio.address = stringconversion(getaddress);
			String^ getcontact = contactno->Text;
			info->bio.contact = stringconversion(getcontact);
			String^ getcitizenship = citizen->Text;
			info->bio.citizenship = stringconversion(getcitizenship);

			//check name
			if (has_any_digits(info->wholename.fname) == true)
			{
				fnameerror->SetError(firstname, "Must not contain any numbers!");
				error[0] = 1;
			}
			else
			{
				fnameerror->Clear();
				error[0] = 0;
			}
			if (has_any_digits(info->wholename.mname) == true)
			{
				mnameerror->SetError(middlename, "Must not contain any numbers!");
				error[1] = 1;
			}
			else
			{
				mnameerror->Clear();
				error[1] = 0;
			}
			if (has_any_digits(info->wholename.sname) == true)
			{
				snameerror->SetError(surname, "Must not contain any numbers!");
				error[2] = 1;
			}
			else
			{
				snameerror->Clear();
				error[2] = 0;
			}
			if (has_any_char(contactno->Text) == true)
			{
				cnerror->SetError(contactno, "Must not containa any letters!");
				error[3] = 1;
			}
			else
			{
				cnerror->Clear();
				error[3] = 0;
			}

			//requirements

			if (birthcert->Checked) {
				info->req.birthcertification = "True";
			}
			else {
				info->req.birthcertification = "False";
				deficiency++;
			};
			if (goodmoralcert->Checked) {
				info->req.goodmoral = "True";
			}
			else {
				info->req.goodmoral = "False";
				deficiency++;
			};
			if (medex->Checked) {
				info->req.medical = "True";
			}
			else {
				info->req.medical = "False";
				deficiency++;
			}
			if (form137->Checked) {
				info->req.form137 = "True";
			}
			else {
				info->req.form137 = "False";
				deficiency++;
			}
		}
		if (errorchk(error, 4) == 0)
		{
			fstream file;
			string line;
			int i = 0;
			string idnum;
			string upnum;
			vector<string> lastline;

			file.open("Database\\" + info->SYgradesect.SY + "\\studnum.txt", ios::in);
			getline(file, idnum);
			file.close();

			file.open("Database\\" + info->SYgradesect.SY + "\\studnum.txt", ios::out);
			upnum = stringconversion(calc_yr(idnum));
			file << upnum;
			file.close();

			file.open("Database\\Masterlist.txt", ios::app);
			file << info->wholename.sname << " " << info->wholename.fname << endl;
			file.close();

			fstream infoForm;

			infoForm.open("Database\\" + info->SYgradesect.SY + "\\allstudents\\" + info->wholename.sname + " " + info->wholename.fname + ".txt", ios::out);
			infoForm << idnum << endl;
			infoForm << info->wholename.fname << endl;
			infoForm << info->wholename.mname << endl;
			infoForm << info->wholename.sname << endl;
			infoForm << info->bio.birthdate << endl;
			infoForm << info->bio.civilstatus << endl;
			infoForm << info->bio.sex << endl;
			infoForm << info->bio.address << endl;
			infoForm << info->bio.contact << endl;
			infoForm << info->bio.citizenship << endl;
			infoForm << info->SYgradesect.grade << endl;
			infoForm << info->SYgradesect.sect << endl;
			infoForm << info->req.birthcertification << endl;
			infoForm << info->req.goodmoral << endl;
			infoForm << info->req.medical << endl;
			infoForm << info->req.form137 << endl;
			infoForm.close();

			fstream sectionform;

			sectionform.open("Database\\" + info->SYgradesect.SY + "\\" + info->SYgradesect.grade + "\\" + info->SYgradesect.sect + "\\studlist.txt", ios::app);
			sectionform << info->wholename.sname << " " << info->wholename.fname << endl;
			sectionform.close();

			fstream pendingform;

			if (deficiency != 0)
			{
				MessageBox::Show("Pending with " + deficiency + " deficiency/deficiencies");
				fstream pendingform;
				pendingform.open("Database\\" + info->SYgradesect.SY + "\\pending\\pendinglist.txt", ios::app);
				pendingform << info->wholename.sname << " " << info->wholename.fname << endl;
				pendingform.close();
				pendingform.open("Database\\" + info->SYgradesect.SY + "\\pending\\" + idnum + ".txt", ios::out);
				pendingform << deficiency << endl << info->req.birthcertification << endl << info->req.goodmoral << endl << info->req.medical << endl << info->req.form137;
				pendingform.close();
			}
			info->~INFORMATION();
			free(info);

			MessageBox::Show("Enrollment Success!");
			schoolyear->Text = "";
			yearlevel->Text = "";
			section->Text = "";
			firstname->Clear();
			middlename->Clear();
			surname->Clear();
			address->Text = "";
			contactno->Text = "";
			citizen->Text = "";
			civilstatus->Text = "";
			sex->Text = "";
			birthcert->Checked = 0;
			goodmoralcert->Checked = 0;
			medex->Checked = 0;
			form137->Checked = 0;
			sex->SelectedIndex = -1;
			schoolyear->SelectedIndex = -1;
			yearlevel->SelectedIndex = -1;
			section->SelectedIndex = -1;
			civilstatus->SelectedIndex = -1;
			sex->SelectedIndex = -1;
		}
}

private: System::Void Enroll_Load(System::Object^  sender, System::EventArgs^  e) {
	fstream file;
	string str;
	String ^str1;
	file.open("Database\\Masterlist.txt", ios::in);
	while (getline(file, str))
	{
		str1 = gcnew String(str.c_str());
		searchbox->AutoCompleteCustomSource->Add(str1);
	}
	file.close();
}

private: System::Void searchbutton_Click(System::Object^  sender, System::EventArgs^  e) {

	String ^getyear = yearsearch->Text;
	string year = stringconversion(getyear);
	String ^getsearch = searchbox->Text;
	string search = stringconversion(getsearch);
	if (yearsearch->Text == "")
	{
		error->SetError(yearsearch, "Enter academic year");
	}
	else 
	{
		error->Clear();
		fstream file;
		file.open("Database\\" + year + "\\allstudents\\" + search + ".txt", ios::in);
		if (file.is_open())
		{
			void *ptr = malloc(sizeof(INFORMATION));
			vector<string> vect;
			string str;
			INFORMATION *info = new(ptr) INFORMATION();

			//get data from file
			getline(file, info->studidnum);
			getline(file, info->wholename.fname);
			getline(file, info->wholename.mname);
			getline(file, info->wholename.sname);

			for(int i=0;i<8;i++)
			{
				getline(file, str);
				vect.push_back(str);
			}

			getline(file, info->req.birthcertification);
			getline(file, info->req.goodmoral);
			getline(file, info->req.medical);
			getline(file, info->req.form137);

			//displaydata from struct
			shwstudnum->Text = displayfunction(info->studidnum);
			shwsname->Text = displayfunction(info->wholename.sname);
			shwfname->Text = displayfunction(info->wholename.fname);
			shwmname->Text = displayfunction(info->wholename.mname);

			fstream getgrade;
			getgrade.open("Database\\" + year + "\\studentsgrade\\" + info->studidnum + ".txt", ios::in);
			if (getgrade.is_open())
			{
				string grade;
				getline(getgrade, grade);
				getgrade.close();
				shwgrade->Text = systemstring(grade);
			}
			else
			{
				shwgrade->Text = "No Grades";
			}

			shwcyrlvl->Text = gcnew String(vect[6].c_str());
			shwcsect->Text = gcnew String(vect[7].c_str());

			if (info->req.birthcertification == "True")
				shwbirthcert->Checked = 1;
			if (info->req.goodmoral == "True")
				shwgoodmoral->Checked = 1;
			if (info->req.medical == "True")
				shwmedex->Checked = 1;
			if (info->req.form137 == "True")
				shwform137->Checked = 1;

			String ^getacadyr = yearsearch->Text;
			String ^getyrlvl = shwcyrlvl->Text;
			string yr = stringconversion(getacadyr);
			string yrlvl = stringconversion(getyrlvl);
			if (info->req.birthcertification == "True" && info->req.goodmoral == "True" && info->req.medical == "True" && info->req.form137 == "True" && shwgrade->Text == "PASSED")
			{
				newacadyr->Text = calc_yr(yr);
				newyrlvl->Text = calc_yrlvl(yrlvl);
			}
			else if (info->req.birthcertification == "True" && info->req.goodmoral == "True" && info->req.medical == "True" && info->req.form137 == "True" && shwgrade->Text == "FAILED")
			{
				newacadyr->Text = calc_yr(yr);
				newyrlvl->Text = getyrlvl;
			}

		}
		else if (file.fail())
		{
			MessageBox::Show("Student hasn't found!");
			shwstudnum->Clear();
			shwfname->Clear();
			shwmname->Clear();
			shwsname->Clear();
			shwgrade->Clear();
			searchbox->Clear();
			newacadyr->Clear();
			newyrlvl->Clear();
			shwcyrlvl->Clear();
			shwcsect->Clear();
		}
		file.close();
	}
}

private: System::Void clearbutton_Click(System::Object^  sender, System::EventArgs^  e) {
	shwstudnum->Clear();
	shwfname->Clear();
	shwmname->Clear();
	shwsname->Clear();
	shwgrade->Clear();
	searchbox->Clear();
	shwcyrlvl->Clear();
	shwcsect->Clear();
	newacadyr->Clear();
	newyrlvl->Clear();
	shwbirthcert->Checked = 0;
	shwform137->Checked = 0;
	shwgoodmoral->Checked = 0;
	shwmedex->Checked = 0;
	yearsearch->SelectedIndex = -1;
}
private: System::Void enrollbutton2_Click(System::Object^  sender, System::EventArgs^  e) {
	void *ptr = malloc(sizeof(INFORMATION));
	INFORMATION *info = new(ptr) INFORMATION();
	fstream file;
	vector<string> vect;
	string str;

	String ^getyear = yearsearch->Text;
	string year = stringconversion(getyear);
	String ^getsearch = searchbox->Text;
	string search = stringconversion(getsearch);
	if (newyrlvl->Text == "Graduating")
	{
		MessageBox::Show("This student is graduating");
	}
	else if (shwgrade->Text == "No Grades")
	{
		MessageBox::Show("Grades are not yet inputed");
	}
	else
	{
		file.open("Database\\" + year + "\\allstudents\\" + search + ".txt", ios::in);
		while (getline(file, str))
		{
			vect.push_back(str);
		}
		file.close();

		if (vect[12] == "False" || vect[13] == "False" || vect[14] == "False" || vect[15] == "False")
		{
			MessageBox::Show("Enrollment failed");
			error->Clear();
			error->SetError(reqlbl, "Requirements are not met");
		}
		else if (newsect->Text == "")
		{
			error->SetError(newsect, "Enter new section");
		}
		else
		{
			error->Clear();
			String ^getnewyr = newacadyr->Text;
			String ^getnewyrlvl = newyrlvl->Text;
			String ^getnewsect = newsect->Text;

			string yr = stringconversion(getnewyr);
			vect[10] = stringconversion(getnewyrlvl);
			vect[11] = stringconversion(getnewsect);

			file.open("Database\\" + yr + "\\allstudents\\" + search + ".txt", ios::out);
			for (int i = 0; i < 16; i++)
			{
				file << vect[i] << endl;
			}
			file.close();

			MessageBox::Show("Enroll successful");
			shwstudnum->Clear();
			shwfname->Clear();
			shwmname->Clear();
			shwsname->Clear();
			shwgrade->Clear();
			searchbox->Clear();
			shwcyrlvl->Clear();
			shwcsect->Clear();
			newacadyr->Clear();
			newyrlvl->Clear();
			newsect->SelectedIndex = -1;
			shwbirthcert->Checked = 0;
			shwform137->Checked = 0;
			shwgoodmoral->Checked = 0;
			shwmedex->Checked = 0;
			yearsearch->SelectedIndex = -1;
		}
	}
}
};
}
