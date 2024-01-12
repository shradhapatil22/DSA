#include<iostream>
using namespace std;

int main()
{
    int n,a[n],r;
    int lsum=0,rsum=0;
    cout<<"Enter the number of elements: "<<n<<endl;
    cin>>n;
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            lsum+=a[j];
        }
        for(int j=i+1;j<n;j++)
        {
            rsum+=a[j];
        }
        if(rsum==lsum){r=i;}
    }
    cout<<"equilibrium index is: "<<r<<endl;

    return 0;

}