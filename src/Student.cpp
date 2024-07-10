#include "Student.h"
using namespace std;
#include<iostream>

Student::Student()
{
   studID="ST10000";
   level= 0;
   EnglishMark=0.0;
   MathMark=0.0;
   FrenchMark=0.0;
   SesothoMark=0.0;
   ScienceMark=0.0;
   SocialMark=0.0;
}
void Student::setStudentData(string studNo,int lvl,float english,float math,float french,float sesotho,float science,float social,string nam,string addr,string phoneNO,string eAdd)
{
   level= lvl;
   EnglishMark= english;
   MathMark= math;
   FrenchMark= french;
   SesothoMark= sesotho;
   ScienceMark= science;
   SocialMark= social;
   setPersonData(nam,addr,phoneNO,eAdd);
   studID=studNo;
}
string Student::getStudID()
{
   return studID;
}
int Student::getClass()
{
    return level;
}
void Student::getStudentData()
{
        cout<<"Student Roll Number"<<studID<<endl;
        cout<<"\n Student Name: ";
        getName();
        cout<<"\n Student Address: ";
        getAddress();
        cout<<"\n Student Phone Number: ";
        getphoneNumber();
        cout<<"\n Student Email Address: ";
        getEmail();
        cout<<"\n Class/Level: "<<level<<endl;


}
float Student:: getenglishmarks()
{
    return EnglishMark;
}
float Student:: getfrenchmark()
{
    return FrenchMark;
}
float Student::getsesothomarks()
{
    return SesothoMark;
}
float Student::getmathmarks()
{
    return MathMark;
}
float Student::getsciencemark()
{
   return ScienceMark;
}
float Student:: getsocialmark()
{
    return SocialMark;
}
float Student::reportSum()
{
   int sum= SocialMark + ScienceMark + MathMark + SesothoMark + FrenchMark + EnglishMark;
   return sum;
}

