#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    cout<<"Enter string: "<<endl;
    getline(cin, str);
    for(int i=0; i<str.size(); i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
        {
            continue;
        }
        cout<<str[i];
    }
    
    return 0;
}
