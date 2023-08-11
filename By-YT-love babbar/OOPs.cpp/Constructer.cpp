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
    char *name;

    Hero(){
        cout<<" default Constructor Called"<<endl;
        name = new char[100];
    }

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
    void setName(char name[]){
        strcpy(this->name,name);
    }

    // parameterised constructor
    Hero(int health){
        cout<<"this ->"<<this<<endl;
       this-> health = health;
    }
    // multiple parameter constructor
    Hero(int health,char level){
        this-> health = health;
        this-> level = level;
    }
    // copy constructpr
    Hero(Hero& temp){
        cout<<"copy construcor called"<<endl;
        this->health = temp.health;
        this->level = temp.level;
    }
    void print(){
        cout<<endl;
        cout<<" [ Name: "<<this->name<<" ,";
        cout<<"health: "<<this->health<<" ,";
        cout<<"level: "<<this->level<<" ]";
        cout<<endl<<endl;
    }
};
int main(){



    // shllow copy deep copy
    Hero hero1;
    hero1.setHealth(12);
    hero1.setLevel('D');
    char name[7]="Babbar";
    hero1.setName(name);

    hero1.print();

    // for copy cpnstructor
    // Hero S(70,'c');
    // S.print();
   
    // Hero R(S);
    // R.print();







    // cout<<"jkv"<<endl;
    // static called
    // Hero ramesh(10);
 
    // cout<<"Adress of ramesh"<< &ramesh <<endl;
    // cout<<"Hello"<<endl;

    // dynamic called
    // Hero *h = new Hero;

    return 0;
}