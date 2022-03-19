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

   // getline(testInput, line);

   string currentCompany = "";

   Soldier soldierArray[4];
   int arrayCounter = 0;

   while (!testInput.eof())
   {
      getline(testInput, line);
      
      // 1) pick current company 2) input soldier paragraph 3) blankspace, skip
      if (line.find("COMPANY \"") != string::npos)
      {
         currentCompany = line[9];
         cout << "COMPANY SET" << endl;
      } else if (line != "")
      {
         cout << "SOLDIER SET" << arrayCounter << endl;
         soldierArray[arrayCounter].set_paragraph(line);
         soldierArray[arrayCounter].set_company(currentCompany);
         arrayCounter++;
      }
   }

   for (int i = 0; i < 4; i++)
   {
      cout << i << " ";
      soldierArray[i].printSoldierInfo();
   }

   return 0;
}