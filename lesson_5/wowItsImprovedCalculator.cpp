#include <iostream>

using namespace std;
int EnterNumberOne(){
    int numberOne;
    cout<<"Enter number one - ";
    cin>>numberOne;
    return numberOne;
}
int EnterNumberTwo(){
    int numberTwo;
    cout<<"Enter number two - ";
    cin>>numberTwo;
    return numberTwo;
}
void add(int numberOne,int numberTwo)
{
  cout<<numberOne+numberTwo;
}
int main()
{
    int act=0;
    int numberOne=EnterNumberOne();
    int numberTwo=EnterNumberTwo();
    cout<<"Enter act:"<<endl;
    cout<<"sum - 1"<<endl;
    cout<<"difference - 2"<<endl;
    cout<<"multiplication - 3"<<endl;
    cout<<"division - 4"<<endl;
    cout<<"Finding the root - 5"<<endl;
    cout<<"Finding a degree - 6"<<endl;
    cin>>act;
    if(act <=0 || act >7)
    {
        cout<<"error";
    }
    else
    {
        switch (act)
        {
        case 1:
               cout<<add(numberOne,numberTwo);
        case 2:
               cout<<add(numberOne,numberTwo);
        case 3:
               cout<<add(numberOne,numberTwo);
        case 4:
               cout<<add(numberOne,numberTwo);
        case 5:
               cout<<add(numberOne,numberTwo);
        case 6:
               cout<<add(numberOne,numberTwo);
        }
    }
}
