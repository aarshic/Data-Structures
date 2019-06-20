/* A binary tree node
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
/* If n1 and n2 are present, return pointer
   to LCA. If both are not present, return 
   NULL. Else if left subtree contains any 
   of them return pointer to left.*/
bool findpath(Node* root ,vector<Node*> &path, int n){
    if(root==NULL)
        return false;
    path.push_back(root);
    if(root->data==n)
        return true;
    if((root->left && findpath(root->left,path,n)) || (root->right && findpath(root->right,path,n)))
        return true;
    path.pop_back();
    return false;
}
   
Node *lca(Node* root ,int n1 ,int n2 ){
    //Your code here 
    vector<Node*> path1,path2;
    if(!findpath(root,path1,n1) || !findpath(root,path2,n2))
        return NULL;
    int i;
    for(i=0;i<path1.size() && i<path2.size();i++){
        if(path1[i]!=path2[i])
            break;
    }
    return path1[i-1];
}
