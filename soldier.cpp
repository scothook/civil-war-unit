#include "soldier.h"
#include <string>

using namespace std;

void Soldier::set_paragraph(string input)
{
   paragraph = input;
}

const string Soldier::get_paragraph()
{
   return paragraph;
}