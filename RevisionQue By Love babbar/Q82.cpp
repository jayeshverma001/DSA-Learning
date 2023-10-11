// Bubble sort Problem
#include<iostream>
using namespace std;

int BubbleSort(int arr[],int n){
    for(int i=1;i<n;i++){
        bool swapped = false;
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false){
            break;
        }
    }
}

int main(){
    int n;
    cin>>n;
    int arr[]={2,6,16,22,15,98,14,56};
    BubbleSort(arr, n);

    cout << "Bubble sorting result is: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}