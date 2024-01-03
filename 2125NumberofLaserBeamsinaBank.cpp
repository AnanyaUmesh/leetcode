class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
    int prev=0,ans=0,count;
    for(string s :bank){
        count=0;
       for(char c: s){
        
          if(c=='1'){
              count++;
          }}
        if(count!=0){
            ans= ans+prev*count;
            prev=count;
        }
    }
   return ans;
    }
};
