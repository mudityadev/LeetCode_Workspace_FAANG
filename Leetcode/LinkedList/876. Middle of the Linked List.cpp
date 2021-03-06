// * notes
// * use 2 tortoise, fast and slow
// * fast moves 2 times and slow moves 1 times at a time
// * when fast = NULL
// * slow tortoise is on middle element
// *



// * optimised one
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
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head, *fast = head;
        while(fast!=NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        
        return slow;
        
    }
};


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
    ListNode* middleNode(ListNode* head) {
       ListNode* temp = head;
        int count = 0;
        while(temp!=NULL) {
            count++;
            temp = temp->next;
        }
        count = count/2;
        // count+=1;
        temp = head;
        while(count--){
            temp = temp->next;
        }
        head = temp;
        return head;
        
        
    }
};

 
