#include <algorithm>  // Add this include for the max function

class Solution {
public:
    int maxAncestorDiff(TreeNode* root) {
        if (!root) {
            return 0;
        }
        int minval = root->val, maxval = root->val;
        differ(root, minval, maxval);
        return diff;
    }

private:
    int diff = 0;

    int differ(TreeNode* root, int minVal, int maxVal) {
        if (!root)
            return 0;
        // Use std::max to compare the differences
        diff = std::max(diff, std::max(abs(minVal - root->val), abs(maxVal - root->val)));
        minVal = std::min(minVal, root->val);
        maxVal = std::max(maxVal, root->val);
        // Recursively update minVal and maxVal for left and right subtrees
        differ(root->left, minVal, maxVal);
        differ(root->right, minVal, maxVal);
        return diff;  // Return the calculated diff
    }
};
