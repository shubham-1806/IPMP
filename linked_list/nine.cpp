// https://leetcode.com/problems/intersection-of-two-linked-lists/

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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int nodes1 = 0;
        ListNode* temp1 = headA;
        while(temp1!=NULL){
            nodes1++;
            temp1=temp1->next;
        }
        int nodes2 = 0;
        ListNode* temp2 = headB;
        while(temp2!=NULL){
            nodes2++;
            temp2=temp2->next;
        }
        temp1 = headA;
        temp2 = headB;
        if(nodes1>nodes2){
            int d = nodes1-nodes2;
            for(int i=0;i<d;i++){
                temp1 = temp1->next;
            }
        }
        else if(nodes2>nodes1){
            int d = nodes2-nodes1;
            for(int i=0;i<d;i++){
                temp2 = temp2->next;
            }
        }
        while(temp1!=NULL && temp2!=NULL){
            if(temp1==temp2){
                return temp1;
            }
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        return NULL;
    }
};