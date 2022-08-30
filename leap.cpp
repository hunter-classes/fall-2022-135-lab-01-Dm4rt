#include <iostream>

/*
Author:Daniel Martinez
Course: CSCI-135
Instructor: Gennadiy Maryash
Asignment: Lab1C

This program asks user to input a year.
The value is stored in the variable year.
The program then follows a sequence of if statements
to determine if the year variable is a leap year.
The if sequence makes sure that if year is divisible by 4, 
and additionaly 100, that it must also be divisible by 
400 to be considered a leapYear.
This chain of if and else if statements constantly
changes the value of yearType to ensure that yearType 
is precisely valued as a leap or common year.

 */
int main()
{
  
  int year;
  std:: string yearType;
  
  std:: cout<<"Enter year:";
  std:: cin >>year;
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
  
  std:: cout<<yearType<<std::endl; 
  
  
}
