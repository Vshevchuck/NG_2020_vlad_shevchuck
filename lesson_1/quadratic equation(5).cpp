#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a=0;
    int b=0;
    int c=0;
    cout<<"enter three numbers to create and solve the quadratic equation"<<endl;
    cout<<"your the quadratic equation will be like Ax^2+Bx+C=0"<<endl;
    cout<<endl;
    cout<<"enter A"<<endl;
    cin>>a;
    cout<<"enter B"<<endl;
    cin>>b;
    cout<<"enter C"<<endl;
    cin>>c;
    double d=b*b-4*a*c;
    if(d<0)
    {
        cout<<"no solutions";
    }
    if(d==0)
    {
        double x=-b/2*a;
        cout<<"one x because d=0"<<x;
    }
    if(d>0)
    {
        double x1=((-b) + sqrt(d)) / (2 * a);
        double x2=((-b) - sqrt(d)) / (2 * a);
        cout<<x1<<","<<x2;
    }
}

