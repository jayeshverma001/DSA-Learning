#include<iostream>
// #include "Hero.cpp" 
// if we are using properties from another file
using namespace std;

// formation of class
class Hero{
    // properties
    // private:
    public:
    char name[100];
    int health;
    // public:
    char level;
};


int main(){

    // creation of object
    // static allocation
    Hero h1;

    // dynamic allocation
    Hero *b = new Hero;

    // for setting values
    // h1.health = 70;
    // h1.level = 'k';
    // cout<<"size :"<<sizeof(h1)<<endl;
    // (size according to properties given)
    // for empty class size will 1 for class identification

    // priniting values
    // cout<<"health is :"<< h1.health<<endl;
    // cout<<"level is :"<< h1.level<<endl;

    return 0;
}