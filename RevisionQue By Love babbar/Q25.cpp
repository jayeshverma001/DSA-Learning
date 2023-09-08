// Pattern Problem : 
// A
// BB
// CCC

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i=1;
    // char value = 'A'+i+j-2;
    while(i<=n){
        int j=1;
        while(j<=i){
            char value = 'A'+i-1;
            cout<<value<<" ";
            value++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}