#include <unordered_set>
#include <vector>

class Solution {
public:
    int getCommon(std::vector<int>& nums1, std::vector<int>& nums2) {
        std::unordered_set<int> nums1_set(nums1.begin(), nums1.end());

        for (int i = 0; i < nums2.size(); ++i) {
            if (nums1_set.count(nums2[i])) {
                return nums2[i];
            }
        }

        return -1;
    }
};
