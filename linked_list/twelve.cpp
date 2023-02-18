// https://practice.geeksforgeeks.org/problems/delete-alternate-nodes/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

/*
Structure of the node of the binary tree
struct Node
{
	int data;
	struct Node *next;
	
	Node(int x){
	    int data = x;
	    next = NULL;
	}
};
*/
// Complete this function
void deleteAlt(struct Node *head){
    int curr = 0;
    while(head!=NULL){
        if(curr%2==0 && head->next!=NULL){
            struct Node* temp = head->next;
            head->next = head->next->next;
            delete(temp);
        }
        head = head->next;
    }
}
