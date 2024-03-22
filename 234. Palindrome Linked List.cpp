class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if (!head || !head->next)
            return true; // Empty list or single node list is considered palindrome
        
        int count = 0;
        vector<int> arr;
        ListNode* first = head;
        
        // Traverse the linked list and store elements in the vector
        while (first != nullptr) {
            arr.push_back(first->val);
            first = first->next;
            count++;
        }
        
        vector<int> pal(count); // Resize pal to avoid out of bounds access
        
        // Populate pal vector in reverse order
        for (int i = 0; i < count; i++) {
            pal[i] = arr[count - i - 1];
        }
        
        // Check if the original and reversed vectors are equal
        return (pal == arr);
    }
};
