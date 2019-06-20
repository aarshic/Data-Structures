/* Tree node structure
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
// Function should construct tree and return
// root of it.  in[] stores inorder traversal
// post[] stores postorder traversal.  n is
// size of these arrays
Node *buildTree(int in[], int post[], int n){
    // Your code here
    Node *root=(Node*)malloc(sizeof(Node));
    root->data=post[n-1];
    root->left=NULL;
    root->right=NULL;
    if(n==1)
        return root;
    int i=0;
    for(i=0;i<n;i++){
        if(in[i]==post[n-1])
            break;
    }
    int a=i,b=n-i-1;
    int il[a],ir[b],pl[a],pr[b];
    for(int k=0;k<a;k++){
        il[k]=in[k];
        pl[k]=post[k];
    }
    for(int m=0;m<b;m++){
        ir[m]=in[m+a+1];
        pr[m]=post[m+a];
    }
    if(a>0)
        root->left=buildTree(il,pl,a);
    if(b>0)
        root->right=buildTree(ir,pr,b);
    return root;
}

