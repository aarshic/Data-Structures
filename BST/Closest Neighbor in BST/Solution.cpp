#include <bits/stdc++.h>
using namespace std;
struct Node {
	int key;
	Node* left, *right;
};
// To create new BST Node
Node* newNode(int item)
{
	Node* temp = new Node;
	temp->key = item;
	temp->left = temp->right = NULL;
	return temp;
}
void insert(Node ** tree, int val)
{
    Node *temp = NULL;
    if(!(*tree))
    {
        temp = (Node *)malloc(sizeof(Node));
        temp->left = temp->right = NULL;
        temp->key = val;
        *tree = temp;
        return;
    }
    if(val < (*tree)->key)
    {
        insert(&(*tree)->left, val);
    }
    else if(val > (*tree)->key)
    {
        insert(&(*tree)->right, val);
    }
}
int mini=INT_MAX;
int findMaxForN(Node* root, int N,int size);
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        Node* root=NULL;
        int n, k;
        cin>>n;
        mini=INT_MAX;
        for(int i=0;i<n;i++)
        {
            cin>>k;
            insert(&root, k);
        }
        int s;
        cin>>s;
     
       cout<<findMaxForN(root,s,n)<<endl;
         
    }
    return 0;
}
/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
/*
Structure of the Node of the BST is as
struct Node {
	int key;
	Node* left, *right;
};
*/
/*
   'N' is the element 
   'size' is the total element in BST
  */
void maxForN(Node* root, int N, vector<int> &v){
    if(root==NULL){
        v.push_back(-1);
        return;
    }
    if(root->key==N){
        v.push_back(root->key);
        return;
    }
    if(N<root->key)
        maxForN(root->left,N,v);
    else{
        v.push_back(root->key);
        maxForN(root->right,N,v);
    }
}

int findMaxForN(Node* root, int N,int size){
    vector<int> v;
    maxForN(root,N,v);
    sort(v.begin(),v.end());
    return v[v.size()-1];
}
