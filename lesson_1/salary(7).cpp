#include <iostream>
using namespace std;

int main()
{
    int yourSalary=0;
    cout<<"Enter your salary"<<endl;
    cin>>yourSalary;
    if(yourSalary > 999)
    {
        if(yourSalary < 1000000)
        {
            cout<<"well"<<endl;
        }
        if(yourSalary > 99999)
        {
            cout<<"you are a millionaire"<<endl;
        }
    }
    if(yourSalary < 1000)
    {
        cout<<"work more"<<endl;
    }
    cout<<"but you are good";
}

