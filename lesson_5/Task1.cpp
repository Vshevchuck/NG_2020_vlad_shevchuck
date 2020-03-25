#include <iostream>

using namespace std;
 int* multpl(int arr [],int mult)
{
        for(int index=0;index<5;index++)
        {
            arr[index]*=mult;
        }
        return arr;
}
int main()
{
    int arr[5];
    int mult=0;
    cout<<"enter multiplication"<<endl;
    cin>>mult;
    for(int index=0;index<5;index++)
    {
        cout<<"enter the number"<<endl;
        cin>>arr[index];
    }
    multpl(arr ,mult);
    for(int index=0;index<5;index++)
    {
        cout<<arr[index]<<" ";
    }


}
