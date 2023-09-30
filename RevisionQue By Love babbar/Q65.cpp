// Pair sum
// ip-{1,2,3,4,5} , o/p--{1,4},{2,3}

#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> pairSum(vector<int> &arr, int s) {
    vector<vector<int>> ans;
    for (int i = 0; i < arr.size(); i++) {
        for (int j = i + 1; j < arr.size(); j++) {
            if (arr[i] + arr[j] == s) {
                vector<int> temp;
                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));
                ans.push_back(temp);
            }
        }
    }
    return ans;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int s = 5;

    vector<int> input(arr, arr + sizeof(arr) / sizeof(arr[0]));
    vector<vector<int>> result = pairSum(input, s);

    for (auto pair : result) {
        cout << "{" << pair[0] << ", " << pair[1] << "}" << endl;
    }
    cout << endl;

    return 0;
}
