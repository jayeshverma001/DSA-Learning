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
};

int main(){
    Hero h1;
    // for access
    cout<<"Ramesh is:"<<h1.getHealth()<<end;



    return 0;
}