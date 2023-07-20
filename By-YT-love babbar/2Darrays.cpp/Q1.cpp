// Row wise sum
#include<iostream>
using namespace std;

// row wise sum
void printSum(int arr[][3],int row ,int col){
    cout<<"printing sum  "<<endl;
    for(int row=0;row<3;row++){
        int sum =0;
        for(int col=0;col<3;col++){
            sum += arr[row][col];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[3][3];
    cout<<"Enter the elements"<<endl;

    // input row wise
    for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){
            cin>>arr[row][col];
        }
    }
    printSum(arr,3,3);
    return 0;

}