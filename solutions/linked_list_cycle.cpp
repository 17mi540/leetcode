// problem link: https://leetcode.com/problems/linked-list-cycle

#include <bits/stdc++.h>
#include<unordered_map>
#include <unordered_set>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head== NULL or head->next == NULL){
            return false;
        }
        
        ListNode *temp1= head, *temp2= head;
        while(temp2->next!=NULL && temp2->next->next != NULL){
            cout<<temp1->val<<endl;
            temp1 = temp1->next;
            temp2 = temp2->next->next;
            if (temp1 == temp2){
                return true;
            }
        }
        return false;
    }
};

int main() {
    Solution s;
}


//  updated solution with time complexicity O(N).


class Solution {
public:
    bool hasCycle(ListNode *head) {

    // Initally, both Fast and Slow pointer will point to Head

    ListNode *fast = head ;
    ListNode *slow = head ;

    // While Loop runs till our Fast Pointer doesn't become NULL or our Fast pointer doesn't point to the Last Node of the LinkedList

    while(fast != NULL && fast -> next != NULL)
    {
        // Slow pointer will move by a Single Node everytime

        slow = slow -> next ;

        // Fast Pointer will move with a speed twice to that of Slow Pointer

        fast = fast -> next -> next ;

        // If there's a Cycle in the LinkedList, then Fast and Slow pointer will eventually meet

        if(fast == slow)
            return true ;
    }

    // If we come out of the While Loop, it implies there's no Cycle present in the LinkedList, so we return false

    return false ;
}
};

/*
Time Complexity:  O(N)
Space Complexity: O(1)
*/



