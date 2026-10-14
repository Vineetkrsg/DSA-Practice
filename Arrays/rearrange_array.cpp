// Given an even-length integer array nums containing an equal
// number of positive and negative integers, rearrange the array
// so that consecutive elements have opposite signs, starting
// with a positive integer. Preserve the relative order of
// positive elements and negative elements.
//
// Example:
// Input: nums = [3, 1, -2, -5, 2, -4]
// Output: [3, -2, 1, -5, 2, -4]

#include <iostream>
#include <vector>
using namespace std;

vector<int> rearrangeArray(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(n, 0);
    int pos = 0, neg = 1;

    for (int i = 0; i < n; i++) {
        if (nums[i] < 0) {
            ans[neg] = nums[i];
            neg += 2;
        } else {
            ans[pos] = nums[i];
            pos += 2;
        }
    }

    return ans;
}

int main() {
    vector<int> nums = {3, 1, -2, -5, 2, -4};

    vector<int> ans = rearrangeArray(nums);

    for (int num : ans) {
        cout << num << " ";
    }

    cout << endl;

    return 0;
}
