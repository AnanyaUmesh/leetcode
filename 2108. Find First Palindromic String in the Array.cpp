class Solution {
public:
    string firstPalindrome(vector<string>& words) {
     int n=words.size();
        for(string s: words){
        string d=s;
            reverse(d.begin(),d.end());
            if(s==d){
                return s;
            }
        }
        return "";
    }
};
