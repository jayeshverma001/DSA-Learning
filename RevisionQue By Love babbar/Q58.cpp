// Linear search code

#include<iostream>
using namespace std;

int LinearSearchFunc(int arr[],int n,int key){

    for(int i=0;i<n;i++){
        while(arr[i]==key){
            return i;
            
        }
    }
    return -1;
}

int main(){
    int arr[10],n;
    cin>>n;
    int key = 4;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Value of key element "<<LinearSearchFunc(arr,n,key)<<endl;
}