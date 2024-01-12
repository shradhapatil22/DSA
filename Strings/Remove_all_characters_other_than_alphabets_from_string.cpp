#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    cout<<"Enter the string: "<<endl;
    cin >> str;
    string ans="";
    for(int i=0; i<str.size(); i++)
    {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >='a' && str[i] <= 'z'))
        {
            ans+=str[i];
        }
    }
    cout<<"The answer is : "<<ans<<endl;
    return 0;
}
