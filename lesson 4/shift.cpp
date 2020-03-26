#include <iostream>

using namespace std;
int main()
{
    char arr[100];
    for(int index=0;index<100;index++)
    {
        arr[index]=0;
    }
    int index=0;
    cout<<"enter the string"<<endl;
    cin.getline(arr,100);
    while(arr[index]!=0)
    {
        if((arr[index]>='a' && arr[index]<='z') || (arr[index]>='A' && arr[index]<='Z'))
        {
            arr[index]-=32;
        }
        cout<<arr[index];
        index++;
    }
}
