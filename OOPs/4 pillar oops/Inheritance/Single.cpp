#include<bits/stdc++.h>

using namespace std;

class parent {
    public:
    int height;
    int age;
    int weight;
    public:
    int getAge() {
        return this -> age;
    }
    void setAge(int age) {
        this -> age = age;
    }
};

class child : public parent {
    public:
    string color;
    void setColor(string color)
    {
        this -> color = color;
    }
    public:
    void displayChildInfo() {
        cout << "Color of the Child is: " << this -> color<<" "<< this -> age << endl; 
    }

};


int main()
{
    child obj;
    obj.setAge(29);
    obj.setColor("brown");
    obj.displayChildInfo();
    return 0;
}



/*
        public memeber ko easily inherit kr skte hai 
        private members ko inherit nhi kr skte
        protected members are like private member

*/