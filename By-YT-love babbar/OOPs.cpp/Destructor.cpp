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
     static int timeToComplete;
    // char *name;

    Hero(){
        cout<<" default Constructor Called"<<endl;
        // name = new char[100];
    }

    static int random(){
        return timeToComplete;
    }
    ~Hero(){
        cout<<"Destructor bahi aooo ab majak nhi ho rha hai"<<endl;
    }
};
// static memeber access  
int Hero::timeToComplete = 5;

int main(){
    // static keyword leaning 
    cout<< Hero::timeToComplete<<endl;
    cout<<Hero::random()<<endl;



    // static destructor code
    // Hero a;

    // Dynamic
    // Hero *b = new Hero();

    // manually desturctor called for dynamic allocate 
    // delete b;
    return 0;

}