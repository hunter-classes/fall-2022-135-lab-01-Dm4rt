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
An if statment than determines the smaller number between 
firstNum and secondNum:
If firstNum is smaller, smallerNum stores the value of firstNum
else smallerNum stores the value of secondNum.
Then another if statement determines the smaller number between
smallerNum and thirdNum:
If thirdNum is smaller, smallerNum stores the value of thirdNum.
Theres no need for an else statement in this case, as smallerNum
will still be considered the smallest number if this condition fails
In the end, smallerNum is printed

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
  std:: cout<<"The smaller of the two is "<<smallerNum<<std::endl; 
  
  
}
