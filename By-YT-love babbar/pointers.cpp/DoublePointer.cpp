#include<iostream>
using namespace std;

void update(int **p){
    // kch=change hoga - No
    // p = p+1;

    // kuch change hoga-yes
    // *p = *p +1; 

    // kuch change hoga-yes
    **p = **p +1;
}

int main(){
    int i = 5;
    int* p = &i;
    int** p2 = &p;

    // cout << " sab shi chal rha h" << endl;
    
    // printing value of p
    // cout<<"printing P" << p<<endl;
    // cout<<*p2<<endl;


    // printing value of i
    // cout<<i<<endl;
    // cout<< *p<<endl;
    // cout<< **p2<<endl;

    // printing address of i
    // cout<<&i<<endl;
    // cout<<p<<endl;
    // cout<<*p2<<endl;
    
    // printing address of p
//     cout<<&p<<endl;
//     cout<<p2<<endl;

    cout<<endl;
    cout<<"before"<<i<<endl;
    cout<<"before"<<p<<endl;
    cout<<"before"<<p2<<endl;

    update(p2);
    cout<<"After"<<i<<endl;
    cout<<"After"<<p<<endl;
    cout<<"After"<<p2<<endl;


    return 0;

}