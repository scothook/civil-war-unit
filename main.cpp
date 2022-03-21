// ************TO DO******************
// total parse through paragraphs
// ***handle typos
// generate cool statistics


#include <iostream>
#include <fstream>
#include <string>
#include "date.h"
#include "soldier.h"
#include "binarySearchTree.h"

using namespace std;


int main() {
   BST regimentTree;
   //regimentTree.createUnit("testRoster.txt");
   regimentTree.createUnit("rawRoster.txt");
   //regimentTree.printRoster();
   //regimentTree.printAges();
   //regimentTree.printFirstNames();
   //regimentTree.printLastNames();
   //cout << regimentTree.get_soldierCount();
   //regimentTree.printResidences();
   //regimentTree.printNativities();

   return 0;
}