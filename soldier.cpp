#include "soldier.h"
#include <string>
#include <iostream>

using namespace std;

Soldier::Soldier(string companyInput, string line)
{
   paragraph = line;
   company = companyInput;
   age = findAge(line);
   firstName = findFirstName(line);
   lastName = findLastName(line);
   residence = findResidence(line);
   nativity = findNativity(line);
}

int Soldier::findAge(string line)
{
   int startChar = line.find("Age") + 4;
   string ageString = line.substr(startChar, 2);
   return atoi(ageString.c_str());
}

string Soldier::findFirstName(string line)
{
   int startChar = line.find(" ");
   int endChar = line.find(".", startChar);
   return line.substr(startChar, endChar - startChar);
}

string Soldier::findLastName(string line)
{
   int endChar;
   if (line.find(",") < line.find(" ")) endChar = line.find(",");
   else if (line.find(".") < line.find(" ")) endChar = line.find(".");
   else endChar = line.find(" ");
   return line.substr(0, endChar);
}

string Soldier::findResidence(string line)
{
   if (line.find("Residence") != string::npos)
   {
      int startChar = line.find("Residence") + 10;
      int endChar = line.find(",", startChar);
      return line.substr(startChar, endChar - startChar);
   }
   else return "No residence listed";
}

string Soldier::findNativity(string line)
{
   if (line.find("nativity") != string::npos)
   {
      int startChar = line.find("nativity") + 9;
      int endChar = line.find(".", startChar);
      return line.substr(startChar, endChar - startChar);
   }
   else return "No nativity listed";
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
         break;
      case 1:
         cout << age << endl;
         break;
      case 2:
         cout << firstName << endl;
         break;
      case 3:
         cout << lastName << endl;
         break;
      case 4:
         cout << residence << endl;
         break;
      case 5:
         cout << nativity << endl;
         break;

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