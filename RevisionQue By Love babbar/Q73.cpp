// Search in a pivot in a rotated array
#include<iostream>
using namespace std;

int pivotIndex(int arr[],int n){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while(s<e){
        if(arr[mid] >= arr[0]){
                s = mid + 1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}

int BinarySearchElement(int arr[],int s,int e,int key){
    int start = s;
    int end = e;
    int mid = start + (end-start)/2;

    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end-start)/2;
    }
    return -1;
}

int TargetIndex(int arr[],int n,int key){
    int pivot = pivotIndex(arr,n);
    if(arr[pivot]<<key && key<<arr[n-1]){
        return BinarySearchElement( arr,pivot,n-1,key );
    }
    else{
        return BinarySearchElement( arr,0,pivot-1,key );
    }
}

int main(){
    int arr[5]={7,9,1,2,3};
    int n = sizeof(arr)/sizeof(int);
    int key= 2;

    // pivotIndex(arr,n);
    // BinarySearchElement(arr,s,e,key);
    cout<<" Pivot element is in a rotated array "<<TargetIndex(arr,n,2);
    return 0;

}