//2128056 UNATHI LENKOE

#include <iostream>
#include <iomanip>
#include "Employee.h"
#include "NonAcademicStuff.h"
#include "Person.h"
#include "Student.h"
 #include "Teacher.h"
#include<string>
#include <stdbool.h>
#include <stdlib.h>

using namespace std;
int ind=0;
bool found=false;
Student students[2500];
NonAcademicStuff nonacademics[50];
Teacher teachers[100];
int id=10000;
int ID=10000;
int Id=10000;
int num=0;
void TeacherMenu();
void HRTeacherMenu();
void HRNonAcademicMenu();
void HRMainMenu();

//STUDENTS MENUS
void AddStudentRecordsMENU()
{
    int lvl;
    float english,math,french,sesotho,science,social;
    string name, addr, phoneNO,eAdd,studNo;
    cout<<"Enter Number Of Students You Want To Add...";
    cin>>num;
    cin.ignore(1,'\n');
    cout<<"                         St Michaels's Private School Management System            "<<endl<<endl;
    cout<<"                        ************************************************           "<<endl<<endl;
    cout<<"                                Add Student Record Menu                              "<<endl;
    cout<<"...................................................................................................."<<endl<<endl;
    for(int y=0;y<num;y++)
    {
        studNo="ST"+ to_string(id);
        cout<<"Roll number of a Student: "<<studNo<<endl;
        cout<<"Enter Student Name: ";
        cin>>name;
        cout<<"Enter Student Address: ";
        cin>>addr;
        cout<<"Enter Student Phone Number: ";
        cin>>phoneNO;
        cout<<"Enter Student Email Address:  ";
        cin>>eAdd;
        cout<<"Enter Student Class/Level:  ";
        cin>>lvl;
        cout<<endl<<endl;
        cout<<"Enter Mark Scored in English Out Of 100: ";
        cin>>english;
        cout<<"Enter Mark Scored in French Out Of 100: ";
        cin>>french;
        cout<<"Enter Mark Scored in Sesotho Out Of 100: ";
        cin>>sesotho;
        cout<<"Enter Mark Scored in Maths Out Of 100: ";
        cin>>math;
        cout<<"Enter Mark Scored in Science Out Of 100: ";
        cin>>science;
        cout<<"Enter Mark Scored in Social Out Of 100: ";
        cin>>social;
        students[y].setStudentData(studNo,lvl,english,math,french,sesotho,science,social,name,addr,phoneNO,eAdd);
      id++;
    }
    TeacherMenu();

}

void SearchStudentDataMENU()
{
    string studid;
    cout<<"                         St Michaels's Private School Management System            "<<endl<<endl;
    cout<<"                        ************************************************           "<<endl<<endl;
    cout<<"                                Search Student Record Menu                              "<<endl;
    cout<<"...................................................................................................."<<endl<<endl;
    cout<<"Please Enter Student ID of the student: ";
    cin>>studid;
     for(int z=0;z<num;z++)
     {
         if(students[z].getStudID() ==studid)
            {
                cout<<"Student Exists";
                    break;
            }
            else
            {
                cout<<"Student does not exist";
            }
     }
     TeacherMenu();
}

void DisplayStudentRecordMENU()
{
     string studid;
    cout<<"                         St Michaels's Private School Management System            "<<endl<<endl;
    cout<<"                       ****************************************************           "<<endl<<endl;
    cout<<"                         Display Student(General Information) Record Menu                              "<<endl;
    cout<<"...................................................................................................."<<endl<<endl;

    cout<<"Please Enter Student ID of the : ";
    cin>>studid;
    cin.ignore(1,'\n');
      for(int s=0;s<num;s++)
     {
         if(students[s].getStudID() ==studid)
            {
                students[s].getStudentData();
                    break;
            }
            else
            {
                cout<<"Record Not available";
            }
     }
     TeacherMenu();
}
void ModifyStudentRecordMENU()
{
    int lvl;
    float english,math,french,sesotho,science,social;
    string name, addr, phoneNO,eAdd,studNo;

    cout<<"                         St Michaels's Private School Management System            "<<endl<<endl;
    cout<<"                        ************************************************           "<<endl<<endl;
    cout<<"                                Modify Student Record Menu                              "<<endl;
    cout<<"...................................................................................................."<<endl<<endl;
    cout<<"Enter Student ID...";
    string studid;
    cin>>studid;
    for(int k=0;k<num;k++)
    {
      if(students[k].getStudID() ==studid)
      {
        cout<<"Roll number of a Student: "<<studid<<endl;
        cout<<"Enter New Student Name: ";
        cin>>name;
        cout<<"Enter New Student Address: ";
        cin>>addr;
        cout<<"Enter New Student Phone Number: ";
        cin>>phoneNO;
        cout<<"Enter New Student Email Address:  ";
        cin>>eAdd;
        cout<<"Enter New Student Class/Level:  ";
        cin>>lvl;
        cout<<endl<<endl;
        cout<<"Enter Mark Scored in English Out Of 100: ";
        cin>>english;
        cout<<"Enter Mark Scored in French Out Of 100: ";
        cin>>french;
        cout<<"Enter Mark Scored in Sesotho Out Of 100: ";
        cin>>sesotho;
        cout<<"Enter Mark Scored in Maths Out Of 100: ";
        cin>>math;
        cout<<"Enter Mark Scored in Science Out Of 100: ";
        cin>>science;
        cout<<"Enter Mark Scored in Social Out Of 100: ";
        cin>>social;
        students[k].setStudentData(studid,lvl,english,math,french,sesotho,science,social,name,addr,phoneNO,eAdd);
      }
      else
      {
          cout<<"Student not found";
      }
    }
    TeacherMenu();
}
void DisplayStudentReport()
{
    float average,sum,lvl;
    string grade,studid;
    cout<<"Please Enter Student ID : ";
    cin>>studid;
for(int g=0;g<num;g++)
{

  if(students[g].getStudID() ==studid)
  {
    cout<<"                         St Michaels's Private School Management System            "<<endl<<endl;
    cout<<"                       *************************************************           "<<endl<<endl;
    cout<<"                                 Student Report Card                               "<<endl;
    cout<<"...................................................................................................."<<endl;
    cout<<"                                Student ID :"<<studid<<"                                            "<<endl;
    cout<<"                              Student Name :";students[g].getName();cout<<"                              "<<endl;
    cout<<"                                 Class     :";lvl=students[g].getClass();cout<<lvl<<"                             "<<endl<<endl;
    cout<<left<<setw(10)<<"SUBJECT"<<left<<setw(10)<<"MAXIMUM MARK  "<<left<<setw(10)<<"MARK SCORED"<<endl;
    cout<<left<<setw(10)<<"ENGLISH"<<left<<setw(10)<<"100"<<left<<setw(20)<<students[g].getenglishmarks()<<endl;
    cout<<left<<setw(10)<<"FRENCH "<<left<<setw(10)<<"100"<<left<<setw(20)<<students[g].getfrenchmark()<<endl;
    cout<<left<<setw(10)<<"SESOTHO"<<left<<setw(10)<<"100"<<left<<setw(20)<<students[g].getsesothomarks()<<endl;
    cout<<left<<setw(10)<<"MATHS  "<<left<<setw(10)<<"100"<<left<<setw(20)<<students[g].getmathmarks()<<endl;
    cout<<left<<setw(10)<<"SCIENCE"<<left<<setw(10)<<"100"<<left<<setw(20)<<students[g].getsciencemark()<<endl;
    cout<<left<<setw(10)<<"SOCIAL "<<left<<setw(10)<<"100"<<left<<setw(20)<<students[g].getsocialmark()<<endl;
    cout<<left<<setw(10)<<"TOTAL  "<<left<<setw(10)<<"600"<<left<<setw(20)<<students[g].reportSum()<<endl<<endl;

    cout<<"Average=";sum=students[g].reportSum();average=(sum/600)*100; cout<<average<<endl;

    cout<<"Grade =";
      if (average>79)
   {
       cout<<"Cum laude";
   }
   else if (average<80 && average>69)
   {
       cout<<"Distinction";
   }
   else if (average<70 && average>59)
   {
       cout<<"Credit";
   }
   else if (average<60 && average>49)
   {
       cout<<"Pass";
   }
   else
   {
       cout<<"Fail";
   }
    cout<<endl<<endl;



    cout<<"Signatures:"<<endl<<endl;
    cout<<"......................              .....................             ...................."<<endl;
    cout<<"Teacher                            Principal                          Parent/Guardian     "<<endl<<endl;
  }
  else
  {
      cout<<"Report Not Available";
  }
}
TeacherMenu();
}
void DeleteStudentRecords()
{
   cout<<"Enter Student ID \n";
   string sID;
   cin>>sID;

   for(int t=0;t<num;t++)
   {
       if(students[t].getStudID()==sID)
       {
           ind=t;
           found=true;
       }
   }
   if(found==true)
   {
       for(int g=ind;g<num-1;g++)
       {
           students[g]=students[g+1];
       }
       cout<<"\n The student record is successfully deleted"<<endl;
   }
   else
   {
       cout<<"Record is not found";
   }
   TeacherMenu();
}
//TEACHER MENUS

void AddTeacherRecordsMENU()
{
    string nam,addr,phoneNO,eAdd,Empid;
    int offNO, sal,dd,mm,yyyy;
    string offHours, ranking;

    cout<<"Enter Number Of Teachers You Want To Add...";
    cin>>num;
    cin.ignore(1,'\n');
    cout<<"                         St Michaels's Private School Management System            "<<endl<<endl;
    cout<<"                        ************************************************           "<<endl<<endl;
    cout<<"                                Add Teacher Record Menu                              "<<endl;
    cout<<"...................................................................................................."<<endl<<endl;
    for(int i=0;i<num;i++)
    {
        Empid="T"+to_string(ID);
        cout<<"Roll number of a Teacher"<<Empid;
        cin.ignore(1,'\n');
        cout<<"\n Enter Teacher Name: ";
        getline(cin,nam);
        cout<<"\n Enter Teacher Address: ";
        cin>>addr;
        cin.ignore(1,'\n');
        cout<<"\n Enter Teacher Phone Number: ";
        cin>>phoneNO;
        cout<<"\n Enter Teacher Email Address:  ";
        cin>>eAdd;
        cout<<"\n Enter Teacher Date hired (day/month/year): ";
        cin>>dd>>mm>>yyyy;
        cout<<"\n Enter Teacher Office Number:  ";
        cin>>offNO;
        cout<<"\n Enter Teacher Salary:   ";
        cin>>sal;
        cout<<"\n Enter Rank: ";
        cin>>ranking;
        cout<<"\n Enter office hours: ";
        cin>>offHours;
        cin.ignore(1,'\n');
        teachers[i].setTeacherData(Empid,nam,addr,phoneNO,eAdd,offNO,sal,offHours,ranking,dd,mm,yyyy);
      ID++;
    }
    HRTeacherMenu();
}

void SearchTeacherDataMENU()
{
    string Tid;
    cout<<"                         St Michaels's Private School Management System            "<<endl<<endl;
    cout<<"                        ************************************************           "<<endl<<endl;
    cout<<"                                Search Teacher Record Menu                              "<<endl;
    cout<<"...................................................................................................."<<endl<<endl;
    cout<<"Please Enter Teacher ID of the Teacher: ";
    cin>>Tid;
    cin.ignore(1,'\n');
     for(int l=0;l<num;l++)
     {
         if(teachers[l].getEmpId()==Tid)
            {
                cout<<"Teacher Exists";
                    break;
            }

     }
HRTeacherMenu();
}
void ModifyTeacherRecordMENU()
{
    string nam,addr,phoneNO,eAdd;
    int offNO, sal,dd,mm,yyyy;
    string offHours, ranking;

    cout<<"                         St Michaels's Private School Management System            "<<endl<<endl;
    cout<<"                        ************************************************           "<<endl<<endl;
    cout<<"                                Modify Teacher Record Menu                              "<<endl;
    cout<<"...................................................................................................."<<endl<<endl;
    cout<<"Enter Teacher ID...";
    string Tid;
    cin>>Tid;
    for(int d=0;d<num;d++)
    {
      if(teachers[d].getEmpId()==Tid)
      {
        cout<<"Roll number of a Teacher"<<Tid;
        cout<<"\n Enter New Teacher Name: ";
        getline(cin,nam);
        cout<<"\n Enter New Teacher Address: ";
        cin>>addr;
        cout<<"\n Enter New Teacher Phone Number: ";
        cin>>phoneNO;
        cout<<"\n Enter New Teacher Email Address:  ";
        cin>>eAdd;
        cout<<"\n Enter New Teacher Date hired (day/month/year): ";
        cin>>dd>>mm>>yyyy;
        cout<<"\n Enter New Teacher Office Number:  ";
        cin>>offNO;
        cout<<"\n Enter New Teacher Salary:   ";
        cin>>sal;
        cout<<"\n Enter New Rank: ";
        cin>>ranking;
        cout<<"\n Enter New office hours: ";
        cin>>offHours;
        cin.ignore(1,'\n');
        teachers[d].setTeacherData(Tid,nam,addr,phoneNO,eAdd,offNO,sal,offHours,ranking,dd,mm,yyyy);
      }
    }
HRTeacherMenu();
}

void DisplayTeacherRecordMENU()
{
     string Tid;
    cout<<"                         St Michaels's Private School Management System            "<<endl<<endl;
    cout<<"                       ****************************************************           "<<endl<<endl;
    cout<<"                             Display Teacher Record Menu                              "<<endl;
    cout<<"...................................................................................................."<<endl<<endl;

    cout<<"Please Enter Teacher ID  : ";
    cin>>Tid;
      for(int v=0;v<num;v++)
     {
         if(teachers[v].getEmpId() ==Tid)
            {
                teachers[v].getTeacherData();
                    break;
            }
     }
HRTeacherMenu();
}
void DeleteTeacherRecords()
{
   cout<<"Enter Teacher ID \n";
   string tID;
   cin>>tID;

   for(int o=0;o<num;o++)
   {
       if(teachers[o].getEmpId()==tID)
       {
           ind=o;
           found=true;
       }
   }
   if(found==true)
   {
       for(int m=ind;m<num-1;m++)
       {
           teachers[m]=teachers[m+1];
       }
       cout<<"\n The teacher record is successfully deleted";
   }
   HRTeacherMenu();
}
//NON ACADEMIC MENUS

void DisplayNonAcadenicRecordMENU()
{
    string Nid;
    cout<<"                         St Michaels's Private School Management System            "<<endl<<endl;
    cout<<"                       ****************************************************           "<<endl<<endl;
    cout<<"                             Display Staff Record Menu                              "<<endl;
    cout<<"...................................................................................................."<<endl<<endl;

    cout<<"Please Enter Staff ID  : ";
    cin>>Nid;
    cin.ignore(1,'\n');
      for(int b=0;b<num;b++)
     {
         if(nonacademics[b].getEmpId() ==Nid)
            {
                nonacademics[b].getNonAcademicStuff();
                    break;
            }
     }
HRNonAcademicMenu();
}

void ModifyNonAcademicsRecordMENU()
{
    string Name,Addr,PhoneNO,EAdd;
    int offNO, sal,dd,mm,yyyy;
    string ttle;

    cout<<"                         St Michaels's Private School Management System            "<<endl<<endl;
    cout<<"                        ************************************************           "<<endl<<endl;
    cout<<"                                Modify Staff Record Menu                              "<<endl;
    cout<<"...................................................................................................."<<endl<<endl;
    cout<<"Enter Staff ID...";
    string Nid;
    cin>>Nid;
    for(int f=0;f<num;f++)
    {
      if(nonacademics[f].getEmpId() ==Nid)
      {
        cout<<"Roll number of a Non Academic Staff: "<<Nid;
        cout<<"\n Enter New Non Academic Employee Name: ";
        cin>>Name;
        cout<<"\n Enter New Non Academic Employee Address: ";
        cin>>Addr;
        cout<<"Enter New Non Academic Employee  Phone Number: ";
        cin>>PhoneNO;
        cout<<"\n Enter New Non Academic Employee  Email Address:  ";
        cin>>EAdd;
        cout<<"\n Enter Date hired (day/month/year): ";
        cin>>dd>>mm>>yyyy;
        cout<<"\n Enter New Non Academic Employee Office Number:  ";
        cin>>offNO;
        cout<<"\n Enter New Non Academic Employee Salary:   ";
        cin>>sal;
        cout<<"\n Enter New Non Academic Employee Title: ";
        cin>>ttle;
        nonacademics[f].setNonAcademicStuffData(Nid,Name,Addr,PhoneNO,EAdd,offNO,sal,ttle,dd,mm,yyyy);
      }
    }
HRNonAcademicMenu();
}
void AddNonAcademicRecordsMENU()
{
      string Name,Addr,PhoneNO,EAdd,Empid;
      int offNO, sal,dd,mm,yyyy;
      string ttle;


    cout<<"Enter Number Of Stuff You Want To Add...";
    cin>>num;
    cout<<"                         St Michaels's Private School Management System            "<<endl<<endl;
    cout<<"                        ************************************************           "<<endl<<endl;
    cout<<"                                Add Stuff Record Menu                              "<<endl;
    cout<<"...................................................................................................."<<endl<<endl;
    for(int a=0;a<num;a++)
    {
        Empid="NAS"+to_string(Id);

        cout<<"Roll number of a Non Academic Staff: "<<Empid;
        cout<<"\n Enter Non Academic Employee Name: ";
        cin>>Name;
        cout<<"\n Enter Non Academic Employee Address: ";
        cin>>Addr;
        cout<<"\n Enter Non Academic Employee  Phone Number: ";
        cin>>PhoneNO;
        cout<<"\n Enter Non Academic Employee  Email Address:  ";
        cin>>EAdd;
        cout<<"\n Enter Date hired (day/month/year): ";
        cin>>dd>>mm>>yyyy;
        cout<<"\n Enter Non Academic Employee Office Number:  ";
        cin>>offNO;
        cout<<"\n Enter Non Academic Employee Salary:   ";
        cin>>sal;
        cout<<"\n Enter Non Academic Employee Title: ";
        cin>>ttle;
        nonacademics[a].setNonAcademicStuffData(Empid,Name,Addr,PhoneNO,EAdd,offNO,sal,ttle,dd,mm,yyyy);
      Id++;
    }
    HRNonAcademicMenu();
}

void SearchNonAcademicsDataMENU()
{
    string empid;
    cout<<"                         St Michaels's Private School Management System            "<<endl<<endl;
    cout<<"                        ************************************************           "<<endl<<endl;
    cout<<"                                Search Stuff Record Menu                              "<<endl;
    cout<<"...................................................................................................."<<endl<<endl;

    cout<<"Please Enter Employment ID of the Stuff: ";
    cin>>empid;
    cin.ignore(1,'\n');
     for(int o=0;o<num;o++)
     {
         if(nonacademics[o].getEmpId()==empid)
            {
                cout<<"Stuff Exists";
                    break;
            }

     }
     HRNonAcademicMenu();
}
void DeleteNonAcademicRecords()
{
   cout<<"Enter Non-Academic ID \n";
   string nID;
   cin>>nID;

   for(int j=0;j<num;j++)
   {
       if(teachers[j].getEmpId()==nID)
       {
           ind=j;
           found=true;
       }
   }
   if(found==true)
   {
       for(int b=ind;b<num-1;b++)
       {
           teachers[b]=teachers[b+1];
       }
       cout<<"\n The Non-Academic record is successfully deleted";
   }
   HRNonAcademicMenu();
}
//SYSTEM MENUS

void MainMenu()
{
    int choice;

    cout<<"                         St Michaels's Private School Management System            "<<endl<<endl;
    cout<<"                       ****************************************************           "<<endl<<endl;
    cout<<"                                           Main Menu                                    "<<endl;
    cout<<"...................................................................................................."<<endl<<endl;
    cout<<"                              Please select appropriate designation                                       "<<endl<<endl;
    cout<<"1. Human Resource Manager "<<endl;
    cout<<"2. Teacher "<<endl;
    cout<<"3. Exit "<<endl;
    cin>>choice;
    switch(choice)
    {
    case 1:
        HRMainMenu();
        break;
    case 2:
        TeacherMenu();
        break;
    case 3:
       exit(0);
        break;
    default:
        cout<<"Enter 1 to 3 ";
   }
}

void HRMainMenu()
{
    int choice;

    cout<<"                         St Michaels's Private School Management System            "<<endl<<endl;
    cout<<"                       ****************************************************           "<<endl<<endl;
    cout<<"                                           HR Menu                                    "<<endl;
    cout<<"...................................................................................................."<<endl<<endl;
    cout<<"                              Please select appropriate Portal                                       "<<endl<<endl;
    cout<<"1. Non Academic Stuff "<<endl;
    cout<<"2. Teacher "<<endl;
    cout<<"3. Exit "<<endl;
    cin>>choice;
    switch(choice)
    {
    case 1:
        HRNonAcademicMenu();
        break;
    case 2:
       HRTeacherMenu();
        break;
    case 3:
       MainMenu();
        break;
    default:
        cout<<"Enter 1 to 3 ";
}
}

void HRNonAcademicMenu()
{
    int choice;

    cout<<"                         St Michaels's Private School Management System            "<<endl<<endl;
    cout<<"                       ****************************************************           "<<endl<<endl;
    cout<<"                                      HR Menu(Non Academic)                              "<<endl;
    cout<<"...................................................................................................."<<endl<<endl;
    cout<<"                              Please select appropriate action                                      "<<endl<<endl;
    cout<<"1. Add Stuff Record "<<endl;
    cout<<"2. Display Stuff Record "<<endl;
    cout<<"3. Modify Stuff Record "<<endl;
    cout<<"4. Search Stuff Record "<<endl;
    cout<<"5. Delete Stuff Record "<<endl;
    cout<<"6. Exit "<<endl;
    cin>>choice;
    switch(choice)
    {
    case 1:
        AddNonAcademicRecordsMENU();
        break;
    case 2:
        DisplayNonAcadenicRecordMENU();
        break;
    case 3:
        ModifyNonAcademicsRecordMENU();
        break;
    case 4:
        SearchNonAcademicsDataMENU();
        break;
    case 5:
        DeleteNonAcademicRecords();
        break;
    case 6:
        HRMainMenu();
        break;
    default:
        cout<<"Enter 1 to 6";

    }

}

void HRTeacherMenu()
{
    int choice;


    cout<<"                         St Michaels's Private School Management System            "<<endl<<endl;
    cout<<"                       ****************************************************           "<<endl<<endl;
    cout<<"                                      HR Menu(Teacher)                              "<<endl;
    cout<<"...................................................................................................."<<endl<<endl;
    cout<<"                              Please select appropriate action                                      "<<endl<<endl;
    cout<<"1. Add Teacher Record "<<endl;
    cout<<"2. Display Teacher Record "<<endl;
    cout<<"3. Modify Teacher Record "<<endl;
    cout<<"4. Search Teacher Record "<<endl;
    cout<<"5. Delete Teacher Record "<<endl;
    cout<<"6. Exit "<<endl;
    cin>>choice;
     switch(choice)
    {
    case 1:
        AddTeacherRecordsMENU();
        break;
    case 2:
        DisplayTeacherRecordMENU();
        break;
    case 3:
        ModifyTeacherRecordMENU();
        break;
    case 4:
        SearchTeacherDataMENU();
        break;
    case 5:
        DeleteTeacherRecords();
        break;
    case 6:
        HRMainMenu();
        break;
    default:
        cout<<"Enter 1 to 6";
    }
}


void TeacherMenu()
{
    int choice;
    cout<<"                         St Michaels's Private School Management System            "<<endl<<endl;
    cout<<"                       ****************************************************           "<<endl<<endl;
    cout<<"                                      Teacher  Menu                              "<<endl;
    cout<<"...................................................................................................."<<endl<<endl;
    cout<<"                              Please select appropriate action                                      "<<endl<<endl;
    cout<<"1. Add Student Record "<<endl;
    cout<<"2. Display Student Record (Student general information) "<<endl;
    cout<<"3. Modify Student Record "<<endl;
    cout<<"4. Search Student Record "<<endl;
    cout<<"5. Display Student Report (Academic Report) "<<endl;
    cout<<"6. Delete Student Record "<<endl;
    cout<<"7. Exit "<<endl;
    cin>>choice;
    switch(choice)
    {
    case 1:
        AddStudentRecordsMENU();
        break;
    case 2:
        DisplayStudentRecordMENU();
        break;
    case 3:
        ModifyStudentRecordMENU();
        break;
    case 4:
        SearchStudentDataMENU();
        break;
    case 5:
        DisplayStudentReport();
        break;
    case 6:
        DeleteStudentRecords();
        break;
    case 7:
        MainMenu();
        break;
    default:
        cout<<"Enter 1 to 7";

    }
}
int main()
{
    system("color 3f");
    MainMenu();

    return 0;
}
