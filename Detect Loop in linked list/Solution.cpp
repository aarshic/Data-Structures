int detectloop(struct node *list){
    // your code goes here
    int n=300,flag=1;
    for(int i=0;i<n;i++){
        list=list->next;
        if(list==NULL){
            flag=0;
            break;
        }
    }
    if(flag==0){
        return 0;
    }
    else{
        return 1;
    }
}
