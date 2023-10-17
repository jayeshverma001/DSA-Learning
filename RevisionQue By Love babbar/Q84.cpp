// Insertion sort
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void InsertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int temp = arr[i];
        int j = i-1;
        for(;j>=0;j--){
            if(arr[j]>temp){
                // shifting 
                arr[j+1] = arr[j];
            }
            else{
                // Stop
                break;
            }
        }
        // copy temp value
        arr[j+1] = temp;  
    }
}

int main(){
    int n;
    cin>>n;
    int arr[] = {10,2,5,11,23,56,3};
    InsertionSort(arr,n);

    cout<<"Sorted array is ";
    

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" " ;
    }
    return 0;
}