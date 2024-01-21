class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) {
            return 0;
        } else if (n == 1) {
            return nums[0];
        }

        long int sum1 = 0, sum2 = 0;

        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                sum1 = max(sum1 + nums[i], sum2);
            } else {
                sum2 = max(sum2 + nums[i], sum1);
            }
        }

        return max(sum1, sum2);
    }
};
