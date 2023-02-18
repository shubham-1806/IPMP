//https://practice.geeksforgeeks.org/problems/nth-node-from-end-of-linked-list/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

//Function to find the data of nth node from the end of a linked list.
int getNthFromLast(Node *head, int n)
{
    int l = 1;
    Node* temp = head;
    while(temp->next != NULL){
        l++;
        temp = temp->next;
    }
    int curr = 0;
    temp = head;
    if((l-n)>=0){
        while(curr!= (l-n)){
            temp = temp->next;
            curr++;
        }
        return temp->data;
    }
    else{
        return -1;
    }
}
