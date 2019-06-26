#include<bits/stdc++.h>
using namespace std;
struct Node {
int data;
struct Node * right, * left;
};
void insert(Node ** tree, int val)
{
    Node *temp = NULL;
    if(!(*tree))
    {
        temp = (Node *)malloc(sizeof(Node));
        temp->left = temp->right = NULL;
        temp->data = val;
        *tree = temp;
        return;
    }
    if(val < (*tree)->data)
    {
        insert(&(*tree)->left, val);
    }
    else if(val > (*tree)->data)
    {
        insert(&(*tree)->right, val);
    }
}
void inorderrrrr(Node *root)
{
    if(root!=NULL)
    {
    inorderrrrr(root->left);
    cout<<root->data<< " ";
    inorderrrrr(root->right);
    }
}
void modify(Node **root);
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        Node *root;
        Node *tmp;
    //int i;
        root = NULL;
        int N;
        cin>>N;
        for(int i=0;i<N;i++)
        {
            int k;
            cin>>k;
            insert(&root, k);
        }
        modify(&root);
        inorderrrrr(root);
        cout<<endl;
    }
}
/*This is a function problem.You only need to complete the function given below*/
/* BST Node structure  used in the program
 struct Node
 {
     int data;
     Node* left, *right;
}; */
/*  modifies the root of the bst */
void inorder(Node *root, vector<int> &v){
    if(root==NULL)
        return;
    inorder(root->left,v);
    v.push_back(root->data);
    inorder(root->right,v);
}

void modify(Node **root){
    // Your code here
    Node *node=*root;
    vector<int> v;
    inorder(node,v);
    int n=v.size();
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++)
            v[i]+=v[j];
    }
    *root=NULL;
    for(int i=0;i<n;i++)
        cout<<v[i]<<" ";
}
