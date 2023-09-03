// check a number prime or not

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int div=2;
    while(div<n){
        if(n%div==0){
            cout<<"Not prime"<<endl;
        }
        else{
            cout<<"prime"<<endl;
        }
    break;
    }
    div++;
    return 0;
}