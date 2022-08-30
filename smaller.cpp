#include <iostream>

/*
Author:Daniel Martinez
Course: CSCI-135
Instructor: Gennadiy Maryash
Asignment: Lab1B

This program asks the user to input two numbers.
The first number is stored in the variable firstNum.
The second number is stored in the variable secondNum.
An if statement determines whether firstNum or secondNum
is smaller and stores it in the variable smallerNum.
The variable smallerNum is then printed.

 */
int main()
{
  
  int firstNum, secondNum,smallerNum;
  
  std:: cout<<"Enter the first number:";
  std:: cin >>firstNum;
  std:: cout<<"Enter the second number:";
  std:: cin >>secondNum;
  std:: cout<<"\n";
  
  if(firstNum<secondNum){
    smallerNum=firstNum;
  }
  else{
    smallerNum=secondNum;
  }
  
  std:: cout<<"The smaller of the two is "<<smallerNum<<std::endl; 
  
  
}
