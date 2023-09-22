// Make a code for pow(a,b) using functions

#include<iostream>
#include<math.h>
using namespace std;

int Power(int a, int b){
    int ans = 1;
    for(int i=1;i<=b;i++){
        ans = ans * a;
    }
    return ans;
}

int main(){
    int a,b;
    cin>>a>>b;

    // direct way
    // int c = pow(a,b);
    // cout<<"The value of Pow(a,b) is "<< c <<endl;

    int answer = Power(a,b);
    cout<<"The value power(a,b) "<<answer<<endl;
    return 0;
}