#include<iostream>

using namespace std;

int main()
{
  int numb1,numb2,result;
  char oper;
  cout<<"WELCOME TO CALCULATOR "<<endl<<endl;
  
  starting_point:
  cout<<"enter a first number: ";
  cin>>numb1;
  
  cout<<"please enter the (+,-,*,/)operator: ";
  cin>>oper;
  
  cout<<"enter a second number: ";
  cin>>numb2;
  
  if(oper == '+')
    result = numb1 + numb2;
    
  if(oper == '-')
    result = numb1 - numb2;
    
   if(oper == '*')
    result = numb1 * numb2;
    
   if(oper == '/')
    result = numb1 / numb2; 
    
   if(oper=='+' || oper=='-' || oper== '*'|| oper=='/') 
   {
      cout<<"Your result is: "<<result;
   }
    
   else
   {
   cout<<"You entered an undefined transaction"<<endl;
   cout<<"the calculator is restarted";
   goto starting_point;
   }
    



return 0;
}
