#include<iostream>
using namespace std;

class A {
    public:
    void sayHello(){
        cout<<"Hello jk Bhai"<<endl;
    }

    int sayHello(char name){
        cout<<"Hello jk Bhai"<<endl;
        return 1;
    }
    int sayHello(string name){
        cout<<"Hello jk Bhai"<< name <<endl;
    }
};

int main(){
    A obj;
    obj.sayHello();

    return 0;
}

// code for operator overlaoding