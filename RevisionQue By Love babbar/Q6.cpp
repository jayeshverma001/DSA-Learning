// sum 1 to N...
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int sum=0 , count=1;
    while(count<=n){
        sum=sum+count;
        count++;
    }
    cout<<sum<<endl;
    return 0;
}