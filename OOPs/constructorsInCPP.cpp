#include<iostream>
using namespace std;

class Rectangle
{
    public:
    int length;
    int width;
// default constructor
    Rectangle()
    {
        length = 0;
        width = 0;
    }
// parameterized constructor
    Rectangle(int l,int w)
    {
        length = l;
        width = w;
    }

// copy constructor
    Rectangle(Rectangle& r)
    {
        length = r.length;
        width = r.width;
    }

    void display()
    {
        cout<<"length: "<<length<<" width: "<<width<<endl;
    }

// destructor    for pointer variables use delete keyword
    ~Rectangle()
    {
        cout<<"Destructor executing"<<endl;
    }
};

int main()
{
    Rectangle r1;
    r1.display();

    Rectangle r2(10,20);
    r2.display();

    Rectangle r3(r2);
    r3.display();
}