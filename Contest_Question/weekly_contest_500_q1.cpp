// Problem: Count Opposite Parity
//
// You are given an integer array nums of length n.
//
// The score of an index i is defined as the number of indices j such that:
// - i < j < n
// - nums[i] and nums[j] have different parity
//   (one is even and the other is odd)
//
// Return an array answer where answer[i] is the score of index i.
//
// Example:
// Input:  [1, 2, 3, 4]
// Output: [2, 1, 1, 0]

#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n;

    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter array elements: ";

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> answer(n, 0);

    for (int i = 0; i < n; i++) {

        for (int j = i + 1; j < n; j++) {

            // Check for opposite parity
            if ((nums[i] % 2) != (nums[j] % 2)) {
                answer[i]++;
            }
        }
    }

    cout << "Answer array: ";

    for (int i = 0; i < n; i++) {
        cout << answer[i] << " ";
    }

    return 0;
}
