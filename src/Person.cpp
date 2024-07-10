#include "Person.h"
using namespace std;
#include<iostream>

Person::Person()
{
        name= "Default";
        address= "Default";
        phoneNumber="(+266)0000000";
        emailAddress="name.stmichaels@gmail.com";
}
void Person::setPersonData(string nam,string addr,string phoneNO,string eAdd)
{
   this-> name= nam;
   this-> address=addr;
   this-> phoneNumber=phoneNO;
   this-> emailAddress=eAdd;
}
void Person::getName()
{
    cout<< name;
}
void Person::getAddress()
{
   cout<< address;
}
void Person::getphoneNumber()
{
    cout<< phoneNumber;
}
void Person::getEmail()
{
    cout<< emailAddress;
}



