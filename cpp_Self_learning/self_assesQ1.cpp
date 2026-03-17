// 1. Write a program to implement `swap()` by value and compare the result with reference- 
// based swap. 
// example : 
// // Swap using Call by Value 
// void swapByValue(int a, int b) 
// { 
// // TODO: 
// // 1. Declare temporary variable 
// // 2. Swap a and b 
// } 
// // Swap using Call by Reference 
// void swapByReference( ) 
// { 
// // TODO: 
// // 1. Declare temporary variable 
// // 2. Swap a and b 
// } 
// int main() 
// { 
// int num1 = 10; 
// int num2 = 20; 
// cout << "Before swapByValue: "; 
// cout << num1 << " " << num2 << endl; 
// swapByValue(num1, num2); 
// cout << "After swapByValue: "; 
// cout << num1 << " " << num2 << endl; 
// cout << "\nBefore swapByReference: "; 
// cout << num1 << " " << num2 << endl; 



#include <iostream>
using namespace std;
int  swapByValue(int a,int b)
{
    int temp=a;
    a=b;
    b=temp;
    return 0;
}
int SwapByReference(int &a,int &b)
{
    int temp =a;
    a=b;
    b=temp;
    return 0;
}

int main()
{
    int a=10;
    int b=20;

    cout<<"-------------Swapping using Call By value----------"<<endl;
    cout<<"Before Swapping values of A and B are:"<<endl;
    cout<<"a: "<<a<<" b: "<<b<<endl;
    swapByValue(a, b);
    cout<<"After Swapping values of A and B are:"<<endl;
    cout<<"a: "<<a<<" b: "<<b<<endl;



    cout<<"-------------Swapping using By Reference-----------"<<endl;
    cout<<"Before Swapping values of A and B are:"<<endl;
    cout<<"a: "<<a<<" b: "<<b<<endl;
    SwapByReference( a, b);
    cout<<"After Swapping values of A and B are:"<<endl;
    cout<<"a: "<<a<<" b: "<<b<<endl;





}