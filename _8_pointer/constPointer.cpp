#include<iostream>
int main(){
int daysInMonth = 30;
int* const pDaysInMonth = &daysInMonth;
*pDaysInMonth = 31; // OK! Data pointed to can be changed
int daysInLunarMonth = 28;
//pDaysInMonth = &daysInLunarMonth; // Not OK! Cannot change address!

int hoursInDay = 24;
const int* pointsToInt = &hoursInDay;
int monthsInYear = 12;
pointsToInt = &monthsInYear; // OK!
//*pointsToInt = 13; // Not OK! Cannot change data being pointed to
//int* newPointer = pointsToInt; // Not OK! Cannot assign const to non-const 
int hoursInDay = 24;

const int* const pHoursInDay = &hoursInDay;
//*pHoursInDay = 25; // Not OK! Cannot change data being pointed to
int daysInMonth = 30;
//pHoursInDay = &daysInMonth; // Not OK! Cannot change address 

}
