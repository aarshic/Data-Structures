/* Structure of a node in Queue
struct QueueNode
{
    int data;
    QueueNode *next;
    QueueNode(int a)
    {
        data = a;
        next = NULL;
    }
};
And structure of MyQueue
struct MyQueue {
    QueueNode *front;
    QueueNode *rear;
    void push(int);
    int pop();
    MyQueue() {front = rear = NULL;}
}; */
/* The method push to push element into the queue*/
void MyQueue:: push(int x){
    // Your Code
    QueueNode *node=(QueueNode*)malloc(sizeof(QueueNode));
    node->data=x;
    node->next=NULL;
    if(rear!=NULL)
        rear->next=node;
    if(front==NULL)
        front=node;
    rear=node;
}
/*The method pop which return the element
  poped out of the queue*/
int MyQueue :: pop(){
    // Your Code     
    if(front==NULL)
        return -1;
    int x=front->data;
    front=front->next;
    return x;
}
sssssss
