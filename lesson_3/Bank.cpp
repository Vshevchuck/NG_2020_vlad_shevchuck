#include <iostream>

using namespace std;

int main()
{
    int cards[10];
    int allMoney=0;
    int card=0;
    int money=0;
    for(int cleaner=0;cleaner<10;cleaner++)
    {
        cards[cleaner]=0;
    }
    cout<<"Welcome to Bank"<<endl;
    while(true)
    {
        cout<<"please,enter card number"<<endl;
        cin>>card;
        if(card > 9 || card < 0)
        {
            cout<<"this card is not registered"<<endl;
        }
        else
        {
            cout<<"how much you wnat to put on card?"<<endl;
            cin>>money;
            cards[card-1]=money;
        }
        allMoney=0;
        for(int counter=0;counter<10;counter++)
        {
            cout<<cards[counter]<<" ";
            allMoney+=cards[counter];
        }
        cout<<endl<<"all sum in these cards is "<<allMoney;
        cout<<endl;
    }
}
