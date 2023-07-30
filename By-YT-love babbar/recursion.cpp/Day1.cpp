#include<iostream>
using namespace std;

// factorial example
// int factorial(int n){
    // base case
//     if(n==0)
//         return 1;

//     int chottipbm = factorial(n-1);
//     int badipbm = n*chottipbm;
//     return badipbm;

// }

// int main(){
//     int n;
//     cin>>n;
//     int ans = factorial(n);
//     cout<<ans<<endl;
//     return 0;
// }


// 2^n example
// int power(int n){
//   base case 
//     if(n==0)
//     return 1;

//     int smallpbm = power(n-1);
//     int bigpbm = 2 * smallpbm;
//     return bigpbm;
// }

// int main(){
//     int n;
//     cin>>n;

//     int ans = power(n);
//     cout<<ans <<endl;
//     return 0;
// }

// print counting
void print(int n){
    // base case 
    if(n==0)
    return ;

    cout<< n <<endl;
    print(n-1);
}

int main(){
    int n;
    cin>>n;

    print(n);
    return 0;
}