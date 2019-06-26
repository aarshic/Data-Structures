#include<bits/stdc++.h>
using namespace std;
struct node
{
    int key;
    struct node *left;
    struct node *right;
};
bool isTripletPresent(node *root);
node* newNode(int num)
{
    node* temp = new node;
    temp->key = num;
    temp->left = temp->right = NULL;
    return temp;
}
node* insert(node* root, int key)
{
    if (root == NULL)
       return newNode(key);
    if (root->key > key)
       root->left = insert(root->left, key);
    else
       root->right = insert(root->right, key);
    return root;
}
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		node* root = NULL;
		while(n--){
			int a;
			cin>>a;
			root = insert(root, a);
		}
		if (isTripletPresent(root))
			printf("1
");
		else
			printf("0
");
	}
    return 0;
}
/*This is a function problem.You only need to complete the function given below*/
/*Complete the function below
Node is as follows:
struct node
{
    int key;
    struct node *left;
    struct node *right;
};
*/
int search(node *root, int x){
    if(root==NULL)
        return NULL;
    if(root->key==x)
        return x;
    else if(x<root->key)
        return search(root->left,x);
    else if(x>root->key)
        return search(root->right,x);
}

void inorder(node *root, vector<int> &a){
    if(root==NULL)
        return;
    inorder(root->left,a);
    a.push_back(root->key);
    inorder(root->right,a);
}

bool isTripletPresent(node *root){
    //add code here.
    vector<int> a;
    inorder(root,a);
    int n=a.size();
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            int x=search(root,-1*(a[i]+a[j]));
            if(x!=NULL){
                if(x!=a[i] && x!=a[j])
                    return true;
            }
        }
    }
    return false;
}
