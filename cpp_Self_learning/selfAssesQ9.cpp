// 9. Create a base class Person with data members name and age and a member function 
// display(). Derive two classes Student (with data member marks) and Teacher (with data 
// member salary) from Person. Add a function in each derived class (study() for Student and 
// teach() for Teacher). Add abstract method work() in Person and implement in both derived 
// classes. Create Student and Teacher object in main() to demonstrate run-time 
// Polymorphism.


#include <iostream>
using namespace std;
class Person
{
protected:
    string name;
    int age;

public:
    Person() : name(""), age(0) {}
    Person(string n, int a) : name(n), age(a) {}
    virtual void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
    virtual void work() = 0; 
};
class Student : public Person
{
private:
    int marks;

public:
    Student() : Person(), marks(0) {}
    Student(string n, int a, int m) : Person(n, a), marks(m) {}
    void display()
    {
        Person::display();
        cout << "Marks: " << marks << endl;
    }
    void study()
    {
        cout << name << " is studying." << endl;
    }
    void work()
    {
        study();
    }
};
class Teacher : public Person
{
private:
    double salary;

public:
    Teacher() : Person(), salary(0.0) {}
    Teacher(string n, int a, double s) : Person(n, a), salary(s) {}
    void display()
    {
        Person::display();
        cout << "Salary: " << salary << endl;
    }
    void teach()
    {
        cout << name << " is teaching." << endl;
    }
    void work()
    {
        teach();
    }
};
int main()
{
    Person *p1 = new Student("Vaishnavi", 20, 85);
    Person *p2 = new Teacher("Mr. Smith", 45, 50000.0);

    cout << "Student Details:" << endl;
    p1->display();
    p1->work();

    cout << "\nTeacher Details:" << endl;
    p2->display();
    p2->work();

    delete p1;
    delete p2;

    return 0;
}