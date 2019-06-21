/* Tree node structure  used in the program
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */
/* Computes the diameter of binary tree with given root.  */
int height(Node *root){
    if(root==NULL)
        return 0;
    int lheight=height(root->left);
    int rheight=height(root->right);
    if(lheight>rheight)
        return lheight+1;
    else
        return rheight+1;
}

int maxvalue(Node *root, int &max){
    if(root==NULL)
        return max;
    int m=abs(height(root->left)+height(root->right))+1;
    if(max<m)
        max=m;
    maxvalue(root->left,max);
    maxvalue(root->left,max);
}

int diameter(Node* node){
    // Your code here
    int max=0;
    int n=maxvalue(node, max);
    return n;
}

