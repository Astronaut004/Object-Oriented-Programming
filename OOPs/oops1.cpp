#include<bits/stdc++.h>
using namespace std;

/*Getter and setter used to access private values of class*/
class hero {
    private:
    int health;
    public:
    char level;
    char name;
    void print()
    {
        cout<<level<<endl;
    }

    /*Constructors*/
    hero() {
        cout<<"\nConstructor here:\n ";
    }
    /*Parameterised Constructor*/

    hero(int health)
    {
        this -> health = health;
        cout<<this -> health<<endl;
    }

    /*Copy Constructor*/
    // hero(hero& temp) {
    //     char *ch = new char[8];
    //     strcpy(ch,temp.name);
    //     this -> name = ch;
    //     this -> health = temp.health;
    //     this -> level = temp.level;
    // }

    /*Copy concept*/
    

    /*Getter*/
    int gethealth() {
        return health;
    }
    int getlevel() {
        return level;
    }

    /*Setter*/
    void sethealth(int h) {
        health = h;
    }
    void setlevel(char ch) {
        level = ch;
    }
};



/*
        learn padding and greedy alignment
*/


int main()
{

    /*Static allocation of object*/
    hero arya(90);
    
    
    /*copy*/
    hero captan(arya);

    /*Dynamic allocation of object*/
    hero *thor = new hero(90);
    /*or
    hero *chauhan = new hero()
    */

   (*thor).level;
   (*thor).gethealth();

   /*
   thor -> level;
   thor -> gethealth();
   */

  /*Constructor always called whenever a object is created
  if program create any constructor defualt constructor will be delete*/
}