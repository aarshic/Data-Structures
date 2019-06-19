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
};*/
/* Computes the height of binary tree with given root.  */
int height(Node* node){
    // Your code here
    if(node==NULL)
        return 0;
    else{
        int lheight=height(node->left);
        int rheight=height(node->right);
        if(lheight>rheight)
            return lheight+1;
        else
            return rheight+1;
    }
}

