/*
        Dynamic/Runtime Polymorphism

        method Overriding
*/

#include<bits/stdc++.h>

using namespace std;

class A {
    public:
    void speak()
    {
        cout<<"Heyyyy";
    }
};

class B : public A {
    public:
    void speak()
    {
        cout<<"Helllooooo";
    }
};


// uss class function ko phle priority milegi compare to inherited class ke same name function se


int main()
{
    B obj;
    obj.speak();
}