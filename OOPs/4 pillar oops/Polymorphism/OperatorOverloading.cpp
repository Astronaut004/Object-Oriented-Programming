/*
        Syntax
        return_type operator+ () {

        }



*/


// smjh nhi aya


#include<bits/stdc++.h>

using namespace std;

class B {
    public:
    int a;
    void operator+ (B& obj)
    {
        int value1 = this->a;
        int value2 = obj.a;
        cout<<value1-value2;
    }
};

int main()
{
    B obj1,obj2;
    obj1.a = 3;
    obj2.a = 7;
    obj1 + obj2;
    return 0;
}