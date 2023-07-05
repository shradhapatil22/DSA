#include<iostream>
using namespace std;

int factorial(int n)
{
    if(n == 0)
        return 1;
    int fact=n*factorial(n-1);
    return fact;
}

int main()
{
    cout<<"factorial of 6= "<<factorial(6)<<endl;
}