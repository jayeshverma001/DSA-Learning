// Pattern Problem : 
// AAA
// BBB
// CCC

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i=1;
    while(i<=n){
        int j=1;
        char value = 'A'+i-1;
        while(j<=n){
            cout<<value<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}
