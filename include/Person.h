#ifndef PERSON_H
#define PERSON_H
#include <string>
using namespace std;

class Person
{
    private:
       string name;
       string address;
       string phoneNumber;
       string emailAddress;
    public:
        Person();
        void setPersonData(string nam,string addr,string phoneNO,string eAdd);
        void getEmail();
        void getphoneNumber();
        void getAddress();
        void getName();
};

#endif // PERSON_H
