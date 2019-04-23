int getMiddle(Node *head)
{
    // Your code here
    Node *temp = new Node;
    temp=head;
    int n=0;
    while(temp!=NULL){
       n++;
       temp=temp->next;
    }
    if(n==0){
       return -1;
    }
    if(n%2==0){
       n=(n/2)+1;
    }
    else{
       n=(n+1)/2;
    }
    // cout<<n;
    for(int i=0;i<n-1;i++){
       head=head->next;
    }
    // cout<<head->data;
    return head->data;
}
