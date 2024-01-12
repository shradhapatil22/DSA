#include<iostream>
using namespace std;

int main()
{
    int n,temp[n],d;
    cout<<"enter n: "<<endl;
    cin>>n;
    int a[10];
    cout<<"enter array elements: "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cout<<"Enter d:"<<endl;
    cin>>d;
    for(int i=0; i<d; i++)
    {
        temp[i]=a[i];
    }
    
    for(int i=d; i<n; i++)
    {
        a[i-d]=a[i];
    }
    for(int i=n-d; i<n; i++)
    {
        a[i]=temp[i-(n-d)];
    }
    cout<<"\n array after rotation is"<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}