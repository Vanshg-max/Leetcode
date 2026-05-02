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
    bool checkPal(ListNode* &left, ListNode* right){
        if(right == nullptr) return true;

        bool isPal = checkPal(left, right->next);

        if(!isPal) return false;

        bool isEql = (left -> val == right -> val);

        left = left -> next;
        
        return isEql;
    }
    bool isPalindrome(ListNode* head) {

        return checkPal(head,head);
        
    }
};