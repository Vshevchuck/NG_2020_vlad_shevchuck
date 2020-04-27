#ifndef MENTOR_H
#define MENTOR_H
#include <iostream>
#include <string>
#include "students.h"
using namespace std;
class Mentor
{
public:
      Mentor();
      string getMentorName()
      {
          return name;
      }

      string getMentorSurname()
      {
          return surname;
      }

      string getSubject()
      {
          return subject;
      }

      string getFacultet()
      {
          return facultet;
      }

      void setMentorName(string NewMentorName)
      {
          name = NewMentorName;
      }

      void setMentorSurname(string NewMentorSurname)
      {
          surname = NewMentorSurname;
      }

      void setSubject(string NewMentorSubject)
      {
          subject = NewMentorSubject;
      }

      void setFacultet(string NewMentorFacultet)
      {
          facultet = NewMentorFacultet;
      }

      void deleteStudent();
      void deleteStudent(students student);
      void addStudent();
      void addStudent(students student);
      void findStudent();
      void FindStudent(string name, string surname);
      void ShowStudent();
private:
      students arr[30];
      string name;
      string surname;
      string subject;
      string facultet;
};

#endif // MENTOR_H
