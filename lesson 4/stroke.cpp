#include <iostream>

using namespace std;

int main()
{
    char arr[100];
    int index=0;
    int counter=0;
    for(int cleaner=0;cleaner<100;cleaner++)
    {
        arr[cleaner]=0;
    }
    cout<<"enter your string"<<endl;
    cin.getline(arr,100);
    if(arr[index] != 0)
    {

        while(arr[index] != 0)
        {

            if((arr[index] <'A' || (arr[index] >'Z' && arr[index]<'a') || (arr[index]>'z')))
            {
                counter++;
            }
            index++;
        }
        cout<<"your string has "<<counter<<" words"<<endl;
    }
    else{
        cout<<"your string has not words"<<endl;
    }

}
