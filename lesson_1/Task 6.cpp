#include <iostream>
using namespace std;

int main()
{
    int a=0;
    int b=0;
    int c=0;
    cout<<"enter first number"<<endl;
    cin>>a;
    cout<<"enter second number"<<endl;
    cin>>b;
    cout<<"enter third number"<<endl;
    cin>>c;
    if(a*b==c || a*c==b || b*c==a)
    {
        cout<<"yes";
    }
    else
        cout<<"no";
}

