#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    cout<<"Enter the string: "<<endl;
    cin >> str;
    int sum=0;
    for(int i=0; i<str.size(); i++)
    {
        if(isdigit(str[i]))
        {
            sum += str[i] - '0';
        }
    }
    cout<<"The answer is : "<<sum<<endl;
    return 0;
}
