// * 19. Remove Nth Node From End of List
// * https://leetcode.com/problems/remove-nth-node-from-end-of-list/

// * take two pointer
// * fast and slow
// * traverse fast to nth
// * traverse both by one slow and fast
// * now, slow is on the place where you need to delete the node
// * fix the link
// * return head

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
        ListNode* newNode = new ListNode();
        newNode->next = head;
        ListNode* slow = newNode;
        ListNode* fast = newNode;
        // fast will traversal till nth
        for(int i=1;i<=n;i++){
            fast = fast->next;
        }
        // move by one both slow and fast
        while(fast->next!=NULL){
            fast = fast->next;
            slow = slow->next;
        }
        
        slow->next = slow->next->next;
        
        return newNode->next;      
    }
};