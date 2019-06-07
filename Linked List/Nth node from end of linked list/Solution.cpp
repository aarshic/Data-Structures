/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
/* Should return data of n'th node from the end of linked list.
*  head: head of the linked list
*  n: nth node from end to find
*/
int getNthFromLast(Node *head, int n){
    // Your code here
    Node *root=head;
    int count=0;
    while(root!=NULL){
        root=root->next;
        count++;
    }
    root=head;
    if(count-n<0){
        return -1;
    }
    for(int i=0;i<count-n;i++){
        root=root->next;
    }
    return root->data;
}

