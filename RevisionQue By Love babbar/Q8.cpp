// Sum of all odd numbers upto n...

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int sum=0 , count=1;
    while(count<=n){
    if(count%2!=0){
        sum=sum+count;
    }
    count++;
    }
    cout<<sum<<endl;
    return 0;
}