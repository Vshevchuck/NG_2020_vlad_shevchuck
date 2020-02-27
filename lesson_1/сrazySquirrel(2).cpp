#include <iostream>

using namespace std;

int main()
{
    int coneN=0;
    int nutM=0;
    int gluttonyK=0;
    cout<<"how many squirrel gathered nuts?"<<endl;
    cin>>coneN;
    cout<<"how many nuts in cone?"<<endl;
    cin>>nutM;
    cout<<"how much is needed for the winter?"<<endl;
    cin>>gluttonyK;
    int squirrelHave=coneN*nutM;
    if(squirrelHave >= gluttonyK)
    {
        cout<<"Yes";
    }
    else
        cout<<"no";
    
}
