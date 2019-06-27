#include<bits/stdc++.h>
using namespace std;
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
void insert(Node ** tree, int val)
{
    Node *temp = NULL;
    if(!(*tree))
    {
        *tree = new Node(val);
        return;
    }
    if(val < (*tree)->data)
    { insert(&(*tree)->left, val);}
    else if(val > (*tree)->data)
    { insert(&(*tree)->right, val);}
}
void inorder(Node *root)
{
    if(root==NULL)
        return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
Node * deleteNode(Node *root,  int );
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        Node *root;
        Node *tmp;
        root = NULL;
        int N;
        cin>>N;
        for(int i=0;i<N;i++)
        {
            int k;
            cin>>k;
            insert(&root, k);}
        int r;
        cin>>r;
        root = deleteNode(root,r);
        inorder(root);
        cout<<endl;
    }
}
/*This is a function problem.You only need to complete the function given below*/

/* The structure of a BST Node is as follows:
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
Node *minvalue(Node *root){
    while(root->left!=NULL)
        root=root->left;
    return root;
}

Node *deleteNode(Node *root,  int x){
    // your code goes here
    if(root==NULL)
        return root;
    if(x<root->data)
        root->left=deleteNode(root->left,x);
    else if(x>root->data)
        root->right=deleteNode(root->right,x);
    else{
        if(root->left==NULL && root->right==NULL){
            free(root);
            return NULL;
        }
        if(root->left==NULL){
            Node *tmp=root->right;
            free(root);
            return tmp;
        }
        if(root->right==NULL){
            Node *tmp=root->left;
            free(root);
            return tmp;
        }
        else{
            Node *mintmp=minvalue(root->right);
            root->data=mintmp->data;
            root->right=deleteNode(root->right,mintmp->data);
            return root;
        }
    }
}

