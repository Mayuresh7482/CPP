/*
 46.Write a class Student having following –
a.Student Roll Number (int)
b.Student Name (char array)
c.Date of Birth (Date class object where Date is user defined class)
Implement default constructor, parameterized constructor, accept, display. Generate the student roll number automatically.
 */

#include <iostream>
#include<string>
using namespace std;

class Date {
    public :
        int day;
        int month;
        int year;
        
    Date(){
        day=1;
        month=1;
        year=1970;
        cout<<"default constructor called"<<endl;
    }
    Date(int d,int m,int y){
        day=d;
        month=m;
        year=y;
        cout<<"parameterized constructor called with day = "<<day<<", month = "<<month<<", year = "<<year<<endl;
    }
    
    void display(){
        cout<<day<<"/"<<month<<"/"<<year<<endl;
    }
};

class student {
    private :
        static int rollCounter;
        int rollno;
        string name;
        Date dob;
    public :
        student (){
            name=" ";
            dob = Date();
            rollno =generaterollno();
        }
        
        student (string n,Date d){
            name=n;
            dob=d;
            rollno=generaterollno();
        }
        
        void accept(){
            cout<<"Enter student name :";
            getline(cin,name);
            
            cout<<"Enter date of birth (DD MM YYYY): ";
            cin>>dob.day>>dob.month>>dob.year;
            cin.ignore();
        }
        
        void display(){
            cout<<"Roll no : "<<rollno<<endl;
            cout<<"Name : "<<name<<endl;
            dob.display();
        }
        
    private: 
        static int generaterollno(){
            return ++rollCounter;
        }
};

int student :: rollCounter =100;

int main() {
  student s1;
  s1.display();
  cout<<endl;
  
  student s2("Alice ",Date(15,8,1947));
  s2.display();
  
  cout<<endl;
  
  student s3;
  s3.accept();
  s3.display();
  
    return 0;
}