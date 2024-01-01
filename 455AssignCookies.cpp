class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
     int n = g.size();
        int m = s.size();
        int count = 0;

        std::sort(g.begin(), g.end());
        std::sort(s.begin(), s.end());

        for (int i = 0, j = 0; i < n && j < m; ++i, ++j) {
            // Find the smallest cookie that can satisfy the current child
            while (j < m && g[i] > s[j]) {
                ++j;
            }

            // If a suitable cookie is found, increment the count
            if (j < m) {
                ++count;
            }
        }

        return count;
    }
};
