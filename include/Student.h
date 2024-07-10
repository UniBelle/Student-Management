#ifndef STUDENT_H
#define STUDENT_H
#include <string>
using namespace std;
#include <Person.h>


class Student : public Person
{
    private:
        string studID;
        int level;
        float EnglishMark;
        float MathMark;
        float FrenchMark;
        float SesothoMark;
        float ScienceMark;
        float SocialMark;
    public:
        Student();
        void setStudentData(string studNo,int lvl,float english,float math,float french,float sesotho,float science,float social,string nam,string addr,string phoneNO,string eAdd);
        void getStudentData();
        float getsocialmark();
        float getsciencemark();
        float getmathmarks();
        float getsesothomarks();
        float getfrenchmark();
        float getenglishmarks();
        float reportSum();
        string getStudID();
        int getClass();
};

#endif // STUDENT_H
