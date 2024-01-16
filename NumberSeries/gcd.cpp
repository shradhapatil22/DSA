#include<iostream>
using namespace std;

int main()
{
    int a,b,r,g;
    cout << "Enter two numbers: "<<endl;
    cin >> a>>b;
    r=a%b;
    while(r!=0)
    {
        a=b;
        b=r;
        r=a%b;
        g=b;
    }
    cout<<"GCD is : "<<g<<endl;
    int lcm=(a*b)/g;
    cout<<"LCM is : "<<lcm<<endl;
    return 0;
}