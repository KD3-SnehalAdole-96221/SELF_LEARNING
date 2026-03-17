// 7. Create `Student` and `Teacher` class inside a namespace `college`. Write constructors, 
// getter/setters, display() method in both classes. Create objects in main() and call methods.


#include<iostream>
using namespace std;
namespace college
{
    class Student
    {
        int RollNo;
        string name;
        string subject;
        public:
        Student():RollNo(0),name(""),subject("")
        { }
        Student(int r,string n,string s):RollNo(r),name(n),subject(s)
        { }

        void setRollNo(int Roll) 
        { this->RollNo = Roll; }
        int getRoll() 
        { return RollNo; }

        void setName(string name) 
        { this->name = name; }
        string getName() 
        { return name; }

        void setSubject(string subject) 
        { this->subject = subject; }
        string getSubject() 
        { return subject; }

        void display() {
            cout<<"--------------------Student Details---------------------"<<endl;
            cout << "Student Roll No: " << this->RollNo << ", Name: " << this->name << endl;
        }

    };
    class Teacher
    {
        
        private:
        string name;
        string subject;

         public:
        Teacher() : name(" "), subject("English") 
        { }

        Teacher(string n, string s) : name(name), subject(subject) 
        { }

        void setName(string name) 
        { this->name = name; }
        string getName() 
        { return name; }

        void setSubject(string subject) 
        { this->subject = subject; }
        string getSubject() 
        { return subject; }

        void display() {
            cout<<"-------------------Teacher Details----------------------"<<endl;
            cout << "Teacher Name: " << name << ", Subject: " << subject << endl;
        }

    };
}


int main() {
    
    college::Student s1(1, "Snehal","physics");
    
    using college::Teacher;
    Teacher t1("Dr. Sharma", "Physics");

    s1.display();
    t1.display();

    return 0;
}