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
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode * first,*second;
        int count=1;
        first=head;
        second=head;
        while(second->next!=nullptr){
            second=second->next;
            count++;
        }
         if(n==count){
             head=head->next;
             return head;
         }
        if(n==0){
            ListNode * get;
            for(int i=0;i<count-1;i++){
                get=get->next;
            }
            get->next=nullptr;
            return head;
        }
        
        for(int i=0;i<count-n-1;i++){
            first=first->next;
        }
        first->next=first->next->next;
        return head;
    }
};
