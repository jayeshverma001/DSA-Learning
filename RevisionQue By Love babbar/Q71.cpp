// find peak index in a mountain array

#include<iostream>
using namespace std;

int peakIndex(int arr[],int n){
    int i = 0;
    int mid = n/2;
    int ans = -1;
    while(i<=n-1){
        if(arr[i-1]<arr[mid] && arr[mid]>arr[i+1]){
            ans = mid;
            return ans;
        }
        else if(arr[i-1]<arr[mid]){
            i = mid +1;
        }
        else{
            n = mid - 1;
        }
    }
    return ans;
}

int main(){
    int arr[4]= {3,4,5,1};
    int n = sizeof(arr)/sizeof(int);
    
    cout<<" Peak index of the array "<<peakIndex(arr,n)<<endl;
    return 0;
}