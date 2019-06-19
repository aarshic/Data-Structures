/* A tree Node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */
int height(Node *root){
    if(root==NULL)
        return 0;
    else{
        int lheight=height(root->left);
        int rheight=height(root->right);
        if(lheight>rheight)
            return lheight+1;
        else
            return rheight+1;
    }
}

void printlevel(Node *root, int level){
    if(root==NULL)
        return;
    if(level==1)
        cout<<root->data<<" ";
    else{
        printlevel(root->left,level-1);
        printlevel(root->right,level-1);
    }
}

void reversePrint(Node *root){
    //Your code here
    for(int i=height(root);i>=1;i--)
        printlevel(root,i);
}
