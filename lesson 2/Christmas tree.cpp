#include <iostream>

using namespace std;

int main()
{
    int sizeSquare=0;
    cout<<"enter size your christmas tree "<<endl;
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
    for(int tabs=0;tabs<=sizeSquare-2;tabs++)
      {
         cout<<" ";
      }
      cout<<"*";
}
