#include "Employee.h"
using namespace std;
#include<iostream>

Employee::Employee()
{
    EmpID= "EMP1000";
    officeNo=0;
    salary=00.00;
}

void Employee::setEmployeeData(string Eid,string nam,string addr,string phoneNO,string eAdd,int offNo,int sal,int dd,int mm, int yyyy)
{
    this-> EmpID=Eid;
    this->  setPersonData(nam,addr,phoneNO,eAdd);
    this->  officeNo=offNo;
    this->  salary=sal;
    dateHired.setDate( dd, mm,yyyy);
}
string Employee::getEmpId()
{
   return EmpID;
}
int Employee::getOfficeNumber()
{
    return officeNo;
}
int Employee::getSalary()
{
    return salary;
}
void Employee::getdate()
{
    dateHired.getDate();
}



