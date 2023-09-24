// Sum of array
// i/p--n
// i/p--array elements   o/p--sum of all array element

#include<iostream>
using namespace std;

int SumOfArray(int arr[],int n){
    int sum =0;
    for(int i=0;i<n;i++){
        sum = sum + arr[i];
    }
    return sum;
}

int main(){
    int arr[10], n;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Sum of array "<<SumOfArray(arr,n)<<endl;
}