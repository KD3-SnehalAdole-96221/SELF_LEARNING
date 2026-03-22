 #include<iostream>
#include<fstream>
using namespace std;

// User defined class
class Student
{
    int id;
    string name;

public:
    Student(int id=0,string name="")
    {
        this->id=id;
        this->name=name;
    }

    void accept()
    {
        cout<<"Enter id: ";
        cin>>id;
        cout<<"Enter name: ";
        cin>>name;
    }

    void display() const
    {
        cout<<"ID: "<<id<<" Name: "<<name<<endl;
    }

    // operator overloading for file handling
    friend ostream& operator<<(ostream &out,const Student &s)
    {
        out<<s.id<<" "<<s.name<<endl;
        return out;
    }

    friend istream& operator>>(istream &in,Student &s)
    {
        in>>s.id>>s.name;
        return in;
    }
};



// Generic Template Class
template<class T>
class Array
{
    T *arr;
    int size;

public:

    Array(int size=0)
    {
        this->size=size;
        arr=new T[size];
    }

    // destructor to prevent memory leak
    ~Array()
    {
        delete[] arr;
    }

    // operator []
    T& operator[](int index)
    {
        return arr[index];
    }

    int getSize() const
    {
        return size;
    }

    // display
    void display() const
    {
        for(int i=0;i<size;i++)
        {
            arr[i].display();
        }
    }

    // file write
    void writeFile(string filename)
    {
        ofstream fout(filename);

        for(int i=0;i<size;i++)
        {
            fout<<arr[i];
        }

        fout.close();
    }

    // file read
    void readFile(string filename)
    {
        ifstream fin(filename);

        for(int i=0;i<size;i++)
        {
            fin>>arr[i];
        }

        fin.close();
    }

};



// main
int main()
{
    int n=3;

    Array<Student> a(n);

    cout<<"Enter student details:\n";

    for(int i=0;i<n;i++)
    {
        a[i].accept();
    }

    // write to file
    a.writeFile("student.txt");

    cout<<"\nData written to file.\n";

    // read again from file
    Array<Student> b(n);

    b.readFile("student.txt");

    cout<<"\nData read from file:\n";
    b.display();

    return 0;
}