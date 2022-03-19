#include "soldier.h"
#include <string>
#include <iostream>

using namespace std;

const void Soldier::printSoldierInfo()
{
   cout << paragraph << endl;
   cout << company << endl << endl;
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