#include<iostream>
using namespace std;

int func(int a){
    int num = a;
    int& ans = num;
    return ans;
}

void update2(int& n){
    n++;
}

void update1(int n){
    n++;
}
int main(){
    int n = 5;
    
    // create a ref variable
    // int& j = i;
    // cout<<i<<endl;
    // i++;
    // cout<<i<<endl;
    // j++;
    cout<<n<<endl;
    update1(n);
    cout<<"before "<<n<<endl;
    update2(n);
    cout<<"After "<<n<<endl;

    return 0;
}