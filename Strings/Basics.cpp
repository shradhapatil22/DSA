#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

int main()
{
    // declaring strings
    string str;
    string str1(5,'f');
    string str2="hello world";
    cout<<str1<<endl;
    cout<<str2<<endl;

    // // inputing strings 
    // getline(cin, str);
    // cout<<str<<endl;

    // appending strings
    string s1="bleh";
    string s2="bleh";
    s1.append(s2);
    cout<<s1<<endl;
    cout<<s1+s2<<endl;

    // accessing a specific character from a string
    cout<<s1[1]<<endl;

    // clearing a string
    s2.clear();
    cout<<s2<<endl;

    // comparing strings
    cout<<s2.compare(s1)<<endl;

    // checking if a string is empty
    if(s2.empty())
        cout<<"s2 is empty"<<endl;
    else
        cout<<s2<<endl;

    // erasing substrings
    string s3="bleh bleh";
    s3.erase(3,3);
    cout<<s3<<endl;

    // find function
    cout<<s3.find("le")<<endl;

    // insert function
    s3.insert(2,"whyyy");
    cout<<s3<<endl;

    //  length function
    cout<<s3.length()<<endl;
    cout<<s3.size()<<endl;

    // acquiring a substring
    cout<<s3.substr(6,4)<<endl;

    // converting a string to integer
    string s4="123";
    int x=stoi(s4);
    cout<<x+5<<endl;

    // integer to string
    cout<<to_string(x)+"2"<<endl;

    // sorting a string
    sort(s3.begin(), s3.end());
    cout<<s3<<endl;

    return 0;
}