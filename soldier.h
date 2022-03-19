#ifndef SOLDIER_H_
#define SOLDIER_H_

#include <string>

using namespace std;

class Soldier
{
public:

   const void printSoldierInfo();

   void set_paragraph(string input);
   void set_company(string input);

   const string get_paragraph();
   const string get_company();
   
private:
   string paragraph; // soldier's unedited roster paragraph
   string company;
};


#endif