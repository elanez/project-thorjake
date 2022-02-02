#include "functions.h"

bool has_any_digits(const std::string & s)
{
	return std::any_of(s.begin(), s.end(), ::isdigit);
}

std::string stringconversion(System::String ^str)
{
	return msclr::interop::marshal_as<std::string>(str);
}

String^ systemstring(string str)
{
	return gcnew String(str.c_str());
}

int errorchk(int err[], int n)
{
	int i, count=0;
	for (i = 0; i < n; i++)
	{
		if (err[i] > 0)
			count++;
	}
	return count;
}

bool has_any_char(String ^str)
{
	if (!System::Text::RegularExpressions::Regex::IsMatch(str, "^[0-9]+$"))
		return true;
	else
		return false;
}

String^ displayfunction(string dummy)
{
	String^ converter = gcnew String(dummy.c_str());
	return converter;
}

String^ calc_yr(string str)
{
	int num;
	std::istringstream iss(str);
	iss >> num;
	num++;
	std::stringstream ss;
	ss << num;
	str = ss.str();
	String ^result = gcnew String(str.c_str());
	return result;
}

String^ calc_yrlvl(string str)
{
	if (str == "Grade 7")
		return "Grade 8";
	else if (str == "Grade 8")
		return "Grade 9";
	else if (str == "Grade 9")
		return "Grade 10";
	else if(str == "Grade 10")
		return "Graduating";
}

int calculate(int z[])
{

	int sum=0;
	int average;
	for (int i = 0; i < 8; i++)
	{
		sum += z[i];
	}
	average = sum / 8;
	return average;
}