#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

int main()
{
    int x=3452167;
    string s=to_string(x);
    sort(s.begin(), s.end(),greater<int>());
    cout<<stoi(s)<<endl;


    return 0;

}    
