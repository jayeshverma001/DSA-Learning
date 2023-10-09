// Selection sort code
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void SelectionSort(int arr[], int n){
    for(int i = 0; i < n; i++){
        int minIndex = i;
        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}

int main(){
    int n;
    cin >> n;
    int arr[] = {64, 35, 22, 11, 10};

    SelectionSort(arr, n);

    // Output the sorted array
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
