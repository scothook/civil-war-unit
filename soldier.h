#ifndef SOLDIER_H_
#define SOLDIER_H_

#include <string>

using namespace std;

class Soldier
{
public:
   void set_paragraph(string input);

   const string get_paragraph();
   
private:
   string paragraph; // soldier's unedited roster paragraph
};


#endif