// Pattern Problem : 
// A
// BC
// CDE
// DEFG

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i=1;
    // char value = 'A';
    while(i<=n){
        int j=1;
        char value = 'A'+i+j-2;
        while(j<=i){
            // char value = 'A';
            cout<<value<<" ";
            value++;
            j++;
            // value++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}