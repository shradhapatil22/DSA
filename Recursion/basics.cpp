#include<iostream>
using namespace std;

int sum(int n)
{
    if(n ==0)
    {
        return 0;
    }

    int prevSum=sum(n-1);
    return prevSum+n;
}

int main()
{

    cout<<"sum till 5= "<<sum(5)<<endl;

    return 0;
}