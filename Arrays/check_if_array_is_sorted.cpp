#include<iostream>
using namespace std;

int main()
{
    int n,flag=1;
    cout<<"enter n: "<<endl;
    cin>>n;
    int a[n];
    cout<<"enter array elements: "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
        if(a[i]<=a[i+1]) flag=0;
    }
    if(flag==0) cout<<"Array not sorted"<<endl;
    if(flag==1) cout<<"Array  sorted"<<endl;

    return 0;
}