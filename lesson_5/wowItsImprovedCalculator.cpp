#include <iostream>
#include <math.h>

using namespace std;


int getNumbers(){
  int number;
  cout << "Enter number-";
  cin >> number;
  return number;
}
void add(int numberOne,int numberTwo)
{
    cout<<numberOne+numberTwo;
}
void difference(int numberOne,int numberTwo)
{
    cout<<numberOne-numberTwo;
}
void mult(int numberOne,int numberTwo)
{
    cout<<numberOne*numberTwo;
}
void division(int numberOne,int numberTwo)
{
    cout<<numberOne/numberTwo;
}
void root(int numberOne,int numberTwo)
{
    cout<<sqrt(numberOne)<<","<<sqrt(numberOne);
}
void power(int numberOne, int numberTwo){
  int degree;
  cout << "Enter degree: ";
  cin >> degree;
  cout<<pow(numberOne,degree)<<","<<pow(numberTwo,degree)<< endl;
}
int main()
{
    int act=0;
    int numberOne=getNumbers();
    int numberTwo=getNumbers();
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
            add(numberOne,numberTwo);
            break;
        case 2:
            difference(numberOne,numberTwo);
            break;
        case 3:
            mult(numberOne,numberTwo);
            break;
        case 4:
            division(numberOne,numberTwo);
            break;
        case 5:
            root(numberOne,numberTwo);
            break;
        case 6:
            power(numberOne,numberTwo);
        }
    }

}
