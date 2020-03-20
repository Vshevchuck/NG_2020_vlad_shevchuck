#include <iostream>

using namespace std;

int main()
{
    int dots[5];
    int secondDots[5];
    int check=0;
    int stopPaint=0;

    for(int counter=0;counter<5;counter++)
    {
        cout<<"how much dots you need?"<<endl;
        cin>>dots[counter];
    }
    for(int counter=0;counter<5;counter++)
    {
       secondDots[counter]=dots[counter];
    }
    while(stopPaint == 0)
    {

        for(int counter=0;counter<5;counter++)
        {
            if(secondDots[counter]>0)
            {
                cout<<"*";
                secondDots[counter]--;
            }
            else{
                cout<<" ";
            }

            if(secondDots[counter]==0)
            {
               check++;
            }
            if(check==5)
            {
                stopPaint=1;
            }
        }
        check=0;
        cout<<endl;
    }

}
