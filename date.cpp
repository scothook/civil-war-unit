#include <string>
#include <iostream>
#include "date.h"

using namespace std;

Date::Date()
{
   day = 0;
   month = 0;
   year = 0;
}

Date::Date(string input)
{
   day = 0;
   month = 0;
   year = 0;
   int endChar = input.size();

   // find month
   if (input.find("Jan") != string::npos) month = 1;
   else if (input.find("Feb") != string::npos) month = 2;
   else if (input.find("Mar") != string::npos) month = 3;
   else if (input.find("Apr") != string::npos) month = 4;
   else if (input.find("May") != string::npos) month = 5;
   else if (input.find("Jun") != string::npos) month = 6;
   else if (input.find("Jul") != string::npos) month = 7;
   else if (input.find("Aug") != string::npos) month = 8;
   else if (input.find("Sep") != string::npos) month = 9;
   else if (input.find("Oct") != string::npos) month = 10;
   else if (input.find("Nov") != string::npos) month = 11;
   else if (input.find("Dec") != string::npos) month = 12;

   // find day
   if (input.find(",") != string::npos)
      day = atoi(input.substr(input.find(",") - 2, 2).c_str());

   // find year
   int yearCandidate = atoi(input.substr(endChar - 4, 4).c_str());
   if (yearCandidate >= 1800 && yearCandidate <= 1867) year = yearCandidate;
}

bool Date::operator<(const Date & rightDate) const
{
   if (year < rightDate.year) return true;
   else if (year > rightDate.year) return false;
   else
   {
      if (month < rightDate.month) return true;
      else if (month > rightDate.month) return false;
      else
      {
         if (day < rightDate.day) return true;
         else return false;
      }
   }
}

bool Date::operator=(const Date & rightDate) const
{
   if (year == rightDate.year && 
      month == rightDate.month && 
      day == rightDate.day) return true;
   else return false;
}
