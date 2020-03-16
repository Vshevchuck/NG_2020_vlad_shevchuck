#include <iostream>

using namespace std;

int main()
{
    int arr[20];
    int maxS=0;
    int currentStars=0;
    for(int cleaner=0;cleaner<20;cleaner++)
    {
        arr[cleaner]=0;
    }
    for(int counter=0;counter<20;counter++)
    {
        cout<<"enter stars not paired quantity"<<endl;
        cin>>arr[counter];
        if(maxS<arr[counter])
        {
            maxS = arr[counter];
        }
        if(arr[counter] == 0)
        {
            break;
        }
        if(arr[counter] % 2 == 0 )
        {
            cout<<"error"<<endl;
            counter--;
        }
    }
    for(int counter=0;counter<20;counter++)
    {
        currentStars=arr[counter];
        while(currentStars<=maxS)
        {
            cout<<" ";
            currentStars+=2;
        }
        if(arr[counter]==0)
        {
            break;
        }
        while(arr[counter]>0)
        {
            cout<<"*";
            arr[counter]--;
        }
        cout<<endl;

    }
}
