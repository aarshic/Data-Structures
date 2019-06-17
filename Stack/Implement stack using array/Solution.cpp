/* 
The structure of the class is
class MyStack
{
private:
    int arr[1000];
    int top;
public:
    MyStack(){top=-1;}
    int pop();
    void push(int);
};
 */
/* The method push to push element into the stack */
void MyStack :: push(int x){
    // Your Code
    top=top+1;
    arr[top]=x;
    return;
}
/*The method pop which return the element 
  poped out of the stack*/
int MyStack :: pop(){
    // Your Code
    if(top<0)
        return -1;
    int temp=arr[top];
    arr[top]=-1;
    top=top-1;
    return temp;
}

