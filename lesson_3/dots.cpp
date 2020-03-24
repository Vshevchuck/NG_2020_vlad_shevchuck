#include <iostream>

using namespace std;

int main()
{
    int dots[5];
    int stopPaint=0;
    int step=0;
    int endArr=0;

    for(int counter=0;counter<5;counter++)
    {
        cout<<"how much dots you need?"<<endl;
        cin>>dots[counter];
    }
    for(int counter=0;counter<5;counter++)
    {
       dots[counter]=dots[counter];
    }
    while(stopPaint == 0)
    {

        for(int counter=0;counter<5;counter++)
        {
            if(dots[counter]-step>0)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
                endArr++;
            }

            if(endArr==5)
            {
                stopPaint=1;
            }

        }
        step++;
        endArr=0;
        cout<<endl;
    }

}
