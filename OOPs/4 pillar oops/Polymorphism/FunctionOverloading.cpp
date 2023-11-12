/*
            function overloading 
*/

#include<bits/stdc++.h>


using namespace std;

// Use same name function

class A {
    public: 
    void sayHello() {
        cout<<"Without Arguments\n";
    }
    void sayHello(int a)
    {
        cout<<"With Arguments\n";
    }

    // Functiono overloading won't work if there is just change in return type but no argument
    // to achive a function overloading we must pass argument to the same name function


};

int main() {
    A A;
    A.sayHello();
    A.sayHello(6);
    return 0;
}
