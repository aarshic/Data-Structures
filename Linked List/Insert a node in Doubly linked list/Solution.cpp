/* a Node of the doubly linked list 
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  Node(int x) { data = x; next = prev = NULL; }
}; */
/* Function to insert into a Doubly Linked List */
void addNode(Node *head, int pos, int data){
   // Your code here
    Node *root=head;
    Node *pre=root;
    Node *newnode=(Node*)malloc(sizeof(Node));
    newnode->data=data;
    newnode->next=NULL;
    newnode->prev=NULL;
    while((pos+1)>0 && root!=NULL){
        pre=root;
        root=root->next;
        pos--;
    }
    pre->next=newnode;
    if(root){
        root->prev=newnode;
        newnode->next=root;
    }
    newnode->prev=pre;
}
