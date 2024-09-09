//
// Created by Mirziyod on 09/09/24.
//

#include <iostream>
using namespace std;
int main(){
  int number1,number2,number3;
  cout<<"a is equal to";
  cin>>number1;
  cout<<"b is equal to";
  cin>>number2;
  cout<<"c is equal to";
  cin>>number3;

  cout<<"a-b-c is equal to ";
  cout<<number1-number2-number3<<endl;
    cout<<"bc-a is equal to";
  cout<<number2*number3-number1<<endl;
  cout<<"2b-c+5a is equal to";
  cout<<2*number2-number3+5*number1<<endl;
  return 0;
  }