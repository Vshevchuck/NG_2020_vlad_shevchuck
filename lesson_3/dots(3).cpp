#include <iostream>

using namespace std;

int main()
{
    int arr[20];
    int maxS=0;
    int index=0;
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
    while(arr[index] != 0)
    {
        currentStars=arr[index];
        while(currentStars<=maxS)
        {
            cout<<" ";
            currentStars+=2;
        }
        while(arr[index]>0)
        {
            cout<<"*";
            arr[index]--;
        }
        cout<<endl;
        index++;
    }
}
