#ifndef DATE_H_
#define DATE_H_

#include <string>

using namespace std;

class Date
{
public:
   Date();
   Date(string input);

   bool operator<(const Date & rightDate) const;
   bool operator=(const Date & rightDate) const;
private:
   int day;
   int month;
   int year;
};

#endif
