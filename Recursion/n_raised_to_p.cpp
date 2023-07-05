#include<iostream>
using namespace std;

int power(int n,int p)
{
    if(p==0) return 1;
    int raised=n*power(n,p-1);
    return raised;
}


int main()
{
    cout<<" 3 power 3= "<<power(3,3)<<endl;

    return 0;
}