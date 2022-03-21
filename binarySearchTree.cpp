#include "binarySearchTree.h"

Node::Node()
{
   soldier = NULL;
   left = NULL;
   right = NULL;
}

BST::BST()
{
   soldierCount = 0;
   root = NULL;
}

void BST::createUnit(string fileName)
{
   ifstream inputFile(fileName);

   string line = "";
   string currentCompany = "";

   while (!inputFile.eof())
   {
      getline(inputFile, line);

      if (line.find("COMPANY") != string::npos)
      {
         currentCompany = line[9];
      } 
      else if (line != "")
      {
         soldierCount++;
         addSoldier(root, currentCompany, line);
      }
   }
}

void BST::addSoldier(Node* currentNode, string company, string line)
{
   if (!currentNode)
   {
      currentNode = new Node;
      currentNode->soldier = new Soldier(company, line);
      if (!root) root = currentNode;
   }
   else
   {
      if (line < currentNode->soldier->get_paragraph())
      {
         if (!currentNode->left)
         {
            currentNode->left = new Node;
            currentNode->left->soldier = new Soldier(company, line);
         }
         else
         {
            addSoldier(currentNode->left, company, line);
         }
      }
      else
      {
         if (!currentNode->right)
         {
            currentNode->right = new Node;
            currentNode->right->soldier = new Soldier(company, line);
         }
         else
         {
            addSoldier(currentNode->right, company, line);
         }
      }
   }
}

int BST::get_soldierCount()
{
   return soldierCount;
}

void BST::printRoster()
{
   printHelper(root, 0);
}

void BST::printAges()
{
   printHelper(root, 1);
}

void BST::printFirstNames()
{
   printHelper(root, 2);
}

void BST::printLastNames()
{
   printHelper(root, 3);
}

//print first and last

void BST::printResidences()
{
   printHelper(root, 4);
}

void BST::printNativities()
{
   printHelper(root, 5);
}

void BST::printHelper(Node* currentNode, int printType)
{
   if (currentNode)
   {
      printHelper(currentNode->left, printType);
      currentNode->soldier->printSoldierInfo(printType);
      printHelper(currentNode->right, printType);
   }
}