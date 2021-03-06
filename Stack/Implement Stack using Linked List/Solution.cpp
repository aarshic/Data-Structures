/*
The structure of the node of the stack is
struct StackNode
{
    int data;
    StackNode *next;
    StackNode(int a)
    {
        data = a;
        next = NULL;
    }
};
// And this is structure of MyStack
class MyStack {
private:
StackNode *top;
public :
    void push(int);
    int pop();
    MyStack()
    {
        top = NULL;
    }
};
/* The method push to push element
   into the stack */
void MyStack ::push(int x) {
    // Your Code
    StackNode *node=(StackNode*)malloc(sizeof(StackNode));
    node->data=x;
    node->next=NULL;
    if(top)
        node->next=top;
    top=node;
    return;
}
/* The method pop which return the element
  poped out of the stack*/
int MyStack ::pop() {
    // Your Code
    int data=-1;
    if(top){
        data=top->data;
        top=top->next;
    }
    return data;
}

