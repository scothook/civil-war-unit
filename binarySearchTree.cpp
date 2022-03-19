#include "binarySearchTree.h"

void BST::createUnit(string fileName)
{
   ifstream inputFile(fileName);

   string line = "";
   string currentCompany = "";

   while (!inputFile.eof())
   {
      getline(inputFile, line);

      // 1) pick current company 2) input soldier paragraph 3) blankspace, skip
      if (line.find("COMPANY") != string::npos)
      {
         currentCompany = line[9];
      } 
      else if (line != "")
      {
         addSoldier(line);
      }
   }
}

void BST::addSoldier(string line)
{
   cout << "soldier added" << endl;
}

void BST::printRoster()
{
   cout << "Here's the printed roster" << endl;
}