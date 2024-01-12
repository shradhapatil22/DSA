#include<iostream>
#include<stack>
#include<string.h>
using namespace std;

int main()
{
    stack<int> stack;
    string str;
    int count =0;
    cout<<"Enter string: "<<endl;
    cin>>str;
    for(int i=0; i<str.length(); i++)
    {
        if(str[i]=='(') stack.push(i);
        if(str[i]==')')
        {
            stack.pop();
            count++;
        }
    }
    cout<<"Depth of Parenthesis is : "<<count<<endl;
    return 0;
}