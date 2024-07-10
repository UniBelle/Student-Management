#include "Teacher.h"
using namespace std;
#include<iostream>
#include <fstream>

Teacher::Teacher()
{
   officeHours="0Hrs";
   ranking="Teacher";
}
void Teacher::setTeacherData(string Eid,string nam,string addr,string phoneNO,string eAdd,int offNO,int sal,string offHours,string ranking,int dd,int mm,int yyyy)
{
   officeHours=offHours;
   ranking=ranking;
   setEmployeeData(Eid,nam,addr,phoneNO,eAdd,offNO,sal,dd,mm,yyyy);

}
void Teacher::getTeacherData()
{
   int sal,offno;

        cout<<"Roll number of a Teacher"<<EmpNumber;
        cout<<"\n Teacher Name: ";
        getName();
        cout<<"\n Teacher Address: ";
        getAddress();
        cout<<"\n Teacher Phone Number: ";
        getphoneNumber();
        cout<<"\n Teacher Email Address:  ";
        getEmail();
        cout<<"\n Office Number:  ";
        offno=getOfficeNumber();
        cout<<offno;
        cout<<"\n Teacher Date Hired:  ";
        getdate();
        cout<<"\n Teacher Salary:  ";
        sal=getSalary();
        cout<<sal;
        cout<<"\n Rank: "<<ranking;
        cout<<"\n Office hours: "<<officeHours;
}

