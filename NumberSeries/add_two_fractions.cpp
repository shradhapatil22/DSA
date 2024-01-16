#include<iostream>
using namespace std;
int lcm(int a,int b)
{
    int r;
    r=a%b;
    while(r!=0)
    {
        a=b;
        b=r;
        r=a%b;
    }
    int lcm=(a*b)/g;
    return lcm;
}

int main()
{
    int n1,d1,n2,d2,ans;
    cout<<"Enter fractions: "<<endl;
    cin>>n1>>d1>>n2>>d2;
    ans=n1/lcm

    return 0;
}