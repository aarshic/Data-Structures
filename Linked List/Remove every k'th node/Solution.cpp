/* Link list Node 
struct Node
{
    int data;
    struct Node* next;
};*/
/*You are required to complete this method*/
Node * deleteK(Node *head,int K){
  //Your code here
    Node *root=head,*prev;
    if(K==0)
        return head;
    if(K==1)
        return NULL;
    while(root!=NULL){
        for(int i=0;i<K-1;i++){
            if(root==NULL)
                return head;
            prev=root;
            root=root->next;
        }
        if(root==NULL)
            return head;
        Node *next=root->next;
        free(root);
        prev->next=next;
        root=next;
    }
    return head;
}
