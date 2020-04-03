#include <iostream>
#include <ctime>
using namespace std;

int getResault(int cubeSize, int cubes){
    srand(time(NULL));
    int points = 0;
    for(int counter = 0; counter < cubes; counter++)
    {
        points += (rand()%cubeSize +1);
    }
  return points;
}

int main()
{
    int cubes = 0;
    int cubeSize = 0;
    cout << "Enter cubes count- ";
    cin >> cubes;
    cout << "Enter cubes size - ";
    cin >> cubeSize;
    cout << "Your points - " << getResault(cubeSize, cubes);
}
