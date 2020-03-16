#include <iostream>

using namespace std;

int main()
{
    int dots[5];
    int check=0;
    int stopPaint=0;
    for(int counter=0;counter<5;counter++)
    {
        cout<<"how much dots you need?"<<endl;
        cin>>dots[counter];
    }
    while(stopPaint == 0)
    {

        for(int counter=0;counter<5;counter++)
        {
            if(dots[counter]>0)
            {
                cout<<"*";
                dots[counter]--;
            }
            else{
                cout<<" ";
            }

        }
        for(int counter=0;counter<5;counter++)
        {
            if(dots[counter]==0)
            {
               check++;
            }
            if(check==5)
            {
                stopPaint=1;
            }
        }
        cout<<endl;
        check=0;
    }

}
