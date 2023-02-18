//https://leetcode.com/problems/middle-of-the-linked-list/

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
        int nodes = 0;
        ListNode* temp = head;
        while(temp!=NULL){
            nodes++;
            temp=temp->next;
        }
        int mid = nodes/2;
        int curr = 0;
        temp = head;
        while(curr!=mid){
            temp = temp->next;
            curr++;
        }
        return temp;
    }
};