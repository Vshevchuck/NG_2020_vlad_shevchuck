#include <iostream>

using namespace std;

int main()
{
    int numbers=0;
    int counter=0;
    cout<<"enter number and we show all numbers from 0 to your number"<<endl;
    cin>>numbers;
    while(counter<numbers)
    {
        cout<<counter;
        cout<<",";
        counter++;

    }
    cout<<counter;

}
