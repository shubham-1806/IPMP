//https://leetcode.com/problems/reverse-linked-list/description/

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

    ListNode* endptr;

    ListNode* recurse(ListNode* head){
        if(head->next == NULL){
            endptr = head;
            return head;
        }
        ListNode* prev = recurse(head->next);
        prev->next = head;
        head->next = NULL;
        return head;
    }

    ListNode* reverseList(ListNode* head) {
        ListNode* h = head;
        if(h!=NULL){
            recurse(h);
            return endptr;
        }
        else{
            return h;
        }
    }
};