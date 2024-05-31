class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int, int> count;
        for (int num : nums) {
            count[num]++;
        }
        
        vector<int> ans;
        for (const auto& pair : count) {
            if (pair.second == 1) {
                ans.push_back(pair.first);
            }
        }
        
        return ans;
    }
};
