#include<iostream>
using namespace std;

int main()
{
    int n,m,a[n][m];
    int sum1=0,sum2=0;
    cin>>n;
    cin>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }      
    }
    for(int i=0;i<n;i++)
    {
        sum1+=a[i][i];
        sum2+=a[i][n-i-1];
    }
    cout<<"absolute difference= "<<sum1-sum2;
    
    
    
    return 0;
}