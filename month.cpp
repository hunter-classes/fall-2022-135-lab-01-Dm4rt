#include <iostream>

/*
Author:Daniel Martinez
Course: CSCI-135
Instructor: Gennadiy Maryash
Asignment: Lab1D

This program asks user to input a year and month.
The year is stored in the variable year, and month
in the variable month. A series of if statements 
determines if the year is a leap year, and stores
this info in the yearType variable. If the month
is below 7, than the rule that an odd month receives
31 days and an even 30 applies. Months 7 and up have
the opposite rule, with even having 31 and odd 30. 
The number of days is store in the days variable.
Additionally, if month is ever 2, the program 
checks for yearType. If its a leap year, days becomes
29, else it becomes 28.
Finally the variable days is printed.

 */
int main()
{
  
  int year, month, days;
  std:: string yearType;
  
  std:: cout<<"Enter year:";
  std:: cin >>year;
  std:: cout<<"Enter month:";
  std:: cin >>month;
  std:: cout<<"\n";

  if(year%4>0){
    yearType="Common year";
  }
  else if(year%100>0){
    yearType="Leap year";
  }
  else if(year%400>0){
    yearType="Common year";
  }
  else{
    yearType="Leap year";
  }

  if(month>7){
    if(month%2==0){
      days=31;
    }
    else{
      days=30;
    }
  }
  else{
    if(month%2==0){
      days=30;
      if(month==2){
	if(yearType=="Leap year"){
	  days=29;
	}
	else{
	  days=28;
	}
      }
    }
    else{
      days=31;
    }
  }
  
  std:: cout<<days<<" days"<<std::endl; 
  
  
}
