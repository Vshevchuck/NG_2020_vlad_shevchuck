#include <iostream>

using namespace std;

int main()
{
    int sizeSquare=0;
    cout<<"enter size your square"<<endl;
    cin>>sizeSquare;
    for(int i=0;i<sizeSquare;i++)
    {
        for(int j=0;j<sizeSquare;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

}
