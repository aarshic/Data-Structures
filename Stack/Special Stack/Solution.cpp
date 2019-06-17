/*Complete the function(s) below*/
void push(int a){
    //add code here.
    s.push(a);
}
bool isFull(int n){
    //add code here.
    if(s.size()==n)
        return true;
    else
        return false;
}
bool isEmpty(){
    //add code here.
    if(s.empty())
        return true;
    else
        return false;
}
int pop(){
    //add code here.
    if(s.empty())
        return -1;
    int x=s.top();
    s.pop();
    return x;
}
int getMin(){
   //add code here.
    int min=s.top();
    while(!s.empty()){
       if(min>s.top()){
           min=s.top();
       }
       s.pop();
    }
    return min;
}
