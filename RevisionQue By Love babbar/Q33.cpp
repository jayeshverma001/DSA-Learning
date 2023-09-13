// Pattern Problem
//    1
//   22
//  333
// 4444

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=0 ;
    
    // int count =1;
    while(i<n){
        int k=0;
        while(k<i+1){
            cout<<" ";
            k++;
        }
        int j=i+1;
        // int count =1;
        while(j<=n){
            cout<<j;
            // count++;
            j++;
        }
        cout<<endl;
        i++;
    }

    
    return 0;
}