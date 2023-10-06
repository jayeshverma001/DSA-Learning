// Painter partition problem
#include<iostream>
using namespace std;

bool isPossible(int arr[],int n,int m ,int mid){
    int PainterCount = 1;
    int WorkUnit = 0;

    for(int i=0;i<n;i++){
        if(WorkUnit + arr[i] <= mid){
            WorkUnit +=arr[i];
        }
        else{
            PainterCount++;
            if(PainterCount>m || arr[i]>mid){
                return false;
            }
            WorkUnit = arr[i];
        }
    }
    return true;
}

int allocatework(int arr[],int n,int m){
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
            ans = mid ;
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
         mid = s + (e-s)/2;
    }
    return ans;
}

int main(){
    int m=2,n=4;
    int arr[4]= {10,20,30,40};
    
    cout<<allocatework(arr,4,2)<<endl;
    return 0;
}