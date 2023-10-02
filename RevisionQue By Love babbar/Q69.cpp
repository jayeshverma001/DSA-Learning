// first and last position of an element in sorted array
#include<iostream>
#include<vector>
using namespace std;

int firstOcc(int arr[], int n, int key) {

    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e) {

        if(arr[mid] == key){
            ans = mid;
            e = mid - 1;
        }
        else if(key > arr[mid]) { 
            s = mid + 1;
        }
        else{//left me jao
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}

int lastOcc(int arr[], int n, int key) {

    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e) {

        if(arr[mid] == key){
            ans = mid;
            s = mid + 1;
        }
        else if(key > arr[mid]) {//Right me jao
            s = mid + 1;
        }
        else{//left me jao
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}



int main(){
    int arr[5] = {1,2,3,3,5};
    int n = sizeof(arr) / sizeof(int);
    int key = 3 ;
    cout<< " first occurence is "<<firstOcc(arr,n,key)<<endl;
    cout<< " last occurence is "<<lastOcc(arr,n,key)<<endl;
    return 0;
}