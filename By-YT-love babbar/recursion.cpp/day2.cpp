// Question 2
// count ways to reach the N-th stairs -- codestudio 
// #include <bits/stdc++.h> 
// int countDistinctWays(int nStairs) {
    //  Write your code here.
    // TLE exceeding code
    // base case
//     if(nStairs<0)
//     return 0;

//     if(nStairs==0)
//     return 1;

//     // Recursice call func
//     int ans = countDistinctWays(nStairs-1)+countDistinctWays(nStairs-2);
//     return ans;
// }

// Question 1 
// print the fibonacci series by recursion -- leetcode 501
// class Solution {
// public:
//     int fib(int n) {
//         // base case 
//         if(n==0)
//         return 0;
//         if(n==1)
//         return 1;

//         int ans = fib(n-1)+fib(n-2);
//         return ans;
//     }
// };

// say digit 
#include<iostream>
using namespace std;

void sayDigit(int n,string arr[]){
    // base case
    if(n==0)
    return ;
    
    // processing
    int digit = n%10;
    n = n/10;

    // recursive call
    sayDigit(n,arr);
    cout<<arr[digit]<<" ";
}

int main(){
    string arr[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    
    int n;
    cin>>n;

    cout<<endl<<endl;
    sayDigit(n,arr);
    cout<<endl<<endl;
}