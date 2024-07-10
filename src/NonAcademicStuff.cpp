#include "NonAcademicStuff.h"
using namespace std;
#include<iostream>
#include<fstream>

NonAcademicStuff::NonAcademicStuff()
{
    title="Unknown";
}

 void NonAcademicStuff::setNonAcademicStuffData(string Eid,string nam,string addr,string phoneNO,string eAdd,int offNo,int sal,string ttle,int dd,int mm, int yyyy)
 {
     setEmployeeData(Eid,nam,addr,phoneNO,eAdd,offNo, sal,dd,mm,yyyy);
     title=ttle;

 }
 void NonAcademicStuff::getNonAcademicStuff()
 {
     int offno, sal;
        cout<<"Roll number of a Non Academic Employee: ";
        getEmpId();
        cout<<"\n Non Academic Employee Name: ";
        getName();
        cout<<"\n Non Academic Employee Address: ";
        getAddress();
        cout<<"\n Non Academic Employee Phone Number: ";
        getphoneNumber();
        cout<<"\n Non Academic Employee Email Address:  ";
        getEmail();
        cout<<"\n Teacher Date Hired:  ";
        getdate();
        cout<<"\n Non Academic Employee Office Number:  ";
        offno=getOfficeNumber();
        cout<<offno;
        cout<<"\n Non Academic Employee Salary:  ";
        sal =getSalary();
        cout<<sal;
        cout<<"\n Non Academic Employee title:  "<<title;

 }

