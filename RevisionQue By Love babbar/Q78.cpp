// Cows aggression problem

#include <iostream>
#include <algorithm>
using namespace std;

bool isPossible(int arr[], int k, int mid, int n) {
    int cowCount = 1;
    int lastPos = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] - lastPos >= mid) {
            cowCount++;
            lastPos = arr[i];
        }
    }
    return cowCount >= k;
}

int aggressivecows(int arr[], int k, int n) {
    sort(arr, arr + n);

    int s = 0;
    int e = arr[n - 1] - arr[0];
    int ans = -1;

    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (isPossible(arr, k, mid, n)) {
            ans = mid;
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }
    return ans;
}

int main() {
    int arr[5] = {1, 2, 3, 4, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;
    cout << aggressivecows(arr, k, n) << endl;
    return 0;
}
