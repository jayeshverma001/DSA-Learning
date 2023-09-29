// Leetcode:1207 -- Find unique number of occerance
// C++ code for the above approach

// // RE try it its gfg copy code
// #include <bits/stdc++.h>
// using namespace std;
 
// // Function to check whether the
// // frequency of elements in array
// // is unique or not.
// bool checkUniqueFrequency(int arr[], int n)
// {
 
//     vector<int> frequency(n + 1);
 
//     // For counting the frequency of each element
//     for (int i = 1; i <= n; i++) {
//         for (int j = 0; j < n; j++) {
//             if (arr[j] == i) {
//                 frequency[i - 1]++;
//             }
//         }
//     }
 
//     // Checking if frequency array contains any duplicate
//     // or not
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             if (i == j || frequency[i] == 0)
//                 continue;
//             if (frequency[i] == frequency[j]) {
 
//                 // If any duplicate frequency then return
//                 // false
//                 return false;
//             }
//         }
//     }
 
//     // If no duplicate frequency found, then return true
//     return true;
// }
 
// // Driver Code
// int main()
// {
//     // Given array arr[]
//     int arr[] = { 2, 2, 5, 10, 1, 2, 10, 5, 10, 2 };
//     int n = sizeof arr / sizeof arr[0];
 
//     // Function Call
//     bool res = checkUniqueFrequency(arr, n);
 
//     // Print the result
//     if (res)
//         cout << "Yes" << endl;
//     else
//         cout << "No" << endl;
//     return 0;
// }

// One more way
#include <bits/stdc++.h>
using namespace std;

bool uniqueOccurences(int arr[],int n){
    int ans = 0;
    sort(arr.begin(),arr.end());
    int i = 0;
    while(i<n){
        int count = 1;
        for(int j =i+1;j<n;j++){
            if(arr[i]==arr[j])
            count++;
        }
        ans.push_back(count);
        i = i + count;
    }

    sort(ans.begin(),ans.end());
    for(int i = 0;i<n;i++){
        if(ans[i]==ans[i+1])
        return false;
    }
    return true;
}


int main(){
    int arr[] = {1,1,2,3,4,3};
    int n;
    cin>>n;

    cout<<uniqueOccurences<<endl;

}