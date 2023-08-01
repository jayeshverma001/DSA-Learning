// Q1 : check array sorted or not through recursion

#include<iostream>
using namespace std;

// bool isSorted(int *arr, int size){
    // base case
//     if(size == 0 || size == 1){
//         return true;
//     }
//     if(arr[0]>arr[1])
//     return false;
//     else{
//         bool remainingPart = isSorted(arr+1,size - 1);
//         return remainingPart;
//     }
// }


// int main(){
//     int arr[5] = {2,4,6,8,9};
//     int size = 5;
//     bool ans = isSorted(arr,size);

//     if(ans){
//         cout<<"Array is sorted"<<endl;
//     }
//     else{
//         cout<<"Array is not sorted"<<endl;  
//     }
//     return 0;

// }


// Q2 : find the sum of array through recursion

// int getSum(int *arr,int size){
    // base case
//     if(size == 0){
//         return 0;
//     }
//     if(size == 1){
//         return arr[0];
//     }
//     int remainingPart = getSum(arr+1,size-1);
//     int sum = arr[0] + remainingPart;
//     return sum;
// }

// int main(){
//     int arr[5] = {2,4,9,9,9};
//     int size = 5;

//     int sum = getSum(arr,size);
//     cout<<"Sum is "<<sum <<endl;
//     return 0;
// }

// Q3 : Search a element through linear search in a array

// bool linearSearch(int arr[],int size,int k){
    // bse case
//     if(size == 0)
//     return false;

//     if(arr[0] == k){
//         return true;
//     }
//     else{
//         bool remainingPart = linearSearch(arr+1,size-1,k);
//         return remainingPart;
//     }
// }

// int main(){
//     int arr[5] = {2,3,4,5,6};
//     int size = 5;
//     int key = 4;
//     bool ans = linearSearch(arr,size,key);
    
//     if(ans){
//         cout<<"Present"<<endl;
//     }
//     else{
//         cout<<"absent"<<endl;
//     }
//     return 0;
// }

// Q4 : Search a element through binearsearch

bool binearsearch(int *arr,int s,int e, int k){
    // base case
    // element not found
    if(s>e)
    return false;

    int mid = s +(e-s)/2;

    // element found

    if(arr[mid] == k)
    return true;

    if(arr[mid] < k){
        return binearsearch(arr,mid+1,e,k);
    }
    else{
        return binearsearch(arr,s,mid-1,k);
    }
}

int main(){
    int arr[5] = {2,3,4,5,6};
    int size = 5;
    int key = 4;

    cout<<"Presnet or not "<<binearsearch(arr,0,4,key)<< endl;
    return 0;
}