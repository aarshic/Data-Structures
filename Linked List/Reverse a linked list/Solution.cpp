/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
// Should reverse list and return new head.
Node* reverseList(Node *head){
  // Your code here
    if(head==NULL)
        return NULL;
    if(head->next==NULL){
        return head;
    }
    Node *prev=head;
    Node *curr=head->next;
    Node *present=curr;
    present=present->next;
    curr->next=prev;
    prev->next=NULL;
    while(present!=NULL){
        prev=curr;
        curr=present;
        present=present->next;
        curr->next=prev;
    }
    return curr;
}

