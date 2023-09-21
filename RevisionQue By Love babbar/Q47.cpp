// i/p - a,b
// o/p - answer with opertions
//  MAke a small calculator

#include<iostream>
using namespace std;

int main(){
    char op;
    cin>>op;
    float num1,num2;
    cin>>num1>>num2;

    switch(op){
        case '+':
        cout<<num1 + num2<<endl;
        break;

        case '-':
        cout<<num1 - num2<<endl;
        break;


        case '*':
        cout<<num1 * num2<<endl;
        break;

        case '/':
        cout<<num1 / num2<<endl;
        break;

        default:
        cout<<"Error your operator is not correct";
        break;
    }
    return 0;

}