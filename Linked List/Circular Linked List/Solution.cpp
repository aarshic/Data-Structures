struct Node{
    int data;
    Node* next;
}; */
/* Should return true if linked list is circular, else false */
bool isCircular(Node *head){
   // Your code here
    if(head==NULL)
        return true;
    Node *root;
    root=head->next;
    while(root!=NULL && root!=head){
        root=root->next;
    }
    return (root==head);
}

