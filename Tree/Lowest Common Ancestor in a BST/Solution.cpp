/*The structure of a BST Node is as follows:
struct Node {
    int data;
    Node* right;
    Node* left;
    
    Node(int x){
        data = x;
        right = NULL;
        left = NULL;
    }
};
*/
/*You are required to complete
this function*/
Node* LCA(Node *root, int n1, int n2){
    //Your code here
    if((n1>=root->data && n2<=root->data) || (n1<=root->data && n2>=root->data))
        return root;
    if(n1<root->data){
        LCA(root->left,n1,n2);
    }
    else if(n1>root->data){
        LCA(root->right,n1,n2);
    }
}

