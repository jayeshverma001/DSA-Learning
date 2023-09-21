// Negative Number to Binary
#include<iostream>
#include <math.h>
using namespace std;

void print_binary(int num){
    int result =0;

    int place_value = 1;
    while(!(num==0 | num == -1)){
        int bit = num& 1;
        result += bit*place_value;
        num = num>>1;
        place_value *= 10;
    }
    cout<<result<<endl;
}



int main(){
    int number = -6;
    int neg_number = ~number+1;

    print_binary(number);
    print_binary(neg_number);
}