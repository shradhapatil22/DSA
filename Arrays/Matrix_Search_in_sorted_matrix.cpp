#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int a[n][m];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }

    int key;
    cin>>key;

    int r=0,c=m-1;
    bool found=false;

    while (r<n && c>=0)
    {
        if(a[r][c]==key)
        {
            found=true;
        }

        if(a[r][c]>key)
            c--;
        if(a[r][c]<key)
            r++;
    }

    if(found==true)
        cout<<"key found: "<<key<<endl;
    else
        cout<<"key not found: "<<endl;
   

    return 0;

}