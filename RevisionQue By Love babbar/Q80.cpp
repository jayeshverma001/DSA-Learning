// party SPOJ problem
// do  it agian not completed
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

bool isPossible(int arr[],int n,int m,int mid){
     int dishes=0;        
    for(int i=0;i<n;i++){
               int tsum=0;       
                for(int j=1;tsum<=mid;j++){      
                    tsum=tsum+arr[i]*j;        
                    dishes++;  
                    if(tsum>mid){              
                      dishes--;} 
                    if(dishes>=m){              
                      return true;}   
                   }   
                 }   
                return false;
}

int MinCookTime(int arr[],int n,int m){
    int s = 0;
    int sum = 0;

    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    int e = sum;
    int ans = -1;
    int mid = s + (e-s)/2;

    while(s<=e){
        if(isPossible(arr,n,m,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int main(){
    int arr[]={1,2,3,4};
    int n = 4;
    int m=11;

    cout<<MinCookTime(arr,n,m)<<endl;
}