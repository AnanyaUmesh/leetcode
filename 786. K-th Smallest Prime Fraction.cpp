#include <vector>
#include <algorithm>

class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        int n = arr.size();
        vector<float> ans;
        
        // Generate all possible fractions and store them
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                ans.push_back((float)arr[i] / arr[j]);
            }
        }
        
        // Sort the fractions
        sort(ans.begin(), ans.end());
        
        // Get the kth smallest fraction
        float m = ans[k - 1];
        
        //Convert the fraction back to numerator and denominator
        int numerator = 0, denominator = 0;
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                if ((float)arr[i] / arr[j] == m) {
                    numerator = arr[i];
                    denominator = arr[j];
                    break;
                }
            }
            if (numerator != 0) break;
        }
        
        // Return the kth smallest fraction as a vector
        return {numerator, denominator};
    }
};
