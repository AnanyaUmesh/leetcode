class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;
       unordered_map<int,int> freq;
        for(int num: nums){
            freq[num]++;
        }
        for(auto pair: freq){
            if(pair.second>1){
                ans.push_back(pair.first);
            }
        }
        return ans;
    }
};
