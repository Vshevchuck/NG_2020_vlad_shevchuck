#include <iostream>
#include <math.h>

using namespace std;

int getNumbers(){
    int number;
    cout << "Enter number-";
    cin >> number;
    return number;
}
int add(int numberOne,int numberTwo)
{
    int add=numberOne+numberTwo;
    return add;
}
int difference(int numberOne,int numberTwo)
{
    int diff = numberOne-numberTwo;
    return diff;
}
int mult(int numberOne,int numberTwo)
{
    int mult=numberOne*numberTwo;
    return mult;
}
int division(int numberOne,int numberTwo)
{
    int div=numberOne/numberTwo;
    return div;
}
int root(int number)
{
    return sqrt(number);
}
int power(int number){
    int degree;
    cout << "Enter degree: ";
    cin >> degree;
    return pow(number,degree);
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
            cout<<add(numberOne,numberTwo);
            break;
        case 2:
            cout<<difference(numberOne,numberTwo);
            break;
        case 3:
            cout<<mult(numberOne,numberTwo);
            break;
        case 4:
            cout<<division(numberOne,numberTwo);
            break;
        case 5:
            cout<<root(numberOne)<<","<<root(numberTwo);
            break;
        case 6:
            cout<<power(numberOne)<<endl;
            cout<<power(numberTwo);
        }
    }

}
