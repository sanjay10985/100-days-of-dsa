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
        
        if(head == NULL || head -> next == NULL){
            return false;
        }

        ListNode* tortoise = head;
        ListNode* hair = head -> next;


        while(tortoise != hair){
            if(hair == NULL || hair -> next == NULL){
                return false;
            }
            tortoise = tortoise -> next;
            hair = hair -> next -> next;
        }
        return true;
    }
};