// print: a to z - lowercase, A to Z - uppercase,0 to 9 - number....using AsCII table
#include<iostream>
using namespace std;

int main(){
    char a;
    cin>>a;
    
    // in simple manuplation
    // if('a'<=a && a<='z'){
    //     cout<<"a is lowercase"<<endl;
    // }
    // else if('A'<=a && a<='Z'){
    //     cout<<"a is Uppercase"<<endl;
    // }
    // else{
    //     cout<<"a is number"<<endl;
    // }

    // With ASCII table numbering
    if(97<=a && a<=122){
        cout<<"a is lowercase"<<endl;
    }
    else if(65<=a && a<=90){
        cout<<"a is Uppercase"<<endl;
    }
    else{
        cout<<"a is number"<<endl;
    }
    return 0;
}