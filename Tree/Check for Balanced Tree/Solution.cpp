/* A binary tree node structure
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
// This function should return tree if passed  tree 
// is balanced, else false.
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

bool isBalanced(Node *root){
    //  Your Code here
    if(root==NULL)
        return true;
    if(abs(height(root->left)-height(root->right))<=1){
        bool x=isBalanced(root->left);
        bool y=isBalanced(root->right);
        if(x&y==true)
            return true;
    }
    return false;
}

