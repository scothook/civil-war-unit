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
#include "binarySearchTree.h"

using namespace std;


int main() {
   BST regimentTree;
   //regimentTree.createUnit("testRoster.txt");
   regimentTree.createUnit("rawRoster.txt");
   //regimentTree.printRoster();
   regimentTree.printAges();

   return 0;
}