#include<iostream>
using namespace std;

// int main(){
//     int num = 5;
//     cout << num << endl;

    // address of operator

//     cout <<"address of num is"<< &num << endl;

//     int *ptr = &num;
//     cout<<"Value is "<< *ptr <<endl;
//     cout<<"Value is "<< ptr <<endl;

//     cout<<"size of integer is "<< sizeof(num) <<endl;
//     cout<<"size of  pointer is "<< sizeof(ptr) <<endl;

//     return 0;
// }

// int main(){
    // pointer to int is created , and pointing to some garbage value address
    // int *p;
    // cout<<*p<<endl;
    // return 0;
    // int num =5;
    // int a =num;
    // a++;

    // cout <<num <<endl;

    // int *p  = &num;
    // cout<<"before"<< num<<endl;
    // (*p)++;
    // cout<<"after"<< num<<endl;

    // copying a pointer
    // int *q = p;
    // cout << p <<"-"<< q << endl;
    // cout << *p <<"-"<< *q << endl;

    // int arr[10] = {1,3,5};
    
    // cout<<"Address of first memory block is"<<arr<<endl;
    // cout<<"Address of first memory block is"<<&arr[0 ]<<endl;
    // cout<<"1st "<< *arr<<endl;
    // cout<<"Adding "<< *arr + 1 <<endl;
    // cout<<"2nd "<< *(arr+1)<<endl;
    // cout<<"2nd "<< *(arr+2)<<endl;

    // int i=2;
    // cout<<i[arr]<<endl;

    // int temp[10];
    // cout << sizeof(temp)<<endl;
    // int *ptr = &temp[0];
    // cout<<sizeof(temp);
     
    // cout<<sizeof(ptr);
    // cout<<sizeof(*ptr);
    // cout<<sizeof(&ptr);

//     int arr[5] = {1,2,3,4,5};
//     char ch[6] = "abcde";

//     cout<<arr<<endl;

//     cout<<ch<<endl;

//     char *c = &ch[0];

//     // printing entire string
//     cout << c << endl;



//     return 0;  

// }

void print(int *p){
    cout<<*p <<endl;
}

void update(int *p){
    // p = p+1;
    *p = *p +1;
}

int main(){
    int value = 5;
    int *p = &value;

    cout<<"Before"<<*p<<endl;
    update(p);
    cout<<"after "<<*p<<endl;

    // getsum function using part of array passing for the problems
    return 0;
}