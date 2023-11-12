#include<iostream>

using namespace std;

//everything inside a class is considered to be encapsulated 

class A {

    private:
    int a = 10, b = 20;
    public:
    void speak() {
        cout<<"Hello\n";
    }
    void getA() {
        cout<<this -> a<<endl;
    }
    int setB(int B) {
        return this -> b = B;
    }
    void getB() {
        cout<<this -> b<<endl;
    }
};



int main()
{
    A obj;

    obj.speak();
    obj.getA();
    obj.setB(50);
    obj.getB();
    return 0;
}