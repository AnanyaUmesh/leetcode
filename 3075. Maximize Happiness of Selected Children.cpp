/*class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
       int n=happiness.size();
       std::sort(happiness.begin(), happiness.end(), std::greater<int>());
        int p=0;
        long long int sum=0;
        while(k>0){
            sum=sum+happiness[p];
            for(int i=0;i<n;i++){
                happiness[i]=happiness[i]-1;
                if(happiness[i]<0){
                happiness[i]=0;
                }}
            k--;
            p++;
        }
        return sum;
    }
};

*/
class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        // Sort in descending order
        sort(happiness.begin(), happiness.end(), greater<int>());
        
        long long totalHappinessSum = 0;
        int turns = 0;
        
        // Calculate the maximum happiness sum
        for(int i = 0; i < k; i++) {
            // Adjust happiness and ensure it's not negative
            totalHappinessSum += max(happiness[i] - turns, 0);  

            // Increment turns for the next iteration
            turns++; 
        }
        
        return totalHappinessSum;
    }
};
