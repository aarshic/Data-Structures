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
void merge(Node *root1,Node *root2);
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        Node *root1;Node *root2;
        Node *tmp;
        root1 = NULL;
        root2=NULL;
        int N;
        cin>>N;
        int M;
        cin>>M;
        for(int i=0;i<N;i++)
        {
            int k;
            cin>>k;
            insert(&root1, k);}
        for(int i=0;i<M;i++)
        {
            int k;
            cin>>k;
            insert(&root2, k);} 
       merge(root1,root2);
        cout<<endl;
    }
}
/*This is a function problem.You only need to complete the function given below*/

/* The structure of Node is
struct Node {
    int data;
    Node* right;
    Node* left;
    
    Node(int x){
        data = x;
        right = NULL;
        left = NULL;
    }
};*/
/*You are required to complete below method */
Node *inorder(Node *root, vector<int> &v){
    if(root==NULL)
        return root;
    inorder(root->left,v);
    v.push_back(root->data);
    inorder(root->right,v);
}

void merge(Node *root1, Node *root2){
    //Your code here
    vector<int> v1,v2,v3;
    root1=inorder(root1,v1);
    root2=inorder(root2,v2);
    int n=v1.size(),m=v2.size();
    for(int i=0;i<n;i++)
        v3.push_back(v1[i]);
    for(int i=0;i<m;i++)
        v3.push_back(v2[i]);
    sort(v3.begin(),v3.end());
    for(int i=0;i<n+m;i++)
        cout<<v3[i]<<" ";
}
