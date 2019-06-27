#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	struct Node* left, *right;
};
struct Node *newNode(int item){
	struct Node *temp = new Node;
	temp->data = item;
	temp->left = temp->right = NULL;
	return temp;
}
struct Node* insert(struct Node* node, int key){
	if (node == NULL) return newNode(key);
	if (key < node->data)
		node->left = insert(node->left, key);
	else if (key > node->data)
		node->right = insert(node->right, key);
	return node;
}
float findMedian(struct Node *root,int n);
// Driver Program to test above functions
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        struct Node *root = NULL;
        int n, temp;
        cin>>n;
       for(int i=0;i<n;i++)
        {
            cin>>temp;
            root = insert(root, temp);
        }
        cout<<findMedian(root,n)<<"
";
    }
	return 0;
}

}
/*This is a function problem.You only need to complete the function given below*/
/*
Structure of the binary Search Tree is as
struct Node
{
	int data;
	struct Node *left, *right;
};
*/
// your task is to complete the Function
// Note: Function should return median of the BST
void inorder(Node *root, vector<float> &v){
    if(root==NULL)
        return;
    inorder(root->left,v);
    v.push_back(root->data);
    inorder(root->right,v);
}

float findMedian(struct Node *root,int n){
    //Code here
    vector<float> v;
    inorder(root,v);
    if(n%2==0)
        return (v[(n-1)/2]+v[n/2])/2;
    else
        return v[n/2];
}
