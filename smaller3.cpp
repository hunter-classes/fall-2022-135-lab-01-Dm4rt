#include <iostream>

/*
Author:Daniel Martinez
Course: CSCI-135
Instructor: Gennadiy Maryash
Asignment: Lab1B

This program asks the user to input three numbers.
The first number is stored in the variable firstNum.
The second number is stored in the variable secondNum.
The third number is stored in the variable thirdNum.
An if statement determines whether firstNum or secondNum
is smaller and stores it in the variable smallerNum.
An if statement then determines if thirdNum is smaller
than smallerNum. If so, smallerNum stores, thirdNum.
The variable smallerNum is then printed.

 */
int main()
{
  
  int firstNum, secondNum,thirdNum,smallerNum;
  
  std:: cout<<"Enter the first number:";
  std:: cin >>firstNum;
  std:: cout<<"Enter the second number:";
  std:: cin >>secondNum;
  std:: cout<<"Enter the third number:";
  std:: cin >>thirdNum;
  std:: cout<<"\n";
  
  if(firstNum<secondNum){
    smallerNum=firstNum;
  }
  else{
    smallerNum=secondNum;
  }

  if(thirdNum<smallerNum){
    smallerNum=thirdNum;
  }
  
  std:: cout<<"The smaller of the three is "<<smallerNum<<std::endl; 
  
  
}
