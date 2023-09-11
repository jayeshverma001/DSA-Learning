// Pattern Problem
//   *
//  **
// ***

#include<iostream>
using namespace std;

int main()
 {
 int n;
 cin>>n;

 int i=1;
 while(i<=n){
    // printing space
    int j =1;
    while(j<=n){
        if(j<=n-i){
            cout<<" ";
        }
        else{
            cout<<"*";
        }
        j++;
    }
    cout<<endl;
    i++;
 }
return 0;
}
