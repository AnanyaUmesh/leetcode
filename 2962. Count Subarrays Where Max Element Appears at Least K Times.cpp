class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        int m = *max_element(nums.begin(), nums.end());
        int count = 0; // Count of occurrences of maximum element
        long long ans = 0; // Total count of subarrays
        
        for (int left = 0, right = 0; right < n; right++) {
            if (nums[right] == m) {
                count++;
            }
            while (count >= k) {
                ans += n - right; // All subarrays starting from right index are valid
                if (nums[left] == m) {
                    count--;
                }
                left++;
            }
        }
        
        return ans;
    }
};
