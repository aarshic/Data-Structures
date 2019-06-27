#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *left,*right;
    Node(int x){
        data=x;
        left=NULL;
        right=NULL;
    }
};

Node *insert(Node *root, int key){
    if(root==NULL)
        return new Node(key);
    if(key==root->data)
        return root;
    if(key<root->data)
        root->left=insert(root->left,key);
    else
        root->right=insert(root->right,key);
}

void postorder(Node *root){
    if(root==NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int main(){
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    Node *root;
	    root=NULL;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        root=insert(root,a[i]);
	    }
	    postorder(root);
	    cout<<endl;
	}
	return 0;
}
