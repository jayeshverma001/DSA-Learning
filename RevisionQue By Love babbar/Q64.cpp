// intersection of two array
#include <iostream>
#include <vector>
using namespace std;

vector<int> FindArrayIntersection(vector<int> &arr1, vector<int> &arr2) {
    int i = 0, j = 0;
    vector<int> ans;
    while (i < arr1.size() && j < arr2.size()) {
        if (arr1[i] == arr2[j]) {
            ans.push_back(arr1[i]);
            i++;
            j++;
        } else if (arr1[i] < arr2[j]) {
            i++;
        } else {
            j++;
        }
    }
    return ans;
}

int main() {
    vector<int> arr1 = {1, 2, 3, 4, 5};
    vector<int> arr2 = {2, 3, 4};

    vector<int> result = FindArrayIntersection(arr1, arr2);

    cout << "Intersection: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
