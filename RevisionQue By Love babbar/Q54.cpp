// i/p-a&b
// Total number of set bits in a & b;

#include<iostream>
using namespace std;

int CountSetBits1(int a){
    int count = 0;
    while(a !=0 ){
        if(a & 1){
            count++;
        }
        a >>= 1;
    }
    return count;
}

int CountSetBits2(int b){
    int count = 0;
    while(b != 0){
        if(b & 1){
            count++;
        }
        b >>= 1;
    }
    return count;
}

int main(){
    int a,b;
    cin>>a>>b;
    int answer = CountSetBits1(a)+CountSetBits2(b);
    cout<<answer<<endl;
}