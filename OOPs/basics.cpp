#include<iostream>
using namespace std;

class Fruits {
    public:
        string name;
        string color;

    void disp()
    {
        cout<<"name: "<<name<<" color: "<<color<<endl;
    }
};

int main()
{
    Fruits apple;
    apple.name = "apple";
    apple.color = "red";
    apple.disp();

// object pointer
    Fruits *mango = new Fruits();
    mango->name = "mango";
    mango->color = "yellow";
    mango->disp();
    return 0;
}

