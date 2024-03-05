class Solution {
public:
    int minimumLength(string s) {
        int n=s.length();
        int begin=0;
        int end=n-1;
        //for(int i=0;i<n;i++)
        while(begin<end && s[begin]==s[end])
        {
            char c=s[begin];
            while(begin<=end && s[begin]==c){
                begin++;
            }
            while(end>begin && s[end]==c){
                end--;
            }
                
        }
        return end-begin+1;
    }
};
