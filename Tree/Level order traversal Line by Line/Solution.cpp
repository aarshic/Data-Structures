/* A binary tree Node
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */
//You are required to complete this method
int height(Node* node){
    if(node==NULL)
        return 1;
    else{
        int lheight=height(node->left);
        int rheight=height(node->right);
        if(lheight>rheight)
            return lheight+1;
        else
            return rheight+1;
    }
}

void printlevel(Node* node, int level){
    if(node==NULL)
        return;
    if(level==1)
        cout<<node->data<<" ";
    else if(level>1){
        printlevel(node->left, level-1);
        printlevel(node->right, level-1);
    }
}

void levelOrder(Node* node){
    //Your code here
    for(int i=1;i<height(node);i++){
        printlevel(node,i);
        cout<<"$ ";
    }
}
