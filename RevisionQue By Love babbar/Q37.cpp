// Pattern Problem
//1234554321
//1234**4321
//123****321
//12******21
//1********1

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;

        // printing first number triangle
        while(j<=n-i+1){
            cout<<j;
            j++;
        }

        // Printing first star triangle
        int star1 = i-1;
        while(star1){
            cout<<"*";
            star1--;
        }

        // printing second star triangle
        int star2 = i-1;
        while(star2){
            cout<<"*";
            star2--;
        }

        // printing second number triangle
        int start = j-1;
        while(start){
            cout<<start;
            start--;
        }


        cout<<endl;
        i++;
    }
    return 0;
}