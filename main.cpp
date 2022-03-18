// ************TO DO******************
// soldier constructor
// dynamic storage for soldiers
// handle input of any possible line
// create and give soldiers paragraphs
// parse through paragraphs
// ***handle typos
// generate cool statistics


#include <iostream>
#include <fstream>
#include <string>
#include "soldier.h"

using namespace std;

int main() {
   ifstream testInput ("testRoster.txt");

   string line;

   getline(testInput, line);

   while (!testInput.eof())
   {
      // 1) pick current company 2) input soldier paragraph 3) blankspace, skip
      if (line == "")
      {
         cout << "blank" << endl;
      }
      else if (line.find("COMPANY") != string::npos)
      {
         cout << "company" << endl;
      } else
      {
         
      }
      getline(testInput, line);
   }

   Soldier firstSoldier;
   firstSoldier.set_paragraph(line);
   cout << firstSoldier.get_paragraph() << endl;

   return 0;
}