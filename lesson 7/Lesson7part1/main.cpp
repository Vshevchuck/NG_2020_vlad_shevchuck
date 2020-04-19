#include <iostream>
#include "students.h"

using namespace std;

int main()
{
    students std;
    //std.name="Vasily";
    std.SetName("Vasily");
    cout<<"Name:::"<<std.GetName()<<endl;
    std.SetSurname("Petrov");
    cout<<"Surname:::"<<std.GetSurname()<<endl;
    std.SetAge(18);
    cout<<"Age:::"<<std.GetAge()<<endl;
    std.SetStudyForm("full-time education");
    cout<<"form education:::"<<std.GetStudyForm();

}
