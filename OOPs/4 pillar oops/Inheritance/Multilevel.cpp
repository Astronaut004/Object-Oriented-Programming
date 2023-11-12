#include<bits/stdc++.h>

using namespace std;



/*
                        MULTILEVEL

                Class A ------> Class B ----> Class C

*/

class Living {
    public:
    int age;
    int height;
    void ani(int age,int height)
    {
        this -> age = age;
        this -> height = height;
        cout<<"Well you called me so I'm "<<age<<" and my height is like "<<height<<" ft\n";
    }
};
class Species_X : public Living {
    public:
    string color;
    string profession;
    void Description(string color, string profession)
    {
        this -> color = color;
        this -> profession = profession;
        cout<<"ad, I'm "<<color<<" and I'm a "<<profession;
    }
};

class Cross_1X : public Species_X {
    public:
    Cross_1X() {
        cout<<"Hey Everything is good now you can access everything: ";
    }
};

int main()
{
    Cross_1X bitch;
    cout<<"\n\n";
    bitch.ani(19,5);
    cout<<"\n\n";
    bitch.Description("white","Scientist");
    cout<<"\n\n";
    return 0;
}