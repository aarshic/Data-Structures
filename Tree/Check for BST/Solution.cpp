/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node {
    int data;
    Node* right;
    Node* left;
    
    Node(int x){
        data = x;
        right = NULL;
        left = NULL;
    }
}; */
int maxvalue(Node* root){
    while(root->right!=NULL)
        root=root->right;
    return root->data;
}

int minvalue(Node* root){
    while(root->left!=NULL)
        root=root->left;
    return root->data;
}

bool isBST(Node* root) {
    // Your code here
    if(root==NULL)
        return true;
    if(root->left!=NULL && root->data<maxvalue(root->left))
        return false;
    if(root->right!=NULL && root->data>minvalue(root->right))
        return false;
    if(!isBST(root->left) || !isBST(root->right))
        return false;
    return true;
}

