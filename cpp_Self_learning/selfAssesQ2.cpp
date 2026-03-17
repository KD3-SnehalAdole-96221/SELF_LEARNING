// 2. Write an inline function to calculate factorial and calculate power.

#include <iostream>
using namespace std;

inline int CalculateFact(int n)
{    int res=1;
     for(int i=2; i<=n; i++)
     {
        res=res*i;

     }
     return res;
}

inline int CalculatePow(int base, int expo)

{
    int res=1;
    for(int i=0;i<expo;i++)
    {
        res=res*base;
    }
    return res;


}



int main()
{
    int n=5;
    cout<<"factorial of "<<n<<" is: "<<CalculateFact(n)<<endl;
    int base=3;
    int expo=2;
    cout<<base<< " raise to "<<expo<<" is "<<CalculatePow(base,expo)<<endl;

}


