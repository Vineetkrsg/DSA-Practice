// Problem: Median of Two Sorted Arrays
//
// Given two sorted arrays nums1 and nums2 of size n and m,
// return the median of the two sorted arrays.
//
// The overall run time complexity should ideally be O(log(n + m)),
// but this solution uses a simple merge and sort approach.
//
// Example 1:
// Input:
// nums1 = [1, 3]
// nums2 = [2]
//
// Output:
// 2.0
//
// Example 2:
// Input:
// nums1 = [1, 2]
// nums2 = [3, 4]
//
// Output:
// 2.5

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    int n, m;

    cout << "Enter size of first array: ";
    cin >> n;

    vector<int> nums1(n);

    cout << "Enter elements of first sorted array: ";

    for (int i = 0; i < n; i++) {
        cin >> nums1[i];
    }

    cout << "Enter size of second array: ";
    cin >> m;

    vector<int> nums2(m);

    cout << "Enter elements of second sorted array: ";

    for (int i = 0; i < m; i++) {
        cin >> nums2[i];
    }

    vector<int> ans;

    // Merge arrays
    for (int i = 0; i < n; i++) {
        ans.push_back(nums1[i]);
    }

    for (int i = 0; i < m; i++) {
        ans.push_back(nums2[i]);
    }

    // Sort merged array
    sort(ans.begin(), ans.end());

    int size = ans.size();

    double median;

    // Find median
    if (size % 2 == 0) {

        int mid1 = ans[(size / 2) - 1];
        int mid2 = ans[size / 2];

        median = (mid1 + mid2) / 2.0;
    }
    else {

        median = ans[size / 2];
    }

    cout << "Median: " << median << endl;

    return 0;
}
