#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter the number: "<<endl;
    cin>>a;
    if(a==1||a==2) cout<<"It is a prime number"<<endl;
    for(int i=2;i<a/2;i++)
    {
        if(a%i == 0)
        {
            cout<<"It is not a prime number"<<endl;
            exit(0);
        }
    }
    cout<<"Entered number is a prime number"<<endl;
    return 0;

}