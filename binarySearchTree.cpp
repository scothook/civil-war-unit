#include "binarySearchTree.h"

Node::Node()
{
   soldier = NULL;
   left = NULL;
   right = NULL;
}

BST::BST()
{
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

void BST::printRoster()
{
   printHelper(root, 0);
}

void BST::printAges()
{
   printHelper(root, 1);
}

void BST::printNames()
{
   printHelper(root, 2);
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