#include <vector>
#include <algorithm>

class Solution {
public:
    int findLeastNumOfUniqueInts(std::vector<int>& arr, int k) {
        int n = arr.size();
        int count2 = 0;

        // Sorting the array
        std::sort(arr.begin(), arr.end());

        std::vector<int> count;

        for (int i = 0; i < n; ) {
            int current = arr[i];
            int freq = 0;

            while (i < n && arr[i] == current) {
                freq++;
                i++;
            }

            count.push_back(freq);
        }

        // Sorting the frequency count
        std::sort(count.begin(), count.end());

        for (int l = 0; l < count.size() && k > 0; l++) {
            while (k > 0 && count[l] > 0) {
                count[l]--;
                k--;
            }
        }

        for (int i = 0; i < count.size(); i++) {
            if (count[i] > 0) {
                count2++;
            }
        }

        return count2;
    }
};
