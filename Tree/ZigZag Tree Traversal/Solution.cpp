#include <bits/stdc++.h>
using namespace std;
struct Node {
	int data;
	struct Node *left, *right;
};
Node* newNode(int data)
{
	Node* node = new struct Node;
	node->data = data;
	node->left = node->right = NULL;
	return (node);
}
void zigZagTraversal(Node* root);
int main()
{
  int t;
  cin>>t;
  while (t--)
  {
     map<int, Node*> m;
     int n;
     cin>>n;
     struct Node *root = NULL;
     struct Node *child;
     while (n--)
     {
        Node *parent;
        char lr;
        int n1, n2;
        scanf("%d %d %c", &n1, &n2, &lr);
        if (m.find(n1) == m.end())
        {
           parent = newNode(n1);
           m[n1] = parent;
           if (root == NULL)
             root = parent;
        }
        else
           parent = m[n1];
        child = newNode(n2);
        if (lr == 'L')
          parent->left = child;
        else
          parent->right = child;
        m[n2]  = child;
     }
     zigZagTraversal(root);
  }
  return 0;
}
// Contributed by: Hashit Sidhwa

}
/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
/*Structure of the node of the binary tree is as
struct Node {
	int data;
	struct Node *left, *right;
};
*/
// your task is to complete this function 
// Function takes a single argument as input
// the root of the binary tree
// print a new line after each test case
int height(Node *root){
    if(root==NULL)
        return 0;
    int lheight=height(root->left);
    int rheight=height(root->right);
    if(lheight>rheight)
        return lheight+1;
    else
        return rheight+1;
}

void printlevel1(Node* root, int level){
    if(root==NULL)
        return;
    if(level==1)
        cout<<root->data<<" ";
    printlevel1(root->left,level-1);
    printlevel1(root->right,level-1);
}

void printlevel2(Node* root, int level){
    if(root==NULL)
        return;
    if(level==1)
        cout<<root->data<<" ";
    printlevel2(root->right,level-1);
    printlevel2(root->left,level-1);
}

void zigZagTraversal(Node* root){
	// Code here
	for(int i=1;i<=height(root);i++){
	    if(i%2==1)
            printlevel1(root,i);
        else
            printlevel2(root,i);
	}
    cout<<endl;
}
