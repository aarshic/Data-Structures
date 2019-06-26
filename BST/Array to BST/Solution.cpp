#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *left, *right;
};

Node* newNode(int x){
    Node *root=(Node*)malloc(sizeof(Node));
    root->data=x;
    root->left=NULL;
    root->right=NULL;
    return root;
}

Node* insert(Node* root, int a[], int start, int end){
    if(start>end)
        return root;
    int mid=(start+end)/2;
    root=newNode(a[mid]);
    root->left=insert(root->left,a,start,mid-1);
    root->right=insert(root->right,a,mid+1,end);
}

void preorder(Node *root){
    if(root==NULL)
        return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

int main(){
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
        Node *root=insert(root,a,0,n-1);
	    preorder(root);
	    cout<<endl;
	}
	return 0;
}
