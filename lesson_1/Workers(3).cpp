#include <iostream>

using namespace std;

int main()
{
    int worker1=0;
    int worker2=0;
    int worker3=0;
    int maxPay=0;
    int minPay=0;
    cout<<"enter the salary of the first worker"<<endl;
    cin>>worker1;
    cout<<"enter the salary of the second worker"<<endl;
    cin>>worker2;
    cout<<"enter the salary of the third worker"<<endl;
    cin>>worker3;
    if (worker1 >= worker2 && worker1 >= worker3)
    {
        maxPay=worker1;
    }

    if (worker2 >= worker3 && worker2 >= worker1){
        maxPay=worker2;
    }

    if (worker3 >= worker2 && worker3 >= worker1)
    {
        maxPay=worker3;
    }
    if (worker1 <= worker2 && worker1 <= worker3)
    {
        minPay=worker1;
    }

    if (worker2 <= worker3 && worker2 <= worker1){
        minPay=worker2;
    }

    if (worker3 <= worker2 && worker3 <= worker1)
    {
        minPay=worker3;
    }
    cout<<"difference "<<maxPay-minPay;
}

