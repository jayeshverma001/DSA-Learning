// Triplet sum
// ip--{1,2,3,4,5},s=12
// op--{3,4,5}

#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> tripletSum(vector<int> &arr, int s) {
    vector<vector<int>> ans;
    int n = arr.size();
    
    // Sort the array to make it easier to find triplets
    sort(arr.begin(), arr.end());

    for (int i = 0; i < n - 2; i++) {
        int left = i + 1;
        int right = n - 1;

        while (left < right) {
            int currentSum = arr[i] + arr[left] + arr[right];
            if (currentSum == s) {
                vector<int> temp;
                temp.push_back(arr[i]);
                temp.push_back(arr[left]);
                temp.push_back(arr[right]);
                ans.push_back(temp);

                // Move the left and right pointers to find more triplets
                left++;
                right--;
            } else if (currentSum < s) {
                left++;
            } else {
                right--;
            }
        }
    }
    return ans;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int s = 12;

    vector<int> input(arr, arr + sizeof(arr) / sizeof(arr[0]));
    vector<vector<int>> result = tripletSum(input, s);

    for (auto triplet : result) {
        cout << "{" << triplet[0] << ", " << triplet[1] << ", " << triplet[2] << "}" << endl;
    }
    cout << endl;

    return 0;
}
