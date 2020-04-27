#include "mentor.h"
#include <iostream>
#include "students.h"
#include <string>
using namespace std;
Mentor::Mentor()
{
    for(int index=0;index<30;index++)
    {

        arr[index].SetName(" ");
    }
}
void Mentor::addStudent()
{
    students NewStudent;
    string name;
    string surname;
    string studyForm;
    string age;

    cout << "Adding students" << endl;
    cout << "Enter name- ";
    cin >> name;
    cout << "Enter surname- ";
    cin >> surname;
    cout << "Enter age- ";
    cin >> age;
    cout << "Enter study form- ";
    cin >> studyForm;

    NewStudent.SetName(name);
    NewStudent.SetSurname(surname);
    NewStudent.SetAge(age);
    NewStudent.SetStudyForm(studyForm);

    addStudent(NewStudent);
}

void Mentor::addStudent(students student)
{
    for (int index = 0; index < 30; index++)
    {
        if (arr[index].GetName() == " ")
        {
            arr[index] = student;
            return;
        }
    }
}
void Mentor::deleteStudent()
{
    students NewStudent;
    string name;
    string surname;
    string studyForm;
    string age;

    cout << "Which student you want to delete" << endl;
    cout << "Enter name- ";
    cin >> name;
    cout << "Enter surname- ";
    cin >> surname;
    cout << "Enter age- ";
    cin >> age;
    cout << "Enter study form- ";
    cin >> studyForm;

    NewStudent.SetName(name);
    NewStudent.SetSurname(surname);
    NewStudent.SetStudyForm(studyForm);
    NewStudent.SetAge(age);

    deleteStudent(NewStudent);
}

void Mentor::deleteStudent(students student)
{
    for (int counter = 0; counter < 30; counter++) {

        if (arr[counter].GetName() == student.GetName())
        {
            arr[counter].SetName(" ") ;
            arr[counter].SetSurname(" ");
            arr[counter].SetAge(" ");
            arr[counter].SetStudyForm(" ");
            cout<<"deleted"<<endl;
            return;
        }
}
}

void Mentor::findStudent()
{
    string name;
    string surname;
    cout<<"Enter name,which student you want to find"<<endl;
    cin>>name;
    cout<<"Enter surname,which student you want to find"<<endl;
    cin>>surname;
    for (int counter = 0; counter < 30; counter++) {
        arr[counter].FindStudent(name, surname);
    }
}

void Mentor::ShowStudent()
{
    for (int counter = 0; counter < 30; counter++) {
        arr[counter].ShowStudent();
    }
}

