// Swap alternatives in a  array with even & odd elements
#include<iostream>
using namespace std;

void PrintArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void Alternate(int arr[],int n){
    for(int i=0;i<n;i+=2){
        if(i+1<n){
            swap(arr[i],arr[i+1]);
        }
    }
}

int main(){
int odd[5] = {1,2,3,4,5};
int even[6] = {6,5,4,3,2,1};


Alternate(odd,5);
PrintArray(odd,5);


Alternate(even,6);
PrintArray(even,6);

return 0;
}