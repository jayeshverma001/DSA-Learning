// Find the value of nCr --- input n,r output--nCr
#include<iostream>
using namespace std;

int fact( int n);
int ValueOfFactorial(int n,int r){
    return (fact(n))/(fact(n-r)*fact(r));
}
int fact( int n){
    if(n==0)
    return 1;

        int res = 1;
        for(int i=2;i<=n;i++){
            res = res * i;
        }
        return res;
}

int main(){
    int n,r;
    cin>>n>>r;
    cout<<ValueOfFactorial(n,r)<<endl;
}