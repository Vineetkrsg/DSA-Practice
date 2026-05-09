/*
Question:
Write a function to find the longest common prefix string
amongst an array of strings.

If there is no common prefix, return an empty string "".

Example 1:
Input: strs = ["flower","flow","flight"]
Output: "fl"

Example 2:
Input: strs = ["dog","racecar","car"]
Output: ""

Explanation:
There is no common prefix among the input strings.

Constraints:
1 <= strs.length <= 200
0 <= strs[i].length <= 200
strs[i] consists of only lowercase English letters if it is non-empty.
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Function to find longest common prefix
string longestCommonPrefix(vector<string>& strs) {

    if (strs.empty())
        return "";

    string prefix = strs[0];

    for (int i = 1; i < strs.size(); i++) {

        while (strs[i].find(prefix) != 0) {

            prefix = prefix.substr(0, prefix.length() - 1);

            if (prefix == "") {
                return "";
            }
        }
    }

    return prefix;
}

int main() {

    vector<string> strs = {"flower", "flow", "flight"};

    cout << "Longest Common Prefix: "
         << longestCommonPrefix(strs);

    return 0;
}
