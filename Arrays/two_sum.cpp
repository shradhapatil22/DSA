#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,l,r,t;
    cin>>n;
    int a[n];
    vector<int> ans;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cin>>t;

    for(int i=0; i<n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if(a[i]+a[i+1]==t) 
            {
                ans.push_back(i);
                ans.push_back(j);
            }
        }
    }
    cout<<"The vectors producing the target sum are: "<<ans[0]<<" "<<ans[1];
    // if to say the pairs producing the target sum exists or not
    // sort(a,a+n);
    // l=0;
    // r=n-1;
    // while(l<=r)
    // {
    //     if(a[l]+a[r]>t) l++;
    //     else r--;
    // }
    // cout<<"l = "<<l<<endl;
    // cout<<"r = "<<r<<endl;
    return 0;
}