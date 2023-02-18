//https://leetcode.com/problems/linked-list-cycle/

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
        ListNode* hare = head;
        ListNode* tortoise = head;
        while(tortoise!=NULL && hare!=NULL){
            tortoise = tortoise->next;
            hare = hare->next;
            if(hare!=NULL){
                hare = hare->next;
            }
            else{
                return false;
            }
            if(hare==tortoise){
                return true;
            }
        }
        return false;   
    }
};