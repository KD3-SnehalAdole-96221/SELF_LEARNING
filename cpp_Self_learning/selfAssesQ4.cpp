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

class Laptop
{
    private:
    int brandId;
    float price;

    public:
    Laptop(void):brandId(1),price(50000)
    {
        cout<<"Laptop Constructor called"<<endl;

    }
    void display(void)
    {
        cout<<"Brand Id: "<<brandId<<endl;
        cout<<"Price: "<<price<<endl;
    }
    ~Laptop()
    {
        cout<<"Laptop Destructor Called"<<endl;
    }

};

int main()
{
    Laptop l1;
    l1.display();
}