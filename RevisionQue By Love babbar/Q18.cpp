// Pattern Problem : 
// 1
// 23
// 456
// 78910


#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i=1;
    int count =1;
    while(i<=n){
        int j=1;
        while(j<=i){
            // cout<<endl;
            cout<<count;
            // cout<<endl;
            j++;
            // cout<<endl;
            count++;
            // cout<<endl;
        }
        cout<<endl;
        // count++;
        i++;
        // count++;
        // cout<<endl;
    }
    return 0;
}