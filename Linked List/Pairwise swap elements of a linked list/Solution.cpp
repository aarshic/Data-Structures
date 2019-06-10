/*
  Pairwise swap a linked list
  The input list will have at least one element  
  node is defined as 
  struct node
  {
     int data;
     struct node *next;
  }
*/
void pairWiseSwap(struct node *head){
   // The task is to complete this method
    if(head==NULL)
        return;
    int count=0,temp;
    struct node *root=head;
    while(root!=NULL){
        root=root->next;
        count++;
    }
    struct node *prev=head;
    struct node *curr=head->next;
    while(count>1){
        temp=curr->data;
        curr->data=prev->data;
        prev->data=temp;
        if(curr->next!=NULL){
            prev=curr->next;
            curr=prev->next;
        }
        count-=2;
    }
    return;
}
