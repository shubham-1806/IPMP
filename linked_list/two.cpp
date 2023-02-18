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
    ListNode* reverseList(ListNode* head) {
        ListNode* h = head;
        if(h!=NULL){
            h = h->next;
            ListNode* prev = head;
            ListNode* next = NULL;
            head->next = NULL;
            while(h!=NULL){
                next = h->next;
                h->next = prev;
                prev = h;
                h = next;
            }
            return prev;
        }
        else{
            return h;
        }
    }
};