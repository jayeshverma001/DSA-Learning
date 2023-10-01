// Binary Search code
#include<iostream>
using namespace std;

int BinarySearchElement(int arr[],int n,int key){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while(s<=e){
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return -1;
}

int main(){

    int odd[5]={1,2,3,4,5};
    int even[6]={1,2,3,4,5,6};
    
    int evenIndex = BinarySearchElement(even,6,5);
    int oddIndex = BinarySearchElement(odd,5,4);

    cout<<"Index of 5 is "<<evenIndex<<endl;
    cout<<"Index of 4 is "<<oddIndex<<endl;

    return 0;
   
}