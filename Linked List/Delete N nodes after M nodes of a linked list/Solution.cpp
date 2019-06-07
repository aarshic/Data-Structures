/*
delete n nodes after m nodes
  The input list will have at least one element  
  Node is defined as 
  struct node
  {
     int data;
     struct node *next;
  }
*/
void linkdelete(struct node *head, int M, int N){
    //Add code here
    node *root=head,*prev;
    while(root!=NULL){
        for(int i=0;i<M;i++){
            if(root==NULL)
                return;
            prev=root;
            root=root->next;
        }
        for(int i=0;i<N;i++){
            if(root==NULL)
                return;
            node *next=root->next;
            free(root);
            prev->next=next;
            root=next;
        }
    }
    return;
}

