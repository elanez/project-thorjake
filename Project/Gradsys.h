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
	/// Summary for Gradsys
	/// </summary>
	public ref class Gradsys : public System::Windows::Forms::Form
	{
	public:
		Form ^obj;
		Gradsys(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Gradsys(Form ^obj1)
		{
			obj = obj1;
			InitializeComponent();
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Gradsys()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;










	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::TextBox^  searchbox2;



	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::ComboBox^  yrlevel;
	private: System::Windows::Forms::Label^  statfil;
	private: System::Windows::Forms::Label^  statmath;
	private: System::Windows::Forms::Label^  statsci;
	private: System::Windows::Forms::Label^  stateng;
	private: System::Windows::Forms::Label^  filstat;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  tbfil;
	private: System::Windows::Forms::Label^  mathstat;
	private: System::Windows::Forms::Label^  scistat;
	private: System::Windows::Forms::Label^  engstat;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  tbmath;
	private: System::Windows::Forms::TextBox^  tbenglish;
	private: System::Windows::Forms::TextBox^  tbscience;
	private: System::Windows::Forms::Button^  editbt;
	private: System::Windows::Forms::Button^  searchst;
	private: System::Windows::Forms::Button^  erase;
	private: System::Windows::Forms::Label^  stats;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  avrg;
	private: System::Windows::Forms::Button^  btnevaluate;
	private: System::Windows::Forms::Button^  btnsubmit;
	private: System::Windows::Forms::Label^  statelective;
	private: System::Windows::Forms::Label^  statmapeh;
	private: System::Windows::Forms::Label^  stattle;
	private: System::Windows::Forms::Label^  statap;
	private: System::Windows::Forms::Label^  elecstat;
	private: System::Windows::Forms::Label^  mapehstat;
	private: System::Windows::Forms::Label^  tlestat;
	private: System::Windows::Forms::Label^  apstat;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  tbap;
	private: System::Windows::Forms::TextBox^  tbtle;
	private: System::Windows::Forms::TextBox^  tbmapeh;
	private: System::Windows::Forms::TextBox^  tbelec;
private: System::Windows::Forms::Label^  studno;
private: System::Windows::Forms::Label^  label6;
private: System::Windows::Forms::Label^  studnoin;
private: System::Windows::Forms::Label^  label15;
private: System::Windows::Forms::Button^  searchin;

private: System::Windows::Forms::Label^  statin;
private: System::Windows::Forms::Label^  statlbl;
private: System::Windows::Forms::Label^  avelbl1;


private: System::Windows::Forms::Label^  averin;
private: System::Windows::Forms::Button^  evaluatein;
private: System::Windows::Forms::Button^  submitin;
private: System::Windows::Forms::Label^  elecstat1;
private: System::Windows::Forms::Label^  mapehstat1;
private: System::Windows::Forms::Label^  tlestat1;





private: System::Windows::Forms::Label^  apstat1;

private: System::Windows::Forms::Label^  label28;
private: System::Windows::Forms::Label^  label29;
private: System::Windows::Forms::Label^  label30;
private: System::Windows::Forms::Label^  label31;
private: System::Windows::Forms::TextBox^  apin;
private: System::Windows::Forms::TextBox^  tlein;
private: System::Windows::Forms::TextBox^  mapin;
private: System::Windows::Forms::TextBox^  elecin;
private: System::Windows::Forms::Label^  filstat1;

private: System::Windows::Forms::Label^  mathstat1;

private: System::Windows::Forms::Label^  scistat1;

private: System::Windows::Forms::Label^  engstat1;

private: System::Windows::Forms::Label^  label37;
private: System::Windows::Forms::TextBox^  filin;
private: System::Windows::Forms::Label^  label41;
private: System::Windows::Forms::Label^  label42;
private: System::Windows::Forms::Label^  label43;
private: System::Windows::Forms::TextBox^  mathin;
private: System::Windows::Forms::TextBox^  engin;
private: System::Windows::Forms::TextBox^  sciin;
private: System::Windows::Forms::Label^  label44;
private: System::Windows::Forms::TextBox^  searchbox1;
private: System::Windows::Forms::Label^  label45;
private: System::Windows::Forms::ComboBox^  yrin;
private: System::Windows::Forms::ErrorProvider^  error1;
private: System::Windows::Forms::ErrorProvider^  error2;






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
			this->studnoin = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->searchin = (gcnew System::Windows::Forms::Button());
			this->statin = (gcnew System::Windows::Forms::Label());
			this->statlbl = (gcnew System::Windows::Forms::Label());
			this->avelbl1 = (gcnew System::Windows::Forms::Label());
			this->averin = (gcnew System::Windows::Forms::Label());
			this->evaluatein = (gcnew System::Windows::Forms::Button());
			this->submitin = (gcnew System::Windows::Forms::Button());
			this->elecstat1 = (gcnew System::Windows::Forms::Label());
			this->mapehstat1 = (gcnew System::Windows::Forms::Label());
			this->tlestat1 = (gcnew System::Windows::Forms::Label());
			this->apstat1 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->apin = (gcnew System::Windows::Forms::TextBox());
			this->tlein = (gcnew System::Windows::Forms::TextBox());
			this->mapin = (gcnew System::Windows::Forms::TextBox());
			this->elecin = (gcnew System::Windows::Forms::TextBox());
			this->filstat1 = (gcnew System::Windows::Forms::Label());
			this->mathstat1 = (gcnew System::Windows::Forms::Label());
			this->scistat1 = (gcnew System::Windows::Forms::Label());
			this->engstat1 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->filin = (gcnew System::Windows::Forms::TextBox());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->mathin = (gcnew System::Windows::Forms::TextBox());
			this->engin = (gcnew System::Windows::Forms::TextBox());
			this->sciin = (gcnew System::Windows::Forms::TextBox());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->searchbox1 = (gcnew System::Windows::Forms::TextBox());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->yrin = (gcnew System::Windows::Forms::ComboBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->studno = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->editbt = (gcnew System::Windows::Forms::Button());
			this->searchst = (gcnew System::Windows::Forms::Button());
			this->erase = (gcnew System::Windows::Forms::Button());
			this->stats = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->avrg = (gcnew System::Windows::Forms::Label());
			this->btnevaluate = (gcnew System::Windows::Forms::Button());
			this->btnsubmit = (gcnew System::Windows::Forms::Button());
			this->statelective = (gcnew System::Windows::Forms::Label());
			this->statmapeh = (gcnew System::Windows::Forms::Label());
			this->stattle = (gcnew System::Windows::Forms::Label());
			this->statap = (gcnew System::Windows::Forms::Label());
			this->elecstat = (gcnew System::Windows::Forms::Label());
			this->mapehstat = (gcnew System::Windows::Forms::Label());
			this->tlestat = (gcnew System::Windows::Forms::Label());
			this->apstat = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->tbap = (gcnew System::Windows::Forms::TextBox());
			this->tbtle = (gcnew System::Windows::Forms::TextBox());
			this->tbmapeh = (gcnew System::Windows::Forms::TextBox());
			this->tbelec = (gcnew System::Windows::Forms::TextBox());
			this->statfil = (gcnew System::Windows::Forms::Label());
			this->statmath = (gcnew System::Windows::Forms::Label());
			this->statsci = (gcnew System::Windows::Forms::Label());
			this->stateng = (gcnew System::Windows::Forms::Label());
			this->filstat = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->tbfil = (gcnew System::Windows::Forms::TextBox());
			this->mathstat = (gcnew System::Windows::Forms::Label());
			this->scistat = (gcnew System::Windows::Forms::Label());
			this->engstat = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tbmath = (gcnew System::Windows::Forms::TextBox());
			this->tbenglish = (gcnew System::Windows::Forms::TextBox());
			this->tbscience = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->searchbox2 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->yrlevel = (gcnew System::Windows::Forms::ComboBox());
			this->error1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->error2 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->error1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->error2))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1166, 532);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->studnoin);
			this->tabPage1->Controls->Add(this->label15);
			this->tabPage1->Controls->Add(this->searchin);
			this->tabPage1->Controls->Add(this->statin);
			this->tabPage1->Controls->Add(this->statlbl);
			this->tabPage1->Controls->Add(this->avelbl1);
			this->tabPage1->Controls->Add(this->averin);
			this->tabPage1->Controls->Add(this->evaluatein);
			this->tabPage1->Controls->Add(this->submitin);
			this->tabPage1->Controls->Add(this->elecstat1);
			this->tabPage1->Controls->Add(this->mapehstat1);
			this->tabPage1->Controls->Add(this->tlestat1);
			this->tabPage1->Controls->Add(this->apstat1);
			this->tabPage1->Controls->Add(this->label28);
			this->tabPage1->Controls->Add(this->label29);
			this->tabPage1->Controls->Add(this->label30);
			this->tabPage1->Controls->Add(this->label31);
			this->tabPage1->Controls->Add(this->apin);
			this->tabPage1->Controls->Add(this->tlein);
			this->tabPage1->Controls->Add(this->mapin);
			this->tabPage1->Controls->Add(this->elecin);
			this->tabPage1->Controls->Add(this->filstat1);
			this->tabPage1->Controls->Add(this->mathstat1);
			this->tabPage1->Controls->Add(this->scistat1);
			this->tabPage1->Controls->Add(this->engstat1);
			this->tabPage1->Controls->Add(this->label37);
			this->tabPage1->Controls->Add(this->filin);
			this->tabPage1->Controls->Add(this->label41);
			this->tabPage1->Controls->Add(this->label42);
			this->tabPage1->Controls->Add(this->label43);
			this->tabPage1->Controls->Add(this->mathin);
			this->tabPage1->Controls->Add(this->engin);
			this->tabPage1->Controls->Add(this->sciin);
			this->tabPage1->Controls->Add(this->label44);
			this->tabPage1->Controls->Add(this->searchbox1);
			this->tabPage1->Controls->Add(this->label45);
			this->tabPage1->Controls->Add(this->yrin);
			this->tabPage1->Location = System::Drawing::Point(4, 34);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1158, 494);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Input Grade";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// studnoin
			// 
			this->studnoin->AutoSize = true;
			this->studnoin->Location = System::Drawing::Point(190, 79);
			this->studnoin->Name = L"studnoin";
			this->studnoin->Size = System::Drawing::Size(0, 25);
			this->studnoin->TabIndex = 214;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(55, 79);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(107, 25);
			this->label15->TabIndex = 213;
			this->label15->Text = L"Student no";
			// 
			// searchin
			// 
			this->searchin->Location = System::Drawing::Point(769, 191);
			this->searchin->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->searchin->Name = L"searchin";
			this->searchin->Size = System::Drawing::Size(231, 51);
			this->searchin->TabIndex = 211;
			this->searchin->Text = L"Search student";
			this->searchin->UseVisualStyleBackColor = true;
			this->searchin->Click += gcnew System::EventHandler(this, &Gradsys::searchin_Click);
			// 
			// statin
			// 
			this->statin->AutoSize = true;
			this->statin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->statin->ForeColor = System::Drawing::Color::Lime;
			this->statin->Location = System::Drawing::Point(724, 126);
			this->statin->Name = L"statin";
			this->statin->Size = System::Drawing::Size(0, 38);
			this->statin->TabIndex = 207;
			// 
			// statlbl
			// 
			this->statlbl->AutoSize = true;
			this->statlbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->statlbl->Location = System::Drawing::Point(727, 88);
			this->statlbl->Name = L"statlbl";
			this->statlbl->Size = System::Drawing::Size(97, 26);
			this->statlbl->TabIndex = 206;
			this->statlbl->Text = L"STATUS";
			this->statlbl->Visible = false;
			// 
			// avelbl1
			// 
			this->avelbl1->AutoSize = true;
			this->avelbl1->Location = System::Drawing::Point(865, 306);
			this->avelbl1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->avelbl1->Name = L"avelbl1";
			this->avelbl1->Size = System::Drawing::Size(114, 25);
			this->avelbl1->TabIndex = 205;
			this->avelbl1->Text = L"AVERAGE:";
			this->avelbl1->Visible = false;
			// 
			// averin
			// 
			this->averin->AutoSize = true;
			this->averin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->averin->Location = System::Drawing::Point(975, 287);
			this->averin->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->averin->Name = L"averin";
			this->averin->Size = System::Drawing::Size(0, 61);
			this->averin->TabIndex = 204;
			// 
			// evaluatein
			// 
			this->evaluatein->Location = System::Drawing::Point(678, 291);
			this->evaluatein->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->evaluatein->Name = L"evaluatein";
			this->evaluatein->Size = System::Drawing::Size(145, 55);
			this->evaluatein->TabIndex = 209;
			this->evaluatein->Text = L"EVALUATE";
			this->evaluatein->UseVisualStyleBackColor = true;
			this->evaluatein->Visible = false;
			this->evaluatein->Click += gcnew System::EventHandler(this, &Gradsys::evaluatein_Click);
			// 
			// submitin
			// 
			this->submitin->Location = System::Drawing::Point(828, 390);
			this->submitin->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->submitin->Name = L"submitin";
			this->submitin->Size = System::Drawing::Size(112, 55);
			this->submitin->TabIndex = 208;
			this->submitin->Text = L"SUBMIT";
			this->submitin->UseVisualStyleBackColor = true;
			this->submitin->Visible = false;
			this->submitin->Click += gcnew System::EventHandler(this, &Gradsys::submitin_Click);
			// 
			// elecstat1
			// 
			this->elecstat1->AutoSize = true;
			this->elecstat1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->elecstat1->ForeColor = System::Drawing::Color::DarkRed;
			this->elecstat1->Location = System::Drawing::Point(604, 349);
			this->elecstat1->Name = L"elecstat1";
			this->elecstat1->Size = System::Drawing::Size(0, 26);
			this->elecstat1->TabIndex = 203;
			// 
			// mapehstat1
			// 
			this->mapehstat1->AutoSize = true;
			this->mapehstat1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mapehstat1->ForeColor = System::Drawing::Color::DarkRed;
			this->mapehstat1->Location = System::Drawing::Point(604, 281);
			this->mapehstat1->Name = L"mapehstat1";
			this->mapehstat1->Size = System::Drawing::Size(0, 26);
			this->mapehstat1->TabIndex = 202;
			// 
			// tlestat1
			// 
			this->tlestat1->AutoSize = true;
			this->tlestat1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tlestat1->ForeColor = System::Drawing::Color::DarkRed;
			this->tlestat1->Location = System::Drawing::Point(604, 217);
			this->tlestat1->Name = L"tlestat1";
			this->tlestat1->Size = System::Drawing::Size(0, 26);
			this->tlestat1->TabIndex = 201;
			// 
			// apstat1
			// 
			this->apstat1->AutoSize = true;
			this->apstat1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->apstat1->ForeColor = System::Drawing::Color::DarkRed;
			this->apstat1->Location = System::Drawing::Point(604, 145);
			this->apstat1->Name = L"apstat1";
			this->apstat1->Size = System::Drawing::Size(0, 26);
			this->apstat1->TabIndex = 200;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(380, 358);
			this->label28->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(109, 25);
			this->label28->TabIndex = 195;
			this->label28->Text = L"ELECTIVE";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(387, 289);
			this->label29->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(83, 25);
			this->label29->TabIndex = 194;
			this->label29->Text = L"MAPEH";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(397, 224);
			this->label30->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(49, 25);
			this->label30->TabIndex = 193;
			this->label30->Text = L"TLE";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(369, 154);
			this->label31->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(138, 50);
			this->label31->TabIndex = 192;
			this->label31->Text = L"    ARALIN \r\nPANLIPUNAN";
			// 
			// apin
			// 
			this->apin->Location = System::Drawing::Point(500, 149);
			this->apin->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->apin->Name = L"apin";
			this->apin->Size = System::Drawing::Size(77, 30);
			this->apin->TabIndex = 188;
			this->apin->Visible = false;
			// 
			// tlein
			// 
			this->tlein->Location = System::Drawing::Point(500, 221);
			this->tlein->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tlein->Name = L"tlein";
			this->tlein->Size = System::Drawing::Size(77, 30);
			this->tlein->TabIndex = 189;
			this->tlein->Visible = false;
			// 
			// mapin
			// 
			this->mapin->Location = System::Drawing::Point(500, 284);
			this->mapin->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->mapin->Name = L"mapin";
			this->mapin->Size = System::Drawing::Size(77, 30);
			this->mapin->TabIndex = 190;
			this->mapin->Visible = false;
			// 
			// elecin
			// 
			this->elecin->Location = System::Drawing::Point(500, 353);
			this->elecin->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->elecin->Name = L"elecin";
			this->elecin->Size = System::Drawing::Size(77, 30);
			this->elecin->TabIndex = 191;
			this->elecin->Visible = false;
			// 
			// filstat1
			// 
			this->filstat1->AutoSize = true;
			this->filstat1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->filstat1->ForeColor = System::Drawing::Color::DarkRed;
			this->filstat1->Location = System::Drawing::Point(262, 351);
			this->filstat1->Name = L"filstat1";
			this->filstat1->Size = System::Drawing::Size(0, 26);
			this->filstat1->TabIndex = 187;
			// 
			// mathstat1
			// 
			this->mathstat1->AutoSize = true;
			this->mathstat1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mathstat1->ForeColor = System::Drawing::Color::DarkRed;
			this->mathstat1->Location = System::Drawing::Point(262, 290);
			this->mathstat1->Name = L"mathstat1";
			this->mathstat1->Size = System::Drawing::Size(0, 26);
			this->mathstat1->TabIndex = 186;
			// 
			// scistat1
			// 
			this->scistat1->AutoSize = true;
			this->scistat1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->scistat1->ForeColor = System::Drawing::Color::DarkRed;
			this->scistat1->Location = System::Drawing::Point(262, 217);
			this->scistat1->Name = L"scistat1";
			this->scistat1->Size = System::Drawing::Size(0, 26);
			this->scistat1->TabIndex = 185;
			// 
			// engstat1
			// 
			this->engstat1->AutoSize = true;
			this->engstat1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->engstat1->ForeColor = System::Drawing::Color::DarkRed;
			this->engstat1->Location = System::Drawing::Point(262, 145);
			this->engstat1->Name = L"engstat1";
			this->engstat1->Size = System::Drawing::Size(0, 26);
			this->engstat1->TabIndex = 184;
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(45, 360);
			this->label37->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(93, 25);
			this->label37->TabIndex = 182;
			this->label37->Text = L"FILIPINO";
			// 
			// filin
			// 
			this->filin->Location = System::Drawing::Point(158, 360);
			this->filin->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->filin->Name = L"filin";
			this->filin->Size = System::Drawing::Size(77, 30);
			this->filin->TabIndex = 178;
			this->filin->Visible = false;
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Location = System::Drawing::Point(38, 225);
			this->label41->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(101, 25);
			this->label41->TabIndex = 176;
			this->label41->Text = L"SCIENCE";
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Location = System::Drawing::Point(55, 299);
			this->label42->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(70, 25);
			this->label42->TabIndex = 175;
			this->label42->Text = L"MATH";
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Location = System::Drawing::Point(38, 153);
			this->label43->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(98, 25);
			this->label43->TabIndex = 173;
			this->label43->Text = L"ENGLISH";
			// 
			// mathin
			// 
			this->mathin->Location = System::Drawing::Point(158, 293);
			this->mathin->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->mathin->Name = L"mathin";
			this->mathin->Size = System::Drawing::Size(77, 30);
			this->mathin->TabIndex = 177;
			this->mathin->Visible = false;
			// 
			// engin
			// 
			this->engin->Location = System::Drawing::Point(158, 149);
			this->engin->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->engin->Name = L"engin";
			this->engin->Size = System::Drawing::Size(77, 30);
			this->engin->TabIndex = 172;
			this->engin->Visible = false;
			// 
			// sciin
			// 
			this->sciin->Location = System::Drawing::Point(158, 221);
			this->sciin->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->sciin->Name = L"sciin";
			this->sciin->Size = System::Drawing::Size(77, 30);
			this->sciin->TabIndex = 174;
			this->sciin->Visible = false;
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label44->Location = System::Drawing::Point(55, 35);
			this->label44->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(137, 25);
			this->label44->TabIndex = 171;
			this->label44->Text = L"Student Name";
			// 
			// searchbox1
			// 
			this->searchbox1->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->searchbox1->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::CustomSource;
			this->searchbox1->Location = System::Drawing::Point(195, 34);
			this->searchbox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->searchbox1->Name = L"searchbox1";
			this->searchbox1->Size = System::Drawing::Size(320, 30);
			this->searchbox1->TabIndex = 168;
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label45->Location = System::Drawing::Point(727, 35);
			this->label45->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(132, 25);
			this->label45->TabIndex = 170;
			this->label45->Text = L"YEAR LEVEL";
			// 
			// yrin
			// 
			this->yrin->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->yrin->FormattingEnabled = true;
			this->yrin->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"2018", L"2019", L"2020", L"2021" });
			this->yrin->Location = System::Drawing::Point(870, 34);
			this->yrin->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->yrin->Name = L"yrin";
			this->yrin->Size = System::Drawing::Size(180, 33);
			this->yrin->TabIndex = 169;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->studno);
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->editbt);
			this->tabPage2->Controls->Add(this->searchst);
			this->tabPage2->Controls->Add(this->erase);
			this->tabPage2->Controls->Add(this->stats);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Controls->Add(this->avrg);
			this->tabPage2->Controls->Add(this->btnevaluate);
			this->tabPage2->Controls->Add(this->btnsubmit);
			this->tabPage2->Controls->Add(this->statelective);
			this->tabPage2->Controls->Add(this->statmapeh);
			this->tabPage2->Controls->Add(this->stattle);
			this->tabPage2->Controls->Add(this->statap);
			this->tabPage2->Controls->Add(this->elecstat);
			this->tabPage2->Controls->Add(this->mapehstat);
			this->tabPage2->Controls->Add(this->tlestat);
			this->tabPage2->Controls->Add(this->apstat);
			this->tabPage2->Controls->Add(this->label11);
			this->tabPage2->Controls->Add(this->label10);
			this->tabPage2->Controls->Add(this->label9);
			this->tabPage2->Controls->Add(this->label8);
			this->tabPage2->Controls->Add(this->tbap);
			this->tabPage2->Controls->Add(this->tbtle);
			this->tabPage2->Controls->Add(this->tbmapeh);
			this->tabPage2->Controls->Add(this->tbelec);
			this->tabPage2->Controls->Add(this->statfil);
			this->tabPage2->Controls->Add(this->statmath);
			this->tabPage2->Controls->Add(this->statsci);
			this->tabPage2->Controls->Add(this->stateng);
			this->tabPage2->Controls->Add(this->filstat);
			this->tabPage2->Controls->Add(this->label7);
			this->tabPage2->Controls->Add(this->tbfil);
			this->tabPage2->Controls->Add(this->mathstat);
			this->tabPage2->Controls->Add(this->scistat);
			this->tabPage2->Controls->Add(this->engstat);
			this->tabPage2->Controls->Add(this->label3);
			this->tabPage2->Controls->Add(this->label2);
			this->tabPage2->Controls->Add(this->label1);
			this->tabPage2->Controls->Add(this->tbmath);
			this->tabPage2->Controls->Add(this->tbenglish);
			this->tabPage2->Controls->Add(this->tbscience);
			this->tabPage2->Controls->Add(this->label13);
			this->tabPage2->Controls->Add(this->searchbox2);
			this->tabPage2->Controls->Add(this->label12);
			this->tabPage2->Controls->Add(this->yrlevel);
			this->tabPage2->Location = System::Drawing::Point(4, 34);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1158, 494);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Update Grade";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// studno
			// 
			this->studno->AutoSize = true;
			this->studno->Location = System::Drawing::Point(168, 83);
			this->studno->Name = L"studno";
			this->studno->Size = System::Drawing::Size(0, 25);
			this->studno->TabIndex = 167;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(33, 83);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(107, 25);
			this->label6->TabIndex = 166;
			this->label6->Text = L"Student no";
			// 
			// editbt
			// 
			this->editbt->Location = System::Drawing::Point(792, 186);
			this->editbt->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->editbt->Name = L"editbt";
			this->editbt->Size = System::Drawing::Size(165, 68);
			this->editbt->TabIndex = 165;
			this->editbt->Text = L"Edit";
			this->editbt->UseVisualStyleBackColor = true;
			this->editbt->Visible = false;
			this->editbt->Click += gcnew System::EventHandler(this, &Gradsys::editbt_Click);
			// 
			// searchst
			// 
			this->searchst->Location = System::Drawing::Point(747, 195);
			this->searchst->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->searchst->Name = L"searchst";
			this->searchst->Size = System::Drawing::Size(231, 51);
			this->searchst->TabIndex = 164;
			this->searchst->Text = L"Search student";
			this->searchst->UseVisualStyleBackColor = true;
			this->searchst->Click += gcnew System::EventHandler(this, &Gradsys::searchst_Click);
			// 
			// erase
			// 
			this->erase->Location = System::Drawing::Point(1011, 195);
			this->erase->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->erase->Name = L"erase";
			this->erase->Size = System::Drawing::Size(112, 51);
			this->erase->TabIndex = 163;
			this->erase->Text = L"Clear";
			this->erase->UseVisualStyleBackColor = true;
			this->erase->Click += gcnew System::EventHandler(this, &Gradsys::erase_Click);
			// 
			// stats
			// 
			this->stats->AutoSize = true;
			this->stats->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->stats->ForeColor = System::Drawing::Color::Lime;
			this->stats->Location = System::Drawing::Point(702, 130);
			this->stats->Name = L"stats";
			this->stats->Size = System::Drawing::Size(0, 38);
			this->stats->TabIndex = 160;
			this->stats->Visible = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(705, 92);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(97, 26);
			this->label5->TabIndex = 159;
			this->label5->Text = L"STATUS";
			this->label5->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(843, 310);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(114, 25);
			this->label4->TabIndex = 158;
			this->label4->Text = L"AVERAGE:";
			this->label4->Visible = false;
			// 
			// avrg
			// 
			this->avrg->AutoSize = true;
			this->avrg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->avrg->Location = System::Drawing::Point(953, 291);
			this->avrg->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->avrg->Name = L"avrg";
			this->avrg->Size = System::Drawing::Size(0, 61);
			this->avrg->TabIndex = 157;
			this->avrg->Visible = false;
			// 
			// btnevaluate
			// 
			this->btnevaluate->Location = System::Drawing::Point(656, 295);
			this->btnevaluate->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnevaluate->Name = L"btnevaluate";
			this->btnevaluate->Size = System::Drawing::Size(145, 55);
			this->btnevaluate->TabIndex = 162;
			this->btnevaluate->Text = L"EVALUATE";
			this->btnevaluate->UseVisualStyleBackColor = true;
			this->btnevaluate->Visible = false;
			this->btnevaluate->Click += gcnew System::EventHandler(this, &Gradsys::btnevaluate_Click);
			// 
			// btnsubmit
			// 
			this->btnsubmit->Location = System::Drawing::Point(848, 386);
			this->btnsubmit->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnsubmit->Name = L"btnsubmit";
			this->btnsubmit->Size = System::Drawing::Size(112, 55);
			this->btnsubmit->TabIndex = 161;
			this->btnsubmit->Text = L"SUBMIT";
			this->btnsubmit->UseVisualStyleBackColor = true;
			this->btnsubmit->Visible = false;
			this->btnsubmit->Click += gcnew System::EventHandler(this, &Gradsys::btnsubmit_Click);
			// 
			// statelective
			// 
			this->statelective->AutoSize = true;
			this->statelective->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->statelective->ForeColor = System::Drawing::Color::DarkRed;
			this->statelective->Location = System::Drawing::Point(582, 353);
			this->statelective->Name = L"statelective";
			this->statelective->Size = System::Drawing::Size(0, 26);
			this->statelective->TabIndex = 156;
			// 
			// statmapeh
			// 
			this->statmapeh->AutoSize = true;
			this->statmapeh->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->statmapeh->ForeColor = System::Drawing::Color::DarkRed;
			this->statmapeh->Location = System::Drawing::Point(582, 285);
			this->statmapeh->Name = L"statmapeh";
			this->statmapeh->Size = System::Drawing::Size(0, 26);
			this->statmapeh->TabIndex = 155;
			// 
			// stattle
			// 
			this->stattle->AutoSize = true;
			this->stattle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->stattle->ForeColor = System::Drawing::Color::DarkRed;
			this->stattle->Location = System::Drawing::Point(582, 221);
			this->stattle->Name = L"stattle";
			this->stattle->Size = System::Drawing::Size(0, 26);
			this->stattle->TabIndex = 154;
			// 
			// statap
			// 
			this->statap->AutoSize = true;
			this->statap->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->statap->ForeColor = System::Drawing::Color::DarkRed;
			this->statap->Location = System::Drawing::Point(582, 149);
			this->statap->Name = L"statap";
			this->statap->Size = System::Drawing::Size(0, 26);
			this->statap->TabIndex = 153;
			// 
			// elecstat
			// 
			this->elecstat->AutoSize = true;
			this->elecstat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->elecstat->ForeColor = System::Drawing::Color::RoyalBlue;
			this->elecstat->Location = System::Drawing::Point(489, 353);
			this->elecstat->Name = L"elecstat";
			this->elecstat->Size = System::Drawing::Size(40, 26);
			this->elecstat->TabIndex = 152;
			this->elecstat->Text = L"----";
			// 
			// mapehstat
			// 
			this->mapehstat->AutoSize = true;
			this->mapehstat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mapehstat->ForeColor = System::Drawing::Color::RoyalBlue;
			this->mapehstat->Location = System::Drawing::Point(489, 285);
			this->mapehstat->Name = L"mapehstat";
			this->mapehstat->Size = System::Drawing::Size(40, 26);
			this->mapehstat->TabIndex = 151;
			this->mapehstat->Text = L"----";
			// 
			// tlestat
			// 
			this->tlestat->AutoSize = true;
			this->tlestat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tlestat->ForeColor = System::Drawing::Color::RoyalBlue;
			this->tlestat->Location = System::Drawing::Point(489, 221);
			this->tlestat->Name = L"tlestat";
			this->tlestat->Size = System::Drawing::Size(40, 26);
			this->tlestat->TabIndex = 150;
			this->tlestat->Text = L"----";
			// 
			// apstat
			// 
			this->apstat->AutoSize = true;
			this->apstat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->apstat->ForeColor = System::Drawing::Color::RoyalBlue;
			this->apstat->Location = System::Drawing::Point(489, 149);
			this->apstat->Name = L"apstat";
			this->apstat->Size = System::Drawing::Size(40, 26);
			this->apstat->TabIndex = 149;
			this->apstat->Text = L"----";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(358, 362);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(109, 25);
			this->label11->TabIndex = 148;
			this->label11->Text = L"ELECTIVE";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(365, 293);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(83, 25);
			this->label10->TabIndex = 147;
			this->label10->Text = L"MAPEH";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(375, 228);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(49, 25);
			this->label9->TabIndex = 146;
			this->label9->Text = L"TLE";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(347, 158);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(138, 50);
			this->label8->TabIndex = 145;
			this->label8->Text = L"    ARALIN \r\nPANLIPUNAN";
			// 
			// tbap
			// 
			this->tbap->Location = System::Drawing::Point(478, 153);
			this->tbap->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tbap->Name = L"tbap";
			this->tbap->Size = System::Drawing::Size(77, 30);
			this->tbap->TabIndex = 141;
			this->tbap->Visible = false;
			// 
			// tbtle
			// 
			this->tbtle->Location = System::Drawing::Point(478, 225);
			this->tbtle->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tbtle->Name = L"tbtle";
			this->tbtle->Size = System::Drawing::Size(77, 30);
			this->tbtle->TabIndex = 142;
			this->tbtle->Visible = false;
			// 
			// tbmapeh
			// 
			this->tbmapeh->Location = System::Drawing::Point(478, 288);
			this->tbmapeh->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tbmapeh->Name = L"tbmapeh";
			this->tbmapeh->Size = System::Drawing::Size(77, 30);
			this->tbmapeh->TabIndex = 143;
			this->tbmapeh->Visible = false;
			// 
			// tbelec
			// 
			this->tbelec->Location = System::Drawing::Point(478, 357);
			this->tbelec->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tbelec->Name = L"tbelec";
			this->tbelec->Size = System::Drawing::Size(77, 30);
			this->tbelec->TabIndex = 144;
			this->tbelec->Visible = false;
			// 
			// statfil
			// 
			this->statfil->AutoSize = true;
			this->statfil->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->statfil->ForeColor = System::Drawing::Color::DarkRed;
			this->statfil->Location = System::Drawing::Point(240, 355);
			this->statfil->Name = L"statfil";
			this->statfil->Size = System::Drawing::Size(0, 26);
			this->statfil->TabIndex = 140;
			// 
			// statmath
			// 
			this->statmath->AutoSize = true;
			this->statmath->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->statmath->ForeColor = System::Drawing::Color::DarkRed;
			this->statmath->Location = System::Drawing::Point(240, 294);
			this->statmath->Name = L"statmath";
			this->statmath->Size = System::Drawing::Size(0, 26);
			this->statmath->TabIndex = 139;
			// 
			// statsci
			// 
			this->statsci->AutoSize = true;
			this->statsci->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->statsci->ForeColor = System::Drawing::Color::DarkRed;
			this->statsci->Location = System::Drawing::Point(240, 221);
			this->statsci->Name = L"statsci";
			this->statsci->Size = System::Drawing::Size(0, 26);
			this->statsci->TabIndex = 138;
			// 
			// stateng
			// 
			this->stateng->AutoSize = true;
			this->stateng->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->stateng->ForeColor = System::Drawing::Color::DarkRed;
			this->stateng->Location = System::Drawing::Point(240, 149);
			this->stateng->Name = L"stateng";
			this->stateng->Size = System::Drawing::Size(0, 26);
			this->stateng->TabIndex = 137;
			// 
			// filstat
			// 
			this->filstat->AutoSize = true;
			this->filstat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->filstat->ForeColor = System::Drawing::Color::RoyalBlue;
			this->filstat->Location = System::Drawing::Point(147, 355);
			this->filstat->Name = L"filstat";
			this->filstat->Size = System::Drawing::Size(40, 26);
			this->filstat->TabIndex = 136;
			this->filstat->Text = L"----";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(23, 364);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(93, 25);
			this->label7->TabIndex = 135;
			this->label7->Text = L"FILIPINO";
			// 
			// tbfil
			// 
			this->tbfil->Location = System::Drawing::Point(136, 364);
			this->tbfil->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tbfil->Name = L"tbfil";
			this->tbfil->Size = System::Drawing::Size(77, 30);
			this->tbfil->TabIndex = 131;
			this->tbfil->Visible = false;
			// 
			// mathstat
			// 
			this->mathstat->AutoSize = true;
			this->mathstat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mathstat->ForeColor = System::Drawing::Color::RoyalBlue;
			this->mathstat->Location = System::Drawing::Point(147, 294);
			this->mathstat->Name = L"mathstat";
			this->mathstat->Size = System::Drawing::Size(40, 26);
			this->mathstat->TabIndex = 134;
			this->mathstat->Text = L"----";
			// 
			// scistat
			// 
			this->scistat->AutoSize = true;
			this->scistat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->scistat->ForeColor = System::Drawing::Color::RoyalBlue;
			this->scistat->Location = System::Drawing::Point(147, 221);
			this->scistat->Name = L"scistat";
			this->scistat->Size = System::Drawing::Size(40, 26);
			this->scistat->TabIndex = 133;
			this->scistat->Text = L"----";
			// 
			// engstat
			// 
			this->engstat->AutoSize = true;
			this->engstat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->engstat->ForeColor = System::Drawing::Color::RoyalBlue;
			this->engstat->Location = System::Drawing::Point(147, 149);
			this->engstat->Name = L"engstat";
			this->engstat->Size = System::Drawing::Size(40, 26);
			this->engstat->TabIndex = 132;
			this->engstat->Text = L"----";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(16, 229);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(101, 25);
			this->label3->TabIndex = 129;
			this->label3->Text = L"SCIENCE";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(33, 303);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(70, 25);
			this->label2->TabIndex = 128;
			this->label2->Text = L"MATH";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(16, 157);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(98, 25);
			this->label1->TabIndex = 126;
			this->label1->Text = L"ENGLISH";
			// 
			// tbmath
			// 
			this->tbmath->Location = System::Drawing::Point(136, 297);
			this->tbmath->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tbmath->Name = L"tbmath";
			this->tbmath->Size = System::Drawing::Size(77, 30);
			this->tbmath->TabIndex = 130;
			this->tbmath->Visible = false;
			// 
			// tbenglish
			// 
			this->tbenglish->Location = System::Drawing::Point(136, 153);
			this->tbenglish->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tbenglish->Name = L"tbenglish";
			this->tbenglish->Size = System::Drawing::Size(77, 30);
			this->tbenglish->TabIndex = 125;
			this->tbenglish->Visible = false;
			// 
			// tbscience
			// 
			this->tbscience->Location = System::Drawing::Point(136, 225);
			this->tbscience->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tbscience->Name = L"tbscience";
			this->tbscience->Size = System::Drawing::Size(77, 30);
			this->tbscience->TabIndex = 127;
			this->tbscience->Visible = false;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(33, 39);
			this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(137, 25);
			this->label13->TabIndex = 124;
			this->label13->Text = L"Student Name";
			// 
			// searchbox2
			// 
			this->searchbox2->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->searchbox2->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::CustomSource;
			this->searchbox2->Location = System::Drawing::Point(173, 38);
			this->searchbox2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->searchbox2->Name = L"searchbox2";
			this->searchbox2->Size = System::Drawing::Size(320, 30);
			this->searchbox2->TabIndex = 88;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(705, 39);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(132, 25);
			this->label12->TabIndex = 123;
			this->label12->Text = L"YEAR LEVEL";
			// 
			// yrlevel
			// 
			this->yrlevel->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->yrlevel->FormattingEnabled = true;
			this->yrlevel->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"2018", L"2019", L"2020", L"2021" });
			this->yrlevel->Location = System::Drawing::Point(848, 38);
			this->yrlevel->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->yrlevel->Name = L"yrlevel";
			this->yrlevel->Size = System::Drawing::Size(180, 33);
			this->yrlevel->TabIndex = 90;
			// 
			// error1
			// 
			this->error1->ContainerControl = this;
			// 
			// error2
			// 
			this->error2->ContainerControl = this;
			// 
			// Gradsys
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1178, 544);
			this->Controls->Add(this->tabControl1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Gradsys";
			this->Text = L"Grading System";
			this->Load += gcnew System::EventHandler(this, &Gradsys::Gradsys_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->error1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->error2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion


private: System::Void Gradsys_Load(System::Object^  sender, System::EventArgs^  e) {
	fstream file;
	String ^str;
	string str1;

	file.open("Database\\Masterlist.txt", ios::in);
	while (getline(file, str1))
	{
		str = gcnew String(str1.c_str());
		searchbox1->AutoCompleteCustomSource->Add(str);
		searchbox2->AutoCompleteCustomSource->Add(str);
	}
	file.close();
}
private: System::Void searchst_Click(System::Object^  sender, System::EventArgs^  e) {
	
	int error[8];
	if (yrlevel->Text == "")
	{
		error1->SetError(yrlevel, "Enter academic year");
		error[0] = 1;
	}
	else
	{
		error1->Clear();
		error[0] = 0;
	}
	if (searchbox2->Text == "")
	{
		error2->SetError(searchbox2, "Enter student name");
		error[1] = 1;
	}
	else
	{
		error2->Clear();
		error[1] = 0;
	}
	if (errorchk(error, 2) == 0)
	{
		string yr = stringconversion(yrlevel->Text);
		string name = stringconversion(searchbox2->Text);
		String^ snum;
		string getnum;

		fstream search;
		search.open("Database\\" + yr + "\\allstudents\\" + name + ".txt", ios::in);
		getline(search, getnum);
		search.close();
		snum = gcnew String(getnum.c_str());
		studno->Text = snum;

		search.open("Database\\" + yr + "\\studentsgrade\\" + getnum + ".txt", ios::in);
		if (search.is_open())
		{
			string perline;
			vector <string>  grades;
			//cli::array<String^>^ arr = gcnew cli::array<String^>(30);
			int counter = 0;
			while (getline(search, perline, '\n'))
			{
				grades.push_back(perline);
				counter++;
			}

			String^ stat = gcnew String(grades[0].c_str());
			String^ eng = gcnew String(grades[1].c_str());
			String^ sci = gcnew String(grades[2].c_str());
			String^ math = gcnew String(grades[3].c_str());
			String^ fil = gcnew String(grades[4].c_str());
			String^ ap = gcnew String(grades[5].c_str());
			String^ tle = gcnew String(grades[6].c_str());
			String^ pe = gcnew String(grades[7].c_str());
			String^ elec = gcnew String(grades[8].c_str());
			label5->Visible = true;
			stats->Visible = true;
			stats->Text = stat;
			engstat->Text = eng;
			scistat->Text = sci;
			mathstat->Text = math;
			filstat->Text = fil;
			apstat->Text = ap;
			mapehstat->Text = pe;
			tlestat->Text = tle;
			elecstat->Text = elec;
			editbt->Visible = true;
			searchst->Visible = false;
			search.close();

		}
		else
		{
			MessageBox::Show("Student not found");
			search.close();
		}
	}
}
private: System::Void editbt_Click(System::Object^  sender, System::EventArgs^  e) {
	void *ptr = malloc(sizeof(studentgrades));
	searchbox2->Enabled = 0;
	yrlevel->Enabled = 0;
	erase->Visible = 0;
	studentgrades *gradings = new (ptr) studentgrades();
	String^ n = studno->Text;
	String^ yrlvl = yrlevel->Text;

	string studnum = stringconversion(n);
	string grdlevel = stringconversion(yrlvl);
	fstream edit;

	edit.open("Database\\" + grdlevel + "\\studentsgrade\\" + studnum + ".txt", ios::in);
	if (edit.is_open())
	{
		string perline;
		vector <string>  grades;
		int counter = 0;
		while (getline(edit, perline, '\n'))
		{
			grades.push_back(perline);
			counter++;
		}
		String^ stat = gcnew String(grades[0].c_str());
		String^ eng = gcnew String(grades[1].c_str());
		String^ sci = gcnew String(grades[2].c_str());
		String^ math = gcnew String(grades[3].c_str());
		String^ fil = gcnew String(grades[4].c_str());
		String^ ap = gcnew String(grades[5].c_str());
		String^ tle = gcnew String(grades[6].c_str());
		String^ pe = gcnew String(grades[7].c_str());
		String^ elec = gcnew String(grades[8].c_str());
		label5->Visible = true;
		stats->Visible = true;
		btnevaluate->Visible = true;
		label4->Visible = true;
		avrg->Visible = true;
		tbenglish->Text = eng;
		tbscience->Text = sci;
		tbmath->Text = math;
		tbfil->Text = fil;
		tbap->Text = ap;
		tbtle->Text = tle;
		tbmapeh->Text = pe;
		tbelec->Text = elec;
		tbenglish->Visible = true;
		tbscience->Visible = true;
		tbmath->Visible = true;
		tbfil->Visible = true;
		tbap->Visible = true;
		tbtle->Visible = true;
		tbmapeh->Visible = true;
		tbelec->Visible = true;
		engstat->Visible = false;
		scistat->Visible = false;
		mathstat->Visible = false;
		filstat->Visible = false;
		apstat->Visible = false;
		mapehstat->Visible = false;
		tlestat->Visible = false;
		elecstat->Visible = false;
		editbt->Visible = false;
		stats->Text = "";
		edit.close();
	}
}
private: System::Void btnevaluate_Click(System::Object^  sender, System::EventArgs^  e) {
	if (has_any_char(tbenglish->Text) == true || has_any_char(tbmath->Text) == true || has_any_char(tbscience->Text) == true || has_any_char(tbfil->Text) == true ||
		has_any_char(tbap->Text) == true || has_any_char(tbtle->Text) == true || has_any_char(tbmapeh->Text) == true || has_any_char(tbelec->Text) == true)
	{
		MessageBox::Show("Enter numbers only", "", MessageBoxButtons::OK);
	}
	else
	{
		btnsubmit->Visible = true;
		label5->Visible = true;

		
		int g[8];
		int i;

		g[0] = int::Parse(tbmath->Text);
		if (g[0] < 65)
		{
			tbmath->Text = "65";
			g[0] = 65;
		}
		else if (g[0] > 100)
		{
			tbmath->Text = "100";
			g[0] = 100;
		}
		g[1] = int::Parse(tbenglish->Text);
		if (g[1] < 65)
		{
			tbenglish->Text = "65";
			g[1] = 65;
		}
		else if (g[1] > 100)
		{
			tbenglish->Text = "100";
			g[1] = 100;
		}
		g[2] = int::Parse(tbscience->Text);
		if (g[2] < 65)
		{
			tbscience->Text = "65";
			g[2] = 65;
		}
		else if (g[2] > 100)
		{
			tbscience->Text = "100";
			g[2] = 100;
		}
		g[3] = int ::Parse(tbfil->Text);
		if (g[3] < 65)
		{
			tbfil->Text = "65";
			g[3] = 65;
		}
		else if (g[3] > 100)
		{
			tbfil->Text = "100";
			g[3] = 100;
		}
		g[4] = int ::Parse(tbap->Text);
		if (g[4] < 65)
		{
			tbap->Text = "65";
			g[4] = 65;
		}
		else if (g[4] > 100)
		{
			tbap->Text = "100";
			g[4] = 100;
		}
		g[5] = int ::Parse(tbtle->Text);
		if (g[5] < 65)
		{
			tbtle->Text = "65";
			g[5] = 65;
		}
		else if (g[5] > 100)
		{
			tbtle->Text = "100";
			g[5] = 100;
		}
		g[6] = int ::Parse(tbmapeh->Text);
		if (g[6] < 65)
		{
			tbmapeh->Text = "65";
			g[6] = 65;
		}
		else if (g[6] > 100)
		{
			tbmapeh->Text = "100";
			g[6] = 100;
		}
		g[7] = int ::Parse(tbelec->Text);
		if (g[7] < 65)
		{
			tbelec->Text = "65";
			g[7] = 65;
		}
		else if (g[7] > 100)
		{
			tbelec->Text = "100";
			g[7] = 100;
		}
	
		int mean = calculate(g);
		std::string avs = std::to_string(mean);
		String^ av = gcnew String(avs.c_str());
		avrg->Text = av;
		int chk=0;

		for (i = 0; i < 8; i++)
		{
			if (g[i] >= 75)
				chk++;
		}

		if (chk == 8) {
			stats->Text = "PASSED";
		}
		else {
			stats->Text = "FAILED";
		}

		if (g[0] >= 75) {
			mathstat->Text = "PASSED";
		}
		else {
			mathstat->Text = "FAILED";
		}
		if (g[2] >= 75) {
			scistat->Text = "PASSED";
		}
		else {
			scistat->Text = "FAILED";
		}
		if (g[1] >= 75) {
			engstat->Text = "PASSED";
		}
		else {
			engstat->Text = "FAILED";
		}
		if (g[3] >= 75) {
			filstat->Text = "PASSED";
		}
		else {
			filstat->Text = "FAILED";
		}
		if (g[4] >= 75) {
			apstat->Text = "PASSED";
		}
		else {
			apstat->Text = "FAILED";
		}
		if (g[5] >= 75) {
			tlestat->Text = "PASSED";
		}
		else {
			tlestat->Text = "FAILED";
		}
		if (g[6] >= 75) {
			mapehstat->Text = "PASSED";
		}
		else {
			mapehstat->Text = "FAILED";
		}
		if (g[7] >= 75) {
			elecstat->Text = "PASSED";
		}
		else {
			elecstat->Text = "FAILED";
		}
	}
}
private: System::Void btnsubmit_Click(System::Object^  sender, System::EventArgs^  e) {
	void *ptr = malloc(sizeof(studentgrades));
	studentgrades *gradings = new (ptr) studentgrades();

	String^ getnum = studno->Text;
	String^ getmath = tbmath->Text;
	String^ getenglish = tbenglish->Text;
	String^ getscience = tbscience->Text;
	String^ getfil = tbfil->Text;
	String^ getap = tbap->Text;
	String^ gettle = tbtle->Text;
	String^ getmapeh = tbmapeh->Text;
	String^ getelec = tbelec->Text;
	String^ getstat = stats->Text;
	String^ getyr = yrlevel->Text;

	string num = stringconversion(getnum);
	gradings->mathgrade = stringconversion(getmath);
	gradings->englishgrade = stringconversion(getenglish);
	gradings->sciencegrade = stringconversion(getscience);
	gradings->filipinograde = stringconversion(getfil);
	gradings->aralingpanlipunangrade = stringconversion(getap);
	gradings->tlegrade = stringconversion(gettle);
	gradings->mapehgrade = stringconversion(getmapeh);
	gradings->electivegrade = stringconversion(getelec);
	gradings->PoF = stringconversion(getstat);
	gradings->yearlevel = stringconversion(getyr);

	fstream editgrades;
	editgrades.open("Database\\" + gradings->yearlevel + "\\studentsgrade\\" + num + ".txt", ios::out);
	editgrades << gradings->PoF << endl;
	editgrades << gradings->englishgrade << endl << gradings->sciencegrade << endl << gradings->mathgrade << endl << gradings->filipinograde << endl << gradings->aralingpanlipunangrade << endl << gradings->tlegrade << endl << gradings->mapehgrade << endl << gradings->electivegrade << endl;
	editgrades.close();

	MessageBox::Show("Edit grade success", "", MessageBoxButtons::OK, MessageBoxIcon::Information);
	engstat->Text = tbenglish->Text;
	scistat->Text = tbscience->Text;
	mathstat->Text = tbmath->Text;
	filstat->Text = tbfil->Text;
	apstat->Text = tbap->Text;
	mapehstat->Text = tbmapeh->Text;
	tlestat->Text = tbtle->Text;
	elecstat->Text = tbelec->Text;
	tbenglish->Visible = 0;
	tbscience->Visible = 0;
	tbmath->Visible = 0;
	tbfil->Visible = 0;
	tbap->Visible = 0;
	tbmapeh->Visible = 0;
	tbtle->Visible = 0;
	tbelec->Visible = 0;
	searchst->Visible = 1;
	searchbox2->Enabled = 1;
	yrlevel->Enabled = 1;
	btnevaluate->Visible = 0;
	btnsubmit->Visible = 0;
	erase->Visible = 1;
	engstat->Visible = 1;
	scistat->Visible = 1;
	mathstat->Visible = 1;
	filstat->Visible = 1;
	apstat->Visible = 1;
	mapehstat->Visible = 1;
	tlestat->Visible = 1;
	elecstat->Visible = 1;

}
private: System::Void erase_Click(System::Object^  sender, System::EventArgs^  e) {
	editbt->Visible = 0;
	searchst->Visible = 1;
	label5->Visible = 0;
	tbmath->Clear();
	tbenglish->Clear();
	tbscience->Clear();
	tbfil->Clear();
	tbap->Clear();
	tbtle->Clear();
	tbmapeh->Clear();
	tbelec->Clear();
	stats->Text = "";
	avrg->Text = "";
	engstat->Text = "----";
	mathstat->Text = "----";
	scistat->Text = "----";
	filstat->Text = "----";
	apstat->Text = "----";
	tlestat->Text = "----";
	mapehstat->Text = "----";
	elecstat->Text = "----";
	searchbox2->Clear();
	yrlevel->SelectedIndex = -1;
	studno->Text = "";
}
private: System::Void searchin_Click(System::Object^  sender, System::EventArgs^  e) {
	int error[8];
	if (yrin->Text == "")
	{
		error1->SetError(yrin, "Enter academic year");
		error[0] = 1;
	}
	else
	{
		error1->Clear();
		error[0] = 0;
	}
	if (searchbox1->Text == "")
	{
		error2->SetError(searchbox1, "Enter student name");
		error[1] = 1;
	}
	else
	{
		error2->Clear();
		error[1] = 0;
	}
	if(errorchk(error,2)==0)
	{
		string yr = stringconversion(yrin->Text);
		string name = stringconversion(searchbox1->Text);
		String^ snum;
		string getnum;
		fstream search;
		search.open("Database\\" + yr + "\\allstudents\\" + name + ".txt", ios::in);
		if (search.is_open())
		{
			getline(search, getnum);
			snum = gcnew String(getnum.c_str());
			studnoin->Text = snum;

			engin->Visible = 1;
			sciin->Visible = 1;
			mathin->Visible = 1;
			filin->Visible = 1;
			apin->Visible = 1;
			tlein->Visible = 1;
			mapin->Visible = 1;
			elecin->Visible = 1;
			evaluatein->Visible = 1;
			searchin->Visible = 0;
			searchbox1->Enabled = 0;
			statlbl->Visible = 1;
			avelbl1->Visible = 1;
			yrin->Enabled = 0;
		}
		else
		{
			MessageBox::Show("Student not found");
		}
		search.close();
	}

}
private: System::Void evaluatein_Click(System::Object^  sender, System::EventArgs^  e) {
	if (has_any_char(engin->Text)==true || has_any_char(mathin->Text)== true || has_any_char(sciin->Text) == true || has_any_char(filin->Text) == true ||
		has_any_char(apin->Text) == true || has_any_char(tlein->Text) == true || has_any_char(mapin->Text) == true || has_any_char(elecin->Text) == true)
	{
		MessageBox::Show("Enter numbers only", "", MessageBoxButtons::OK);
	}
	else
	{
		submitin->Visible = true;
		statlbl->Visible = true;

		int g[8];
		int i;

		g[0] = int::Parse(mathin->Text); 
		if (g[0] < 65)
		{
			mathin->Text = "65";
			g[0] = 65;
		}
		else if (g[0] > 100)
		{
			mathin->Text = "100";
			g[0] = 100;
		}
		g[1] = int::Parse(engin->Text);
		if (g[1] < 65)
		{
			engin->Text = "65";
			g[1] = 65;
		}
		else if (g[1] > 100)
		{
			engin->Text = "100";
			g[1] = 100;
		}
		g[2] = int::Parse(sciin->Text);
		if (g[2] < 65)
		{
			sciin->Text = "65";
			g[2] = 65;
		}
		else if (g[2] > 100)
		{
			sciin->Text = "100";
			g[2] = 100;
		}
		g[3] = int ::Parse(filin->Text);
		if (g[3] < 65)
		{
			filin->Text = "65";
			g[3] = 65;
		}
		else if (g[3] > 100)
		{
			filin->Text = "100";
			g[3] = 100;
		}
		g[4] = int ::Parse(apin->Text);
		if (g[4] < 65)
		{
			apin->Text = "65";
			g[4] = 65;
		}
		else if (g[4] > 100)
		{
			apin->Text = "100";
			g[4] = 100;
		}
		g[5] = int ::Parse(tlein->Text);
		if (g[5] < 65)
		{
			tlein->Text = "65";
			g[5] = 65;
		}
		else if (g[5] > 100)
		{
			tlein->Text = "100";
			g[5] = 100;
		}
		g[6] = int ::Parse(mapin->Text);
		if (g[6] < 65)
		{
			mapin->Text = "65";
			g[6] = 65;
		}
		else if (g[6] > 100)
		{
			mapin->Text = "100";
			g[6] = 100;
		}
		g[7] = int ::Parse(elecin->Text);
		if (g[7] < 65)
		{
			elecin->Text = "65";
			g[7] = 65;
		}
		else if (g[7] > 100)
		{
			elecin->Text = "100";
			g[7] = 100;
		}

		int mean = calculate(g);
		std::string avs = std::to_string(mean);
		String^ av = gcnew String(avs.c_str());
		averin->Text = av;
		int chk = 0;

		for (i = 0; i < 8; i++)
		{
			if (g[i] >= 75)
				chk++;
		}

		if (chk == 8) {
			statin->Text = "PASSED";
		}
		else {
			statin->Text = "FAILED";
		}

		if (g[0] >= 75) {
			mathstat1->Text = "PASSED";
		}
		else {
			mathstat1->Text = "FAILED";
		}
		if (g[2] >= 75) {
			scistat1->Text = "PASSED";
		}
		else {
			scistat1->Text = "FAILED";
		}
		if (g[1] >= 75) {
			engstat1->Text = "PASSED";
		}
		else {
			engstat1->Text = "FAILED";
		}
		if (g[3] >= 75) {
			filstat1->Text = "PASSED";
		}
		else {
			filstat1->Text = "FAILED";
		}
		if (g[4] >= 75) {
			apstat1->Text = "PASSED";
		}
		else {
			apstat1->Text = "FAILED";
		}
		if (g[5] >= 75) {
			tlestat1->Text = "PASSED";
		}
		else {
			tlestat1->Text = "FAILED";
		}
		if (g[6] >= 75) {
			mapehstat1->Text = "PASSED";
		}
		else {
			mapehstat1->Text = "FAILED";
		}
		if (g[7] >= 75) {
			elecstat1->Text = "PASSED";
		}
		else {
			elecstat1->Text = "FAILED";
		}
	}
}
private: System::Void submitin_Click(System::Object^  sender, System::EventArgs^  e) {
	void *ptr = malloc(sizeof(studentgrades));
	studentgrades *gradings = new (ptr) studentgrades();

	String^ getnum = studnoin->Text;
	String^ getmath = mathin->Text;
	String^ getenglish = engin->Text;
	String^ getscience = sciin->Text;
	String^ getfil = filin->Text;
	String^ getap = apin->Text;
	String^ gettle = tlein->Text;
	String^ getmapeh = mapin->Text;
	String^ getelec = elecin->Text;
	String^ getstat = statin->Text;
	String^ getyr = yrin->Text;

	string num = stringconversion(getnum);
	gradings->mathgrade = stringconversion(getmath);
	gradings->englishgrade = stringconversion(getenglish);
	gradings->sciencegrade = stringconversion(getscience);
	gradings->filipinograde = stringconversion(getfil);
	gradings->aralingpanlipunangrade = stringconversion(getap);
	gradings->tlegrade = stringconversion(gettle);
	gradings->mapehgrade = stringconversion(getmapeh);
	gradings->electivegrade = stringconversion(getelec);
	gradings->PoF = stringconversion(getstat);
	gradings->yearlevel = stringconversion(getyr);

	fstream editgrades;
	editgrades.open("Database\\" + gradings->yearlevel + "\\studentsgrade\\" + num + ".txt", ios::out);
	editgrades << gradings->PoF << endl;
	editgrades << gradings->englishgrade << endl << gradings->sciencegrade << endl << gradings->mathgrade << endl << gradings->filipinograde << endl << gradings->aralingpanlipunangrade << endl << gradings->tlegrade << endl << gradings->mapehgrade << endl << gradings->electivegrade << endl;
	editgrades.close();
	MessageBox::Show("Input Grades Success", "", MessageBoxButtons::OK, MessageBoxIcon::Information);

	searchin->Visible = 1;
	searchbox1->Enabled = 1;
	yrin->Enabled = 1;
	submitin->Visible = 0;
	evaluatein->Visible = 0;
	mathin->Clear();
	engin->Clear();
	sciin->Clear();
	filin->Clear();
	apin->Clear();
	tlein->Clear();
	mapin->Clear();
	elecin->Clear();
	statin->Text = "";
	averin->Text = "";
	studnoin->Text = "";
	searchbox1->Clear();
	yrin->SelectedIndex = -1;
	averin->Text = "";
	engstat1->Text = "";
	mathstat1->Text = "";
	scistat1->Text = "";
	filstat1->Text = "";
	apstat1->Text = "";
	tlestat1->Text = "";
	mapehstat1->Text = "";
	elecstat1->Text = "";
	avelbl1->Visible = 0;
	statlbl->Visible = 0;
}
};
}
