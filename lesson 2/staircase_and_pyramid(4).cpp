#include <iostream>

using namespace std;

int main()
{
    cout<<"part  a"<<endl;
    int sizeSquare=0;
    cout<<"enter size your ladder "<<endl;
    cin>>sizeSquare;
    for(int countSize=0;countSize<sizeSquare;countSize++)
    {
        for(int countStars=sizeSquare;countStars-countSize<=sizeSquare;countStars++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<"part  b"<<endl;
    sizeSquare=0;
    cout<<"enter size your ladder "<<endl;
    cin>>sizeSquare;
    for(int countSize=0;countSize<sizeSquare;countSize++)
    {
        for(int countStars=0;countStars<sizeSquare-countSize;countStars++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<"part 3 pyramid  "<<endl;
    sizeSquare=0;
    cout<<"enter size your ladder "<<endl;
    cin>>sizeSquare;
    for(int countSize=0;countSize<sizeSquare;countSize++)
    {
        for(int tabs=0;tabs<sizeSquare-countSize-1;tabs++)
        {
         cout<<" ";
        }
        for(int countStars=0;countStars<=countSize*2;countStars++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

}
