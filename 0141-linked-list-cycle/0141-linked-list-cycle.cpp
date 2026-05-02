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
    bool hasCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;

        if(head -> next == nullptr){
            return false;
        }

        while(slow != nullptr && fast != nullptr){
            if(slow == fast ) return true;
            slow = slow ->next;
            fast = fast -> next -> next;

        }
        return false;

    }
};