/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
/*class Solution {
public:
    ListNode* doubleIt(ListNode* head) {
        vector<int> arr;
        ListNode* first = head;
        ListNode* second = head;
        while (first != nullptr) {
            arr.push_back(first->val);
            first = first->next;
        }
        string c;
        for (int i = 0; i < arr.size(); i++) {
            c += to_string(arr[i]);
        }
        int n = stoi(c);
        n = n * 2;
        c = to_string(n);
        for (int i = 0; i < c.size(); i++) {
            second->val = c[i];
            second = second->next;
        }
        return head;
    }
};
*/
class Solution {
public:
    ListNode* doubleIt(ListNode* head) {
        ListNode* curr = head;
        ListNode* prev = nullptr;

        // Traverse the linked list
        while (curr != nullptr) {
            int twiceOfVal = curr->val * 2;

            // If the doubled value is less than 10
            if (twiceOfVal < 10) {
                curr->val = twiceOfVal;
            } 

            // If doubled value is 10 or greater
            else if (prev != nullptr) { // other than first node
                // Update current node's value with units digit of the doubled value
                curr->val = twiceOfVal % 10;
                // Add the carry to the previous node's value
                prev->val = prev->val + 1;
            } 
            // If it's the first node and doubled value is 10 or greater
            else { // first node
                // Create a new node with carry as value and link it to the current node
                head = new ListNode(1, curr);
                // Update current node's value with units digit of the doubled value
                curr->val = twiceOfVal % 10;
            }

            // Update prev and curr pointers
            prev = curr;
            curr = curr->next;
        }
        return head;
    }
};
