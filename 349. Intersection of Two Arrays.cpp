class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> n1set(nums1.begin(),nums1.end());
        vector<int> ans;
        unordered_set<int> result_set;
        for(int i=0;i<nums2.size();i++){
         if(n1set.count(nums2[i]) && result_set.insert(nums2[i]).second)
         {
            ans.push_back(nums2[i]);

         }
        }
        return ans;
    }
};
