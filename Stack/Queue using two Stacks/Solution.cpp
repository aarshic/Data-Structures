/* The structure of the class is
class StackQueue{
private:   
    // These are STL stacks ( http://goo.gl/LxlRZQ )
    stack<int> s1;
    stack<int> s2;
public:
    void push(int);
    int pop();
}; */
/* The method push to push element into the queue */
void StackQueue :: push(int x){
    // Your Code
    s1.push(x);
}
/*The method pop which return the element poped out of the queue*/
int StackQueue :: pop(){
    // Your Code
    int x,size=s1.size();
    if(size==0)
        return -1;
    while(!s1.empty()){
        if(size==1){
            x=s1.top();
            s1.pop();
            break;
        }
        s2.push(s1.top());
        s1.pop();
        size--;
    }
    while(!s2.empty()){
        s1.push(s2.top());
        s2.pop();
    }
    return x;
}

