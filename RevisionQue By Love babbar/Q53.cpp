// AP = (3*n+7)... Find the value of nth term

#include<iostream>
using namespace std;

int ValueOfAp(int n){
    for(int i=0;i<=n;i++){
        cout<<(3*n+7)<<" ";
        break;
    }
}

int main(){
    int n;
    cin>>n;
    // int answer = ValueOfAp(n);
    cout<<ValueOfAp(n)<<endl;
    return 0;
}