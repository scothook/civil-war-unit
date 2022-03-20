#ifndef SOLDIER_H_
#define SOLDIER_H_

#include <string>

using namespace std;

class Soldier
{
public:
   Soldier(string company, string line);

   const void printSoldierInfo(int printType);

   void set_paragraph(string input);
   void set_company(string input);

   const string get_paragraph();
   const string get_company();
   
private:
   string paragraph; // soldier's unedited roster paragraph
   string company;
   string firstName;
   string lastName;
   int age;

   int findAge(string line);
   string findFirstName(string line);
   string findLastName(string line);
};


#endif