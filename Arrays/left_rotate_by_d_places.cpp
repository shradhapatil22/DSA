#include<iostream>
using namespace std;

int main()
{
    int n,temp;
    cout<<"enter n: "<<endl;
    cin>>n;
    int a[10];
    cout<<"enter array elements: "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    temp=a[0];
    for(int i=0; i<n; i++)
    {
        a[i-1]=a[i];
    }
    a[n-1]=temp;
return 0;

}