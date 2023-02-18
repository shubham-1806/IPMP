// https://practice.geeksforgeeks.org/problems/intersection-of-two-sorted-linked-lists/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

/* The structure of the Linked list Node is as follows:

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

*/

Node* findIntersection(Node* head1, Node* head2)
{
    Node* newHead = new Node(0);
    Node* curr = newHead;
    int flag = 0;
    while(head1!=NULL && head2!=NULL){
        if(head1->data > head2->data){
            head2 = head2->next;
        }
        else if(head1->data == head2->data){
            if(flag==1){
                Node* welp = new Node(head1->data);
                curr->next = welp;
                curr = welp;
            }
            else{
                curr->data = head1->data;
                flag=1;
            }
            head1 = head1->next;
            head2 = head2->next;
        }
        else{
            head1 = head1->next;
        }
    }
    if(flag==0){
        return NULL;
    }
    else{
        return newHead;
    }
}