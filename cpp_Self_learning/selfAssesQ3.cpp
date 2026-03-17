// 3.
// Write a program to:
// Ask the user for number of students.
// Dynamically allocate an array of Student objects using new.
// Each student contains:
// rollNo
// marks
// Display:
// All student records
// Highest marks
// Properly release deallocate memory.

#include <iostream>
using namespace std;

class Student
{

private:
    int RollNo;
    int Marks;

public:
    Student(void) : RollNo(0), Marks(0)
    {
    }

    void acceptRecord(void)
    {
        cout << "Enter Roll No: ";
        cin >> RollNo;
        cout << "Enter Marks: ";
        cin >> Marks;
    }

    void Display(void)
    {   cout<<"---------------------------------"<<endl;
        cout << "RollNo:" << RollNo << endl;
        cout << "Marks: " << Marks << endl;
        cout<<"---------------------------------"<<endl;
    }

    

    int getMarks()
    {
        return Marks;
    }
};

int main()
{
    int count;
    cout << "Enter the Number of Student: " << endl;
    cin >> count;

    Student *arr = new Student[count];
    for (int i = 0; i < count; i++)
        arr[i].acceptRecord();
    int maxMarks = 0;
    for (int i = 0; i < count; i++)
    {
        arr[i].Display();

        if (arr[i].getMarks() > maxMarks)
        {
            maxMarks = arr[i].getMarks();
        }
       
    }
     cout<<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
        cout<<"Congratulations!"<<endl;
        cout<<"Maximum Marks from the above students is: "<<maxMarks;

    delete[] arr;
    arr = NULL;
    return 0;
}