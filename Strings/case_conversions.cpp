#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

int main()
{
    string s1="bleh BleH";
    
    // to upper case

    for(int i = 0; i <s1.length(); i++)
    {
        s1[i]=toupper(s1[i]);
    }

    cout<<s1<<endl;

// to lowercase

    for(int i = 0; i <s1.length(); i++)
    {
            s1[i]=tolower(s1[i]);
    }

    cout<<s1<<endl;

//     convert upper to lower and vice versa using string functions

string s2="HeLLo WorlD!";
for(int i = 0; i<s2.length(); i++)
{
    if(isupper(s2[i]))
        s2[i]=tolower(s2[i]);
    else if(islower(s2[i]))
        s2[i]=toupper(s2[i]);
    else 
        continue;
}

cout<<s2<<endl;

// Changing the ASCII code of all characters

string s3="Bleh BLEH!!!";

for(int i = 0; i<s3.length(); i++)
{
    if (s3[i] >= 'A' && s3[i] <= 'Z')    //checking for uppercase characters
			s3[i]+= 32;         //converting uppercase to lowercase 

    else if (s3[i] >= 'a' && s3[i] <= 'z')   //checking for lowercase characters
			s3[i]-= 32;  
    else 
        continue;                         //converting lowercase to uppercase
} 
    

cout<<s3<<endl;

// using transform functions
string s4="BLEH bleh";

transform(s4.begin(), s4.end(),s4.begin(),::toupper);
cout<<s4<<endl;

transform(s4.begin(), s4.end(),s4.begin(),::tolower);
cout<<s4<<endl;

    return 0;
}
