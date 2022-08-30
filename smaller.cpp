#include <iostream>

/*
Author:Daniel Martinez
Course: CSCI-135
Instructor: Gennadiy Maryash
Asignment: Lab1A

This program asks the user to input two numbers.
The first number is store in the variable firstNum.
The second number is stored in the variable secondNum.
Afterwards, an if statement checks to see which of the two variables is smaller.
If firstNum is smaller, the variable smallerNum stores the value of firstNum,
else smallerNum stores the value of secondNum.
smallerNum is the variable that is printed in the end.
 */
int main()
{
  
  int firstNum, secondNum,smallerNum;
  
  std:: cout<<"Enter the first number:";
  std:: cin >>firstNum;
  //std:: cout<<"\n";
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
