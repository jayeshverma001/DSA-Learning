#include "bits/stdc++.h"
using namespace std;

int kthSmallest( int arr[],int n , int k ){
    sort(arr,arr+n);
    return arr[k-1];
}

int main (){
     int arr[]={1,3,5,9,7,8};
     int k=5;
     int n = sizeof arr/ sizeof arr[0];
    cout<< "kth smallest element is" <<kthSmallest(arr,n,k);
    return 0;

}
