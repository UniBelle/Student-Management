#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
#include <iostream>
using namespace std;
#include <Person.h>


class Employee : public Person
{
    private:
        string EmpID;
        int officeNo;
        int salary;
        class Date
        {
            private:
              int day;
              int month;
              int year;
           public:
            void setDate(int dd,int mm,int yyyy)
            {

                if(dd>31 && dd<=0)
              {
                    cout<<"Invalid Day "<<dd<<endl;
              }
            else
              {
                    this-> day=dd;
              }
            if(mm>12 && mm<=0)
              {
                    cout<<"Invalid Month "<<mm<<endl;
              }
            else
              {
                       this-> month=mm;
              }
            if(yyyy<1930 && yyyy>2050)
              {
                 cout<<"Invalid Year "<<yyyy<<endl;
              }
            else
              {
                 this->year=yyyy;
              }

            }
            void getDate()
            {
                  cout<<day<<"/"<<month<<"/"<<year;
            }
        }dateHired;

    public:
        Employee();
        void setEmployeeData(string Eid,string nam,string addr,string phoneNO,string eAdd,int offNo,int sal,int dd,int mm, int yyyy);
        string getEmpId();
        int getOfficeNumber();
        int getSalary();
        void GetdateHired();
        void getdate();


};

#endif // EMPLOYEE_H
