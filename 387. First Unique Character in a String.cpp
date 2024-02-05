class Solution {
public:
    int firstUniqChar(string s) {
       int n = s.size();
        vector<int> count(26, 0);  // Fix: Initialize count array with size 26 for each alphabet

        for (int i = 0; i < n; i++) {
            count[s[i] - 'a']++;  // Fix: Use 'a' as the base to convert the character to an index
        }

        for (int i = 0; i < n; i++) {
            if (count[s[i] - 'a'] == 1) {
                return i;
            }
        }

        return -1;
    }
};
