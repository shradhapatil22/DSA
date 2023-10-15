#include<iostream>
using namespace std;

int main()
{
    int n,temp,i,j;
    cout<<"enter n: "<<endl;
    cin>>n;
    int a[n];
    cout<<"enter array elements: "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    i=j=0;
    for(int i=0; i<n; i++)
    {
        if(a[i]==0) j=i;
        break;
    }
    for(int i=0; i<n; i++)
    {
        if(a[i]!=0)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            j++;
        }
    }
    for(int i=0;i<n;i++) cout<<a[i];
    return 0;
}