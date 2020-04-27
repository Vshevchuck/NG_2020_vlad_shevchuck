#include <iostream>
#include "students.h"
#include "mentor.h"
#include <string>
using namespace std;

int main()
{
    students std;
    Mentor NewMentor;
    //std.name="Vasily";
    /*std.SetName("Vasily");
    cout<<"Name:::"<<std.GetName()<<endl;
    std.SetSurname("Petrov");
    cout<<"Surname:::"<<std.GetSurname()<<endl;
    std.SetAge(18);
    cout<<"Age:::"<<std.GetAge()<<endl;
    std.SetStudyForm("full-time education");
    cout<<"form education:::"<<std.GetStudyForm();
    */

    NewMentor.setMentorName("Roman");
    NewMentor.setMentorSurname("Tkachuck");
    NewMentor.setSubject("Prgramming");
    NewMentor.setFacultet("NG_2020");
    NewMentor.addStudent();
    NewMentor.addStudent();
    NewMentor.deleteStudent();

    NewMentor.findStudent();



}
