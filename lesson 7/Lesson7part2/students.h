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
    void SetAge(string newAge)
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
    string GetAge()
    {
       return age;
    }
    string GetStudyForm()
    {
        return formStudy;
    }

    void FindStudent(string name, string surname);
    void ShowStudent();
private:
   string name;
   string surname;
   string age;
   string formStudy;
};

#endif // STUDENTS_H
