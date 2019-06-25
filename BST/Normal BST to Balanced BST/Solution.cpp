#include <bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	Node* left, *right;
};
Node* newNode(int data)
{
	Node* node = new Node;
	node->data = data;
	node->left = node->right = NULL;
	return (node);
}
Node* insert(struct Node* node, int key){
	if (node == NULL) return newNode(key);
	if (key < node->data)
		node->left = insert(node->left, key);
	else if (key > node->data)
		node->right = insert(node->right, key);
	return node;
}
void preOrder(Node* node)
{
	if (node == NULL)return;
	printf("%d ", node->data);
	preOrder(node->left);
	preOrder(node->right);
}
int height(struct Node* node) 
{
   if (node==NULL) return 0;
   else
   {
       int lDepth = height(node->left);
       int rDepth = height(node->right);
       if (lDepth > rDepth) return(lDepth+1);
       else return(rDepth+1);
   }
} 
Node* buildBalancedTree(Node* root);
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        struct Node *root = NULL;
        int n, temp;
        cin>>n;
        while(n--)
        {
            cin>>temp;
            root = insert(root, temp);
        }
        // cout<<height(root)<<endl;
        root = buildBalancedTree(root);
        cout<<height(root)<<endl;
    }
	return 0;
}
/*This is a function problem.You only need to complete the function given below*/
/*Structure of the Node of the BST is as
struct Node
{
	int data;
	Node* left, *right;
};
*/
// Your are required to complete this function
// function should return root of the modified BST
void allNodes(Node *root, vector<Node*> &a){
    if(root==NULL)
        return;
    allNodes(root->left,a);
    a.push_back(root);
    allNodes(root->right,a);
}

Node *buildTree(vector<Node*> &a, int start, int end){
    if(start>end)
        return NULL;
    int mid=(start+end)/2;
    Node *root=a[mid];
    root->left=buildTree(a,start,mid-1);
    root->right=buildTree(a,mid+1,end);
    return root;
}

Node* buildBalancedTree(Node* root){
    // Code here
    if(root==NULL)
        return NULL;
    vector<Node*> a;
    allNodes(root,a);
    int n=a.size();
    return buildTree(a,0,n-1);
}
