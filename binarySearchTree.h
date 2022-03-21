#ifndef BINARYSEARCHTREE_H_
#define BINARYSEARCHTREE_H_

#include <fstream>
#include <iostream>
#include "soldier.h"


using namespace std;

struct Node
{
   Node();
   Soldier* soldier;
   Node* left;
   Node* right;
};

class BST
{
public:
   BST();
   void createUnit(string fileName);
   void addSoldier(Node* currentNode, string company, string line);

   int get_soldierCount();

   void printHelper(Node* currentNode, int printType);

   void printRoster();
   void printAges();
   void printFirstNames();
   void printLastNames();
   void printResidences();
   void printNativities();

private:
   int soldierCount;
   Node* root;
};



#endif