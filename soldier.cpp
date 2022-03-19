#include "soldier.h"
#include <string>
#include <iostream>

using namespace std;

Soldier::Soldier(string companyInput, string line)
{
   paragraph = line;
   company = companyInput;
   age = findAge(line);
}

int Soldier::findAge(string line)
{
   int startChar = line.find("Age") + 4;
   string ageString = line.substr(startChar, 2);
   return atoi(ageString.c_str());
}



const void Soldier::printSoldierInfo(int printType)
{
   switch (printType)
   {
      case 0:
         cout << paragraph << endl;
         cout << company << endl;
         cout << age << endl;
         cout << endl;
      case 1:
         cout << age << endl;

   }

}

void Soldier::set_paragraph(string input)
{
   paragraph = input;
}

void Soldier::set_company(string input)
{
   company = input;
}

const string Soldier::get_paragraph()
{
   return paragraph;
}

const string Soldier::get_company()
{
   return company;
}