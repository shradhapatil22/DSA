#include<iostream>
using namespace std;
int main()
{
    int n,mid,low,high;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    low=mid=0;
    high=n-1;

    while(mid<=high)
    {
        if (a[mid]==0)
        {
            swap(a[low],a[mid]);
            low++;
            mid++;
        }
        if (a[mid]==1)
        {
            mid++;
        }
        if (a[mid]==2)
        {
            swap(a[high],a[mid]);
            high--;
            mid++;
        }
    }
    for(int i=0; i<n; i++)
    {
        cout<<a[i];
    }

    return 0;

}