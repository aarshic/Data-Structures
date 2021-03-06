/* The structure of the class is
class QueueStack{
private:
    queue<int> q1;
    queue<int> q2;
public:
    void push(int);
    int pop();
};
 */
/* The method push to push element into the stack */
void QueueStack :: push(int x){
    // Your Code
    q1.push(x);
}
/*The method pop which return the element poped out of the stack*/
int QueueStack :: pop(){
    // Your Code
    int x,size=q1.size();
    if(size==0)
        return -1;
    while(!q1.empty()){
        if(size==1){
            x=q1.front();
            q1.pop();
            break;
        }
        q2.push(q1.front());
        q1.pop();
        size--;
    }
    while(!q2.empty()){
        q1.push(q2.front());
        q2.pop();
    }
    return x;
}

