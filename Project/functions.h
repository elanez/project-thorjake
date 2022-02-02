#pragma once
#include <algorithm>
#include <string>
#include <cctype>
#include <iostream>
#include <string>
#include <msclr/marshal_cppstd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sstream>
#include <cstring>
#include <fstream>

using namespace std;
using namespace System;

bool has_any_digits(const string& s);
string stringconversion(String ^str);
String^ systemstring(string str);
int errorchk(int err[], int n);
bool has_any_char(String ^str);
String^ displayfunction(string dummy);
String^ calc_yr(string str);
String^ calc_yrlvl(string str);
int calculate(int z[]);

struct name {
	string sname;
	string fname;
	string mname;
};
struct level {
	string grade;
	string sect;
	string SY;
};
struct biodata {
	string birthdate;
	string civilstatus;
	string sex;
	string address;
	string contact;
	string citizenship;
};
struct requirements {
	string birthcertification;
	string goodmoral;
	string medical;
	string form137;
};

typedef struct {
	string studidnum;
	struct level SYgradesect;
	struct name wholename;
	struct biodata bio;
	struct requirements req;
} INFORMATION;

typedef struct{
	string yearlevel;
	string mathgrade;
	string englishgrade;
	string sciencegrade;
	string filipinograde;
	string aralingpanlipunangrade;
	string tlegrade;
	string mapehgrade;
	string electivegrade;
	string PoF;
}studentgrades;