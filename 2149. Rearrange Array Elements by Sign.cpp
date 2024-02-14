class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        int k = 0, l = 0;
        vector<int> neg, pos, ans;

        for (int i = 0; i < n; i++) {
            if (nums[i] > 0) {
                pos.push_back(nums[i]);
            } else {
                neg.push_back(nums[i]);
            }
        }

        ans.resize(n);
        for (int i = 0, j = 0; i < n; i += 2) {
            ans[i] = pos[j];
            ans[i + 1] = neg[j];
            j++;
        }

        return ans;
    }
};
