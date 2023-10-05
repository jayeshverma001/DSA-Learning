// finding square root value with decimals
#include<iostream>
using namespace std;

int BinarySearchSqrt(int n){
    int s = 0;
    int e = n-1;
    long long int mid = s + (e-s)/2;

    long long int ans = -1;
    while(s<=e){
        int square = mid*mid;
        if(square==n){
            return mid;
        }
        if(square<n){
            ans = mid;
            s = mid+1;
        }
        else{
            e = mid-1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

double MorePrecision(int n,int precision,int tempsol){
    double factor = 1;
    double ans = tempsol;

    for(int i=0;i<precision;i++){
        factor = factor/10;
        for(double j =ans;j*j<n;j=j+factor){
            ans = j;
        }
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    // cout<<"Integer type solution "<<BinarySearchSqrt(n)<<endl;
    int tempsol = BinarySearchSqrt(n);
    cout<<"More precision Solution "<<MorePrecision(n,3,tempsol)<<endl;
    return 0;
}