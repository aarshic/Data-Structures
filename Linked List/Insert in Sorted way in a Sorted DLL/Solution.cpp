/*structure of the node of the DLL is as
struct Node {
	int data;
	struct Node* prev, *next;
};
*/
// function should insert a new node in sorted way in
// a sorted doubly linked list
void sortedInsert(struct Node** head_ref, struct Node* newNode){
	// Code here
	Node *root=*head_ref;
	Node *pre=root;
	if(root==NULL){
	    *head_ref=newNode;
	    return;
    }
	if(root->data>newNode->data){
	    root->prev=newNode;
	    newNode->next=root;
	    *head_ref=newNode;
	    return;
	}
	while(root!=NULL && root->data<=newNode->data){
	    pre=root;
	    root=root->next;
	}
	pre->next=newNode;
	if(root){
	    root->prev=newNode;
	    newNode->next=root;
	}
	newNode->prev=pre;
}
