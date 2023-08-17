#include<iostream>
using namespace std;

class Human{
    public:
        int Weight;
        int age;
        int height;

    public:
        int getAge(){
            return this->age;
        }
        void setWeight(int w){
            this->Weight = w;
        }
};

class Male: public Human{
    public:
    string color;

    void sleep(){
        cout<<"Male Sleeping"<<endl;
    }
};

// learn all the combinations of private , protected , public modes;

int main(){
    
    Male object1;
    cout<<object1.age<<endl;
    cout<<object1.Weight<<endl;
    cout<<object1.height<<endl;
    cout<<object1.color<<endl;
 
    object1.setWeight(83);
    cout<<object1.Weight<<endl;
    object1.sleep();
    return 0;
}

// single , multiple, multilevel,hierarchical,hybrid inheritance codes for learning must try