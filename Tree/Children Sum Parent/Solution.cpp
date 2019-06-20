/*Complete the function below
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/
int isSumProperty(Node *node){
    // Add your code here
    if(node==NULL)
        return 1;
    if(node->left && node->right){
        if(node->data==(node->left->data+node->right->data)){
            int x=isSumProperty(node->left);
            int y=isSumProperty(node->right);
            if(x&y==1)
                return 1;
            else
                return 0;
        }
        else
            return 0;
    }
    else if(node->left){
        if(node->data==node->left->data){
            int x=isSumProperty(node->left);
            if(x==1)
                return 1;
            else
                return 0;
        }
    }
    else if(node->right){
        if(node->data==node->right->data){
            int y=isSumProperty(node->right);
            if(y==1)
                return 1;
            else
                return 0;
        }
    }
    else
        return 1;
}
