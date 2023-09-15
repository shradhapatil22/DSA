#include<iostream>
using namespace std;

int main(int argc, char** argv){
    string str;
    cin >> str;
    int l=str.length();
    for(int i=0; i<l/2; i++)
    {
        swap(str[i],str[l-i-1]);
    }
    cout<<"reversed string is : "<<str<<endl;
    return 0;
}