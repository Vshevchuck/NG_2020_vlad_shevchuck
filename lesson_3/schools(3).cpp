#include <iostream>

using namespace std;

int main()
{
    int schoolList [10];
    int yourSchool=0;
    int foundSchool=0;
    for(int counter=0;counter<10;counter++)
    {
        cout<<"please,enter school number"<<endl;
        cin>>schoolList[counter];
    }
    cout<<"enter your school number"<<endl;
    cin>>yourSchool;
    for(int counter=0;counter<10;counter++)
    {
        if(yourSchool==schoolList[counter])
        {
            cout<<"i know this school!";
            foundSchool=1;
            counter=10;
        }
    }
    if(foundSchool==0)
    {
        cout<<"i dont know this school!";
    }

}
