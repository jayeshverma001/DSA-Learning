// Q1 : Reverse a string with recursion


#include<iostream>
using namespace std;

// void reverse(string& str, int i,int j){
//     // base case
//     if(i>j)
//     return ;

//     swap(str[i],str[j]);
//     i++;
//     j--;

//     // REcursive call
//     reverse(str,i,j);
// }

// int main(){
//     string name = "babbar";

//     reverse(name,0,name.length()-1);

//     cout<<name<<endl;
//     return 0;
// }


// Q2 : Check a plaindrome in string 

// bool checkPalindrome(string str,int i,int j){
    // base case
    // if(i>j)
    // return true;

    // if(str[i] != str[j])
    // return false;
    // else{
        // Recursive call
//         return checkPalindrome(str,i+1,j-1);
//     }
// }

// int main(){
//     string name = "abba";
//     cout<<endl;
    
//     bool isPalindrome = checkPalindrome(name,0,name.length()-1);

//     if(isPalindrome){
//         cout<<"its a palindrome"<<endl;
//     }
//     else{
//         cout<<"its not a palindrome"<<endl;
//     }
//     return 0;
// }


// Q3 : a power b question through recursion a=2,b=3,a^b;

// int power(int a,int b){
//     // base case
//     if(b==0)
//     return 1;

//     if(b==1)
//     return a;

    // recursive call

    // int ans = power(a,b/2);

    // if is even
    // if(b%2 == 0){
    //     return ans * ans;
    // }
    // else{
        // if b is odd
//         return a*ans*ans;
//     }
// }

// int main(){
//     int a,b;
//     cin>>a>>b;
//     int ans = power(a,b);
//     cout<<"Answer is " <<ans<<endl;
//     return 0;
// }


// Q4 :: Bubble sort through recursion

void sortArray(int *arr, int n){
    // base case - if already sorted
    if(n==0 || n==1){
        return;
    }

    // 1 case solve kro - largest element ko end me rakh dega
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    sortArray(arr,n-1);
}

int main(){
    int arr[5] = {2,4,5,1,6};

    sortArray(arr,5);

    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}