//  Create class Programmer and class Teacher, both containing a function work(). Derive 
// class ProgrammingTeacher from both classes. Create an object of ProgrammingTeacher and 
// call work() to show ambiguity. Resolve the ambiguity using scope resolution operator. Add 
// `cout` statements in constructors to confirm constructor calling sequence. 

#include <iostream>
using namespace std;

class Programmer
{
    public:
    Programmer()
    {
        cout<<"Programmer constructor called"<<endl;

    }
    
    void work()
    {
        cout<<"It's programmer"<<endl;

    }



};
class Teacher
{
    public:
    Teacher()
    {
        cout<<"Teacher Constructor called"<<endl;
    }
    void work()
    {
        cout<<"Teacher teaches programming"<<endl;
    }


};

class programmingTeacher:public Programmer,public Teacher
{
    public:
    programmingTeacher()
    {}


};

int main()
{
    programmingTeacher pt1;
    // pt1.work();
    pt1.Programmer::work();
    pt1.Teacher::work();


}