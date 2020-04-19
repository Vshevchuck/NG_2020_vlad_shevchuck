#ifndef STUDENTS_H
#define STUDENTS_H

#include <iostream>
#include <string>
using namespace std;

class students
{
public:
    students();
    void SetName(string newName)
    {
        name=newName;
    }
    void SetSurname(string newSurname)
    {
       surname=newSurname;
    }
    void SetAge(int newAge)
    {
        age=newAge;
    }
    void SetStudyForm(string newStudyForm)
    {
        formStudy=newStudyForm;
    }
    string GetSurname()
    {
       return surname;
    }
    string GetName()
    {
        return name;
    }
    int GetAge()
    {
       return age;
    }
    string GetStudyForm()
    {
        return formStudy;
    }

private:
   string name;
   string surname;
   int age;
   string formStudy;
};

#endif // STUDENTS_H
