#include <iostream>

using namespace std;
int generalPoints(int cubsdots,int cubscounter)
{
    int points;
    points=cubsdots*cubscounter;
    return points;
}
int main()
{
    int points;
    int cubsdots;
    int cubscounter;
    cout<<"enter cube's dots ";
    cin>>cubsdots;
    cout<<"enter count cobes ";
    cin>>cubscounter;
    points=generalPoints(cubsdots,cubscounter);
    cout<<"all points-"<<points;

}
