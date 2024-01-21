class Solution {
public:
    int sumSubarrayMins(std::vector<int>& arr) {
        const int mod = 1e9 + 7;
        int n = arr.size();
        std::stack<int> s;
        std::vector<int> left(n, -1), right(n, n);

        // Calculate left boundaries
        for (int i = 0; i < n; ++i) {
            while (!s.empty() && arr[s.top()] >= arr[i]) {
                s.pop();
            }
            if (!s.empty()) {
                left[i] = s.top();
            }
            s.push(i);
        }

        // Clear the stack for re-use
        while (!s.empty()) {
            s.pop();
        }

        // Calculate right boundaries
        for (int i = n - 1; i >= 0; --i) {
            while (!s.empty() && arr[s.top()] > arr[i]) {
                s.pop();
            }
            if (!s.empty()) {
                right[i] = s.top();
            }
            s.push(i);
        }

        // Calculate the sum of minimum values
        long long answer = 0;
        for (int i = 0; i < n; ++i) {
            answer += static_cast<long long>(i - left[i]) * (right[i] - i) % mod * arr[i] % mod;
            answer %= mod;
        }

        return static_cast<int>(answer);
    }
};
