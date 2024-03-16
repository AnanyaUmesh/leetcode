#include <vector>
#include <unordered_map>
#include <algorithm>

class Solution {
public:
    int findMaxLength(std::vector<int>& nums) {
        int maxLength = 0;
        int count = 0;
        std::unordered_map<int, int> countMap; // Map to store cumulative count vs index

        // Initialize map with base case
        countMap[0] = -1;

        for (int i = 0; i < nums.size(); ++i) {
            // If current element is 0, decrement count; otherwise, increment count
            count += (nums[i] == 0) ? -1 : 1;

            // If count is seen before, update maxLength if current subarray length is greater
            if (countMap.find(count) != countMap.end()) {
                maxLength = std::max(maxLength, i - countMap[count]);
            } else {
                // Otherwise, store the current count with its index
                countMap[count] = i;
            }
        }

        return maxLength;
    }
};
