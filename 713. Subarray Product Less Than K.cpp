class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1){
            return 0;
        }
      int totalcount=0,product=1;
        int left=0,right=0;
        for(right=0;right<nums.size();right++){
            product*=nums[right];
            while(product>=k){
                product/=nums[left];
                left+=1;
            }
            totalcount+=right-left+1;
        }
        return totalcount;
    }
};
