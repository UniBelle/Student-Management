#include "Date.h"
using namespace std;
#include<iostream>

Date::Date()
{
   day=0;
   month = 00;
   year=0000;
}
void Date::setDate(int dd,int mm, int yyyy)
{
    if(dd>31 || dd<=0)
       {
           cout<<"Invalid Day "<<dd<<endl;
       }
    else
        {
            this-> day=dd;
        }
     if(mm>12 || mm<=0)
       {
           cout<<"Invalid Month "<<mm<<endl;
       }
    else
        {
            this-> month=mm;
        }
     if(yyyy<1930 || yyyy>2050)
       {
           cout<<"Invalid Year "<<yyyy<<endl;
       }
    else
        {
            this->year=yyyy;
        }
}
void Date::getDate()
{
  cout<<day<<"/"<<month<<"/"<<year;
}
