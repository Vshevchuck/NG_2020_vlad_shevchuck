#include <iostream>

using namespace std;

int main()
{
  int firstNumer=0;
  int secondNumber=0;
  int ourAct=0;
  cout<<"insert the number"<<endl;
  cin>>firstNumer;
  cout<<"insert the number"<<endl;
  cin>>secondNumber;
  cout<<"if you want the amount, click 1"<<endl;
  cout<<"if you want a difference, press 2"<<endl;
  cout<<"if you want multiplication, press 3"<<endl;
  cout<<"if you want division, press 4"<<endl;
  cin>>ourAct;
  if(ourAct > 4 || ourAct < 1)
  {
      cout<<"error";
  }
  if(ourAct == 1)
  {
      cout<<firstNumer+secondNumber;
  }
  if(ourAct == 2)
  {
      cout<<firstNumer-secondNumber;
  }
  if(ourAct == 3)
  {
      cout<<firstNumer*secondNumber;
  }
  if(ourAct == 4)
  {
      cout<<firstNumer*secondNumber;
  }
}
