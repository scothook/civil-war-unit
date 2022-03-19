#ifndef BINARYSEARCHTREE_H_
#define BINARYSEARCHTREE_H_

#include <fstream>
#include <iostream>
#include "soldier.h"


using namespace std;

struct Node
{
   Soldier soldier;
   Node* left;
   Node* right;
};

class BST
{
public:
   void createUnit(string fileName);
   void printRoster();
   void addSoldier(string line);
   // new node (new soldier)
   // sort many different ways
private:
   Node* root;
};



#endif