/* Link list Node 
struct Node{
    int data;
    Node* next;
};*/
/*You are required to complete below method*/
Node* deleteNode(Node *head,int x){
    //Your code here
    Node *root,*prev;
    root=head;
    prev=root;
    if(x==1){
        head=root->next;
        free(root);
        return head;
    }
    x--;
    while(x>0){
        x--;
        prev=root;
        root=root->next;
    }
    Node* next=root->next;
    free(root);
    prev->next=next;
    return head;
}
