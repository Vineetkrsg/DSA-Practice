// Problem: Subarray Sum Equals K
// Given an integer array nums and an integer k, find the total
// number of non-empty contiguous subarrays whose sum equals k.
//
// Example:
// Input: nums = [1, 1, 1], k = 2
// Output: 2
//
// Approach: Use prefix sums and a hash map to count
// subarrays whose sum equals k.

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int subarraySum(vector<int>& nums, int k) {
    unordered_map<long long, int> freq;
    long long prefixSum = 0;
    int count = 0;

    freq[0] = 1;

    for (int num : nums) {
        prefixSum += num;

        long long required = prefixSum - k;

        if (freq.find(required) != freq.end()) {
            count += freq[required];
        }

        freq[prefixSum]++;
    }

    return count;
}

int main() {
    vector<int> nums = {1, 1, 1};
    int k = 2;

    cout << subarraySum(nums, k) << endl;

    return 0;
}
