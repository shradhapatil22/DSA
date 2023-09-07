#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int i =0,t;
    int j =n-1;
    while(i<j)
    {
        t=a[i];
        a[i]=a[j];
        a[j]=t;
        i++;
        j--;
    }
    for(int i=0; i<n; i++)
    {
        cout<<a[i];
    }
    return 0;
}