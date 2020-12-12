//Implementation file date
#include <iostream>
#include "dateType.h"

using namespace std;

void dateType::setDate(int month, int day, int year)
{   
  dMonth = month;
  dDay = day;
  dYear = year;
  
  int LDM;

  if (1 <= month && month <=12)
    dMonth = month;
  else 
    dMonth = 1;

  if ( month == 4 || month == 6 || month == 9 || month == 11){
  LDM = 30;
  if (1 <= day && day <= LDM)
    dDay = day;
  else
    dDay = 1;
  }

  if ( month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
    LDM = 31;
    if (1 <= day && day <= LDM)
      dDay = day;
    else
      dDay = 1;
  }

  if (month == 2){
    if (isLeapYear(year)){
      LDM = 29;
      if (1 <= day && day <= LDM)
        dDay = day;
      else
        dDay = 1;
    }
    else {
      LDM = 28;
      if (1 <= day && day <= LDM)
        dDay = day;
      else
        dDay = 1;
    }
      
  }

  if (1900 <= year && year <= 2020)
    dYear = year;
  else
    dYear = 1990;
  
}

int dateType::getDay() const
{
    return dDay;
}

int dateType::getMonth() const
{
    return dMonth;
}

int dateType::getYear() const
{
    return dYear;
}

void dateType::print() const
{
    cout << dMonth << "-" << dDay << "-" << dYear;
}

bool dateType :: isLeapYear(const int year)const{
  if (year % 4 == 0)
    if ( year % 100 == 0)
      if ( year % 400 == 0)
        return true;
      else
        return false;
    else
      return true;
  else
    return false;
}

//Constructor with parameters
dateType::dateType(int month, int day, int year)
{
  dMonth = month;
  dDay = day;
  dYear = year;

}

