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

Node *buildtree(Node *root, int a[], int n){
    for(int i=0;i<n;i++)
        root=insert(root,a[i]);
    return root;
}

void preorder(Node *root, vector<int> &v){
    if(root==NULL)
        return;
    v.push_back(root->data);
    preorder(root->left,v);
    preorder(root->right,v);
}

bool checkpre(Node *root, int a[], int n){
    vector<int> v;
    preorder(root,v);
    int flag=0;
    for(int i=0;i<n;i++){
        if(a[i]!=v[i]){
            flag=1;
            break;
        }
    }
    if(flag==1)
        return false;
    else
        return true;
}

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
        Node *root;
        root=NULL;
        bool res=false;
        n=sizeof(a)/sizeof(a[0]);
        root=buildtree(root,a,n);
        res=checkpre(root,a,n);
        if(res==true)
            cout<<1<<endl;
        else
            cout<<0<<endl;
	}
	return 0;
}
