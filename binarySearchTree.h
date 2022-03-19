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
   void printRoster();
   void printHelper(Node* currentNode);
   void addSoldier(Node* currentNode, string company, string line);
   // new node (new soldier)
   // sort many different ways
private:
   Node* root;
};



#endif