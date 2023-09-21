// Total amount given try to find different type of numberof notes

#include<iostream>
using namespace std;

int main(){
int amount;
cout<<"Enter total amount"<<endl;
cin>>amount;

int Rs100,Rs50,Rs20,Rs10;
switch(1){
    case 1 :
            Rs100=amount/100;
            amount = amount % 100;
        cout<<Rs100<<endl;
    case 2 :
            Rs50=amount/50;
            amount = amount % 50;
        cout<<Rs50<<endl;
    case 3 :
            Rs20=amount/20;
            amount = amount % 20;
        cout<<Rs20<<endl;
    case 4 :
            Rs10=amount/10;
            amount = amount % 10;
        cout<<Rs10<<endl;
    // default:
    //     cout<<" NO notes avilable"<<endl;
}
    return 0;
}