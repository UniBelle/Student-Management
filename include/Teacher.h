#ifndef TEACHER_H
#define TEACHER_H

#include <Employee.h>


class Teacher : public Employee
{
    private:
        string EmpNumber;
       string officeHours;
       string ranking;

    public:
        Teacher();
        void setTeacherData(string Eid,string nam,string addr,string phoneNO,string eAdd,int offNO,int sal,string offHours,string ranking,int dd,int mm,int yyyy);
        void getTeacherData();
};

#endif // TEACHER_H
