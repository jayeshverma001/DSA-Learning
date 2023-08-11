#include<iostream>
using namespace std;

// formation of class
class Hero{
    // properties
    private:
    // public:
    char name[100];
    int health;
    public:
    char level;

    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }
    void setHealth(int h){
        health = h;
    }
    void setLevel(char ch){
        level = ch;
    }
};

int main(){
    // static allocation
    Hero a;
    a.setHealth(65);
    a.setLevel('j');
    cout<<"level is "<<a.level<<endl;
    cout<<"health is"<<a.getHealth()<<endl;

    // dynamic allocation
    Hero *b = new Hero;
    b->setHealth(90);
    b->setLevel('A');
    cout<<"level is"<<(*b).level<<endl;
    cout<<"health is"<<(*b).getHealth()<<endl;

    cout<<"level is"<<b->level<<endl;
    cout<<"health is"<<b->getHealth()<<endl;

    return 0;

}