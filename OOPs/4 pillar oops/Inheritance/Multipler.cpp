#include<bits/stdc++.h>

using namespace std;

class Galaxy {
    private:
    string name;
    public:
    void setName(string name)
    {
        this -> name = name;
    }
    string getName()
    {
        return name;
    }
};

class solarSytem {
    private:
    string serialNumber;
    public:
    void setSerialName(string serialNumber)
    {
        this -> serialNumber = serialNumber;
    }
    string getserialNumber()
    {
        return serialNumber;
    }

};

class Alien : public Galaxy, public solarSytem {
    private:
    int yourCode;
    string SquadName;
    public:
    Alien(){
        cout<<"\n\nBegin the Rumbling-->>\n\n";
    }
    void setYourCode(int yourCode)
    {
        this -> yourCode = yourCode;
    }
    int getYourCode()
    {
        return yourCode;
    }
    void setSquadName(string SquadName)
    {
        this -> SquadName = SquadName;
    }
    string getSquadName()
    {
        return SquadName;
    }
};


int main()
{
    Alien obj;

    //Make a galaxy name
    cout<<"Enter your Galaxy: ";
    string GalaxyName;
    cin>>GalaxyName;
    obj.setName(GalaxyName);

    //make a serial name
    string serial;
    cout<<"\nEnter your Solar System Serial Number: ";
    cin>>serial;
    obj.setSerialName(serial);

    //Enter you code
    int code;
    cout<<"\nEnter Your code: ";
    cin>>code;
    obj.setYourCode(code);

    //enter squad name
    string sqName;
    cout<<"Enter your Sqaud name: ";
    cin>>sqName;
    obj.setSquadName(sqName);

    //printing

    cout<<"\nYour Galaxy: "<<obj.getName()<<"\nSerial number: "<<obj.getserialNumber()<<"\nYour Code: "<<obj.getYourCode()<<"\nYour Squad Name: "<<obj.getSquadName();



    return 0;
}