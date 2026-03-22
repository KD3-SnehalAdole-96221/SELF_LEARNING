// 4. Create a class named Laptop with the following specifications: 
// Class Requirements: 
// Private data members: 
// brandId 
// price 
// A parameterless constructor that: 
// Initializes brandId to 1 
// Initializes price to 50000 
// Displays the message: 
// "Laptop Constructor Called" 
// A destructor that displays the message: 
// "Laptop Destructor Called" 
// A member function display() that prints the laptop details. 


#include <iostream>
using namespace std;
class laptop
{
private:
    int brandId;
    double price;

public:
    laptop() : brandId(1), price(50000.0)
    {
        cout << "Laptop Constructor Called" << endl;
    }
    ~laptop()
    {
        cout << "Laptop Destructor Called" << endl;
    }
    void display()
    {
        cout << "Brand ID: " << brandId << endl;
        cout << "Price: " << price << endl;
    }
};
int main()
{
    laptop l1;
    l1.display();
    return 0;
}