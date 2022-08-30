#include <iostream>

/*
Author:Daniel Martinez
Course: CSCI-135
Instructor: Gennadiy Maryash
Asignment: Lab1A
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
