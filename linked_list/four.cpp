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

    bool isPalindrome(ListNode* head) {
        int nodes = 0;
        ListNode* temp = head;
        while(temp!=NULL){
            nodes++;
            temp=temp->next;
        }
        int mid = nodes/2;
        if(nodes%2!=0){
            mid++;
        }
        int curr = 0;
        temp = head;
        while(curr!=mid){
            temp = temp->next;
            curr++;
        }
        temp = reverseList(temp);
        ListNode* temp2 = head;
        while(temp!=NULL){
            cout<<temp2->val<<" "<<temp->val<<endl;
            if(temp2->val!=temp->val){
                return false;
            }
            temp2 = temp2->next;
            temp = temp->next;
        }
        return true;
    }
};