// ! 160. Intersection of Two Linked Lists
// * 1. use two pointer a and b, start with different branch
// * 2. traverse, until not match
// * 3. if anyone pointer reach end so traversal from other side until collide together both pointer
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA == NULL || headB == NULL) return NULL;
        ListNode* a = headA;        
        ListNode* b = headB;
        
        while(a!=b){
            a = a == NULL ? headB : a->next;     
            b = b == NULL ? headA : b->next;
        }
            return a;
    }
};