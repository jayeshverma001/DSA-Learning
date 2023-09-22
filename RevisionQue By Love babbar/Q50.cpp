// Check a number is even or not using function

#include<iostream>
using namespace std;


// Way1 here
// int IsEven(int n){
//     if(n%2==0){
//         cout<<"Yes Even"<<endl;
//     }
//     else{
//         cout<<"NO even"<<endl;
//     }
// }

// int main(){
//     int n;
//     cin>>n;

//     cout<<IsEven(n)<<endl;
//     return 0;
// }

// way 2

bool isEven(int n){
    if(n&1){
        return 0 ;
    }
    else{
        return 1;
    }

}

int main(){
    int n;
    cin>>n;

    if (isEven(n)){
        cout<<" Yes Even"<<endl;
    }
    else{
        cout<<" NO Even"<<endl;
    }
    return 0;
}