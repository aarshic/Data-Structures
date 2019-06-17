/* 
The structure of the class is
class MyQueue {
private:
    int arr[10001];
    int front;
    int rear;
public :
    MyQueue(){front=0;rear=0;}
    void push(int);
    int pop();
};
 */
/* The method push to push element into the queue */
void MyQueue :: push(int x){
    // Your Code
    if(arr[rear%10001]==NULL)
        front++;
    rear++;
    arr[(rear)%10001]=x;
}
/*The method pop which return the element 
  poped out of the queue*/
int MyQueue :: pop(){
    // Your Code    
    if(arr[front%10001]==NULL)
        return -1;
    int x=arr[front%10001];
    arr[front%10001]=NULL;
    if(front<rear)
        front++;
    return x;
}
