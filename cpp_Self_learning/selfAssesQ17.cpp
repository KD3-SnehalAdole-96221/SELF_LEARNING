#include<iostream>
#include<fstream>
using namespace std;

class Student
{
    int id;
    char name[50];
    float marks;

public:

    void accept()
    {
        cout<<"Enter ID: ";
        cin>>id;

        cout<<"Enter Name: ";
        cin>>name;

        cout<<"Enter Marks: ";
        cin>>marks;
    }

    void display()
    {
        cout<<"\nStudent Details\n";
        cout<<"ID: "<<id<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
};


int main()
{
    Student s1;

    // accept data
    s1.accept();

    // save object to file
    ofstream fout("student.dat", ios::binary);
    fout.write((char*)&s1, sizeof(s1));
    fout.close();

    cout<<"\nObject saved to file\n";


    // load object from file
    Student s2;

    ifstream fin("student.dat", ios::binary);
    fin.read((char*)&s2, sizeof(s2));
    fin.close();

    cout<<"\nObject loaded from file\n";

    s2.display();

    return 0;
}