#include <iostream>
using namespace std;

class Parent{

    public:
        Parent()
        {
            cout<<"Parent constructor called"<<endl;
        }
        ~Parent()
        {
            cout<<"Parent destructor called"<<endl;
        }
};

class Child : public Parent{

    public:
        Child()
        {
            cout<<"child constructor called"<<endl;
        }
        ~Child()
        {
            cout<<"child destructor called"<<endl;
        }
};

int main()
{
    Child child;

    return 0; 
}