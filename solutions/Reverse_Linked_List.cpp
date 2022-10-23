class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *p = NULL;
       
        while(head!=NULL){
         ListNode *link = head->next;
         head->next = p;
         p = head;
         head = link;
        }
        return p;
    }
};
