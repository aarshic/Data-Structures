/*struct Node
{
  int data;
  Node *next;
  Node *prev;
};
 */
void deleteNode(Node **head_ref, int x){
  //Your code here
    Node *root=*head_ref;
    Node *pre=root;
    if(x==1){
        root=root->next;
        if(root)
            root->prev=NULL;
        *head_ref=root;
        return;
    }
    x--;
    while(x>0){
        pre=root;
        root=root->next;
        x--;
    }
    Node *nex=root->next;
    pre->next=nex;
    if(root->next)
        nex->prev=pre;
    free(root);
    return;
}
