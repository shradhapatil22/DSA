#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,r;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0; i<n; i++)
    {
        if(a[i]==a[i+1]) r=a[i];
        if(a[i]+1!=a[i+1]) m=a[i]+1;
    }
    cout<<"Repeating: "<<r<<endl;
    cout<<"missing : "<<m<<endl;
    return 0;
}