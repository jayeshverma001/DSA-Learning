// Leetcode:7-- Reverce a integer
// Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

#include<iostream>
using namespace std;



int main(){
    int i=0,rev=0;
    cin>>i;

    while(i>0){
        rev=(rev*10)+(i%10);
        i=i/10;
    }
    cout<<rev;

    return 0;
}