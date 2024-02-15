class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        int n=nums.size();
        long long sum=0,ans=-1;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(i>=2 && sum>nums[i]){
            ans=nums[i]+sum;
            }
            sum=sum+nums[i];
        }
        return ans;
    }
};
