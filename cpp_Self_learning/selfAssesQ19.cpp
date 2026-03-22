 #include<iostream>
#include<list>
#include<algorithm>
#include<cstdlib>
using namespace std;

int main()
{
    list<int> numbers;

    // store 10 random numbers
    for(int i=0;i<10;i++)
    {
        numbers.push_back(rand()%100);   // random number 0-99
    }

    // 1. Display list in reverse order using iterator
    cout<<"Reverse order: ";
    list<int>::reverse_iterator rit;
    for(rit = numbers.rbegin(); rit != numbers.rend(); rit++)
    {
        cout<<*rit<<" ";
    }
    cout<<endl;


    // 2. Increment each number by 5 using iterator
    list<int>::iterator it;
    for(it = numbers.begin(); it != numbers.end(); it++)
    {
        *it = *it + 5;
    }


    // 3. Display list using const iterator
    cout<<"Using const iterator: ";
    list<int>::const_iterator cit;
    for(cit = numbers.cbegin(); cit != numbers.cend(); cit++)
    {
        cout<<*cit<<" ";
    }
    cout<<endl;


    // 4. Sort the list using STL algorithm
    numbers.sort();


    // 5. Display modified list using default iterator
    cout<<"Sorted list: ";
    for(it = numbers.begin(); it != numbers.end(); it++)
    {
        cout<<*it<<" ";
    }

    return 0;
}