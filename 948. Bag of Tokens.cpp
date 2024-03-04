class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
        int n= tokens.size();
        int low=0,high=n-1;
        int score=0;
        while(low<=high){
            if(power>=tokens[low]){
                score++;
                power-=tokens[low];
                low++;
            }
            else{
                if(score>0 && low<high){
                    score--;
                    power+=tokens[high];
                    high--;
                }
                else{
                    return score;
                }
            }
        }
        return score;
    }
};
