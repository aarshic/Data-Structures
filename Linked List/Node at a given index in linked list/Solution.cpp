/* Print the nth node of the linked list
   Node is defined as 
struct node
{
    int data;
    struct node* next;
};*/
// Should return data of node at given index. The function may
//  assume that there are at least index+1 nodes in linked list 
int GetNth(struct node* head, int index){
   // Code here
   while(index!=0){
       head=head->next;
       index--;
   }
   return head->data;
}
