#include <iostream>

using namespace std;

int main()
{
    char arr[30];
    int index=0;
    int counter=0;
    int stop=0;
    int check=0;
    int lock=0;
    int second=0;
    int first=0;
    int maxString=0;
    for(int cleaner=0;cleaner<30;cleaner++)
    {
        arr[cleaner]=0;
    }
    cout<<"enter your string"<<endl;
    cin.getline(arr,30);
    if(arr[index] != 0)
    {

        while(arr[index] != 0)
        {

            if((arr[index]>='a' && arr[index]<='z') || (arr[index]>='A' && arr[index]<='Z'))
            {

                if(stop==0)
                {
                    if(lock==0){
                        check=index;
                        lock=1;
                    }

                    counter++;
                }

                if((arr[index+1] <'A' || (arr[index+1] >'Z' && arr[index+1]<'a') || (arr[index+1]>'z')))
                {
                     stop=1;
                     if(maxString<counter)
                     {
                         maxString=counter;
                         second=index;
                         first=check;
                     }
                     lock=0;
                     counter=0;
                }

            }
            stop=0;
            index++;
        }
        index=first;
        while(index<=second)
        {
            cout<<arr[index];
            index++;
        }
    }
}
