// Reverse the aarray

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void ReverseArray(int arr[],int n){
    int start =0;
    int end = n-1;

        while(start<=end){
            swap(arr[start],arr[end]);
            start++;
            end--;
        }
}


void PrintArray(int arr[],int n){
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[]={1,2,3,4,5};
    int n;
    cin>>n;

    PrintArray(arr,n);
    ReverseArray(arr,n);
    PrintArray(arr,n);
    return 0;
}