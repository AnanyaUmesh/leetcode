class Solution {
public:
    
    int maxsum(vector<int>& arr,int k,int dp[],int start){
        int n=arr.size();
        if(start>=n){
            return 0;
        }
        if(dp[start]!=-1){
            return dp[start];
        }
        int currmax=0,ans=0;
        int end=min(n,start+k);
        for(int i=start;i<end;i++){
            currmax=max(currmax,arr[i]);
            ans=max(ans,currmax*(i-start+1)+maxsum(arr,k,dp,i+1));
        }
        return dp[start]=ans;
    }
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
         int dp[arr.size()];
        memset(dp, -1, sizeof(dp));
      return maxsum(arr,k,dp,0);
    }
};
