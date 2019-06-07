/*
struct Node
{
    int data;
    Node* next;
    Node(int x) {  data = x;  next = NULL; }
}; */
// head : reference to head of linked list
int getCount(struct Node* head){
    //Code here
    int count=0;
    while(head!=NULL){
        count++;
        head=head->next;
    }
    return count;
}

