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
        int cnt = 0;
        
        ListNode* temp = head;
        while( temp != NULL){
            cnt++;
            temp = temp -> next;
        }
       
        if(cnt == n ){
            return head->next;
        }

        int del  = cnt - n;
         temp = head;
         cnt = 0 ;
         ListNode* prev = head;
        while(temp != NULL){
            
            if(cnt == del){
                prev->next = temp -> next;
                break;
            }
            prev = temp;
            temp = temp -> next;
            cnt++;
            
        }

        return  head;
        
    }
};