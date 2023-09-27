// Find unique element in a array
#include<iostream>
using namespace std;



int UniqueElement(int arr[],int n){
    int ans = 0;
    for(int i=0;i<n;i++){
        ans = ans^arr[i];
        }
        return ans;
    }

int main(){
int arr[5]={1,2,3,2,3};

cout<<UniqueElement(arr,5)<<endl;


return 0;
}
