#include "bits/stdc++.h"
using namespace std;



void sort012(int arr[],int n){
    int i = 0;
    int j = 0;
    int k = n-1;

    while (j<=k){
        if(arr[j]==1){
            j++;
        }
        else if (arr[j]==0){
            swap(arr[i],arr[j]);
            j++;
            i++;
        }
        else {
            swap(arr[k],arr[j]);
            k--;
        }
    }

}

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }

        sort012(arr, n);

        for(int i=0;i<n;i++){
            cout << arr[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

  // } Driver Code Ends