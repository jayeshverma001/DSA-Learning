// Pattern Problem : 
// ABC
// ABC
// ABC

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i=1;
    while(i<=n){
        int j=1;
        char value = 'A'+j-1;
        while(j<=n){
            cout<<value<<" ";
            value++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}
