// Given an integer array nums, find the contiguous subarray
// with the largest sum and return its sum.
//
// Example:
// Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
// Output: 6

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int maxSubArray(vector<int>& nums) {
    long long sum = 0;
    long long maxima = LONG_MIN;

    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];

        maxima = max(maxima, sum);

        if (sum < 0) {
            sum = 0;
        }
    }

    return maxima;
}

int main() {
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    cout << maxSubArray(nums) << endl;

    return 0;
}
