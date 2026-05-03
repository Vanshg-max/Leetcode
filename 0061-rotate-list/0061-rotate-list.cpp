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
    ListNode* rotateRight(ListNode* head, int k) {

        if(!head || !head->next || k == 0) return head; //edge case

        int length = 1;

        ListNode* tail = head;
        //finding length
        while(tail -> next){
            tail = tail -> next;
            length++;
        }

        tail -> next = head; //making it circular

        k = k % length; // optimize k
        int stepToNewTail = length - k;
        ListNode* newTail = head;

        // steps to new tail
        for(int i=1; i<stepToNewTail ; i++)
        {
            newTail = newTail -> next;
        }

        // new head
        ListNode* newHead = newTail -> next;
        newTail -> next = nullptr;
        return newHead;

        
    }
};