#include "students.h"

students::students()
{

}

void students::FindStudent(string name, string surname)
{
    if (name == GetName() && surname == GetSurname()) {
        ShowStudent();
    }
}

void students::ShowStudent()
{
    if (GetName() != " ") {
        cout << "Name- " << GetName() << endl;
        cout << "Surname- " << GetSurname() << endl;
        cout << "Age- " << GetAge() << endl;
        cout << "form Study- " << GetStudyForm() << endl;
    }
}




