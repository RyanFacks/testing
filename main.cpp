
//*************************************************************************
//
// Ryan Facks
// ZID - Z2027325
// CSCI - 340 - PE1
//
// I certify that this is my own work and where appropriate an extension
// of the starter code provided for the assignment.
//*************************************************************************


#include <iostream>

using namespace std;

int fact(int n);
int fibonacci(int n);

int main(void)
{
    cout << fact(5) << endl;
    return 0;
}

int fact(int n)
{
    if (n<=1)
    {
        return 1;
    }
    return n * fact(n - 1);
}

//Computre the fibonacci number given an integer n
// f(n) => f(n-1) + f(n-2) n>=2 else 1
int fibonacci (int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}
