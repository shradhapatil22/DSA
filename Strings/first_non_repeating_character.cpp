#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    int freq[str.size()]={0};
    cout<<"Enter the string: "<<endl;
    cin >> str;
    for (char ch : str) {
        freq[ch]++;
    }
    for (char ch : str) {
        if (freq[ch] == 1) {
            cout<<ch<<endl;
        }
    }
    return 0;
}