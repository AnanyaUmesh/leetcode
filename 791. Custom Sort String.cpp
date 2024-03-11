class Solution {
public:
    string customSortString(string order, string s) {
        sort(s.begin(),s.end(), [order](char c1, char c2){
            return order.find(c1)< order.find(c2);
        });
        return s;
    }
};

class Solution {
    public:
    string customSortString(string order, string s) {
        // Create a frequency table
        unordered_map<char, int> freq;

        // Initialize frequencies of letters
        // freq[c] = frequency of char c in s
        for (char letter : s) {
            freq[letter]++;
        }

        // Iterate order string to append to result
        string result = "";
        for (char letter : order) {
            while (freq[letter]-- > 0) {
                result += letter;
            }
        }

        // Iterate through freq and append remaining letters
        // This is necessary because some letters may not appear in `order`
        for (auto & [letter, count] : freq) { 
            while (count-- > 0) {
                result += letter;
            }
        }

        // Return the result
        return result;
    }
};
