#ifndef NONACADEMICSTUFF_H
#define NONACADEMICSTUFF_H
#include <string>
using namespace std;
#include <Employee.h>


class NonAcademicStuff : public Employee
{
    private:
        string title;
    public:
        NonAcademicStuff();
        void setNonAcademicStuffData(string Eid,string nam,string addr,string phoneNO,string eAdd,int offNO,int sal,string ttle,int dd,int mm,int yyyy);
        void getNonAcademicStuff();
};

#endif // NONACADEMICSTUFF_H
