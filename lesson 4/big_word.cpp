#include <iostream>

using namespace std;

int main()
{
    char arr[50];
    int index = 0;
    int counter = 0;
    int maxString = 0;
    int pointWrite=0;
    cout << "enter your string"<<endl;
    cin.getline(arr, 50);
    while (arr[index] != 0)
    {
        if (arr[index] >= 'A' && arr[index] <= 'Z'  || (arr[index]>='a' && arr[index]<='z'))
        {
            counter++;
        }
        if((arr[index] <'A' || (arr[index] >'Z' && arr[index]<'a') || (arr[index]>'z')))
        {
            if (counter > maxString)
            {
                maxString = counter;
                pointWrite = index - maxString;
            }
            counter = 0;
        }
        if(arr[index + 1] == 0)
        {
            if (counter > maxString)
            {
                maxString = counter;
                pointWrite = index - maxString + 1;
            }
        }
        index++;
    }
    index=0;
    while(index < maxString)
    {
        cout << arr[pointWrite];
        pointWrite++;
        index++;
    }


}
