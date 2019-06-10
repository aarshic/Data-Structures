
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
/*You are required to complete this method */
bool isPalindrome(Node *head){
    //Your code here
    if(head==NULL)
        return true;
    int n=0;
    Node *root=head;
    while(root!=NULL){
        root=root->next;
        n++;
    }
    if(n==1)
        return true;
    int k=0,a[n]={0},flag=0;
    while(head!=NULL){
        a[k]=head->data;
        head=head->next;
        k++;
    }
    for(int i=0,j=n-1;i<n/2,j>=n/2;i++,j--){
        if(a[i]!=a[j]){
            flag=1;
            break;
        }
    }
    if(flag==0)
        return true;
    else
        return false;
}

