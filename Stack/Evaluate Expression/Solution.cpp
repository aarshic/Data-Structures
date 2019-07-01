int Solution::evalRPN(vector<string> &A){
    stack<string> s;
    for(int i=0;i<A.size();i++){
        if(A[i]=="+" || A[i]=="-" || A[i]=="*" || A[i]=="/"){
            stringstream xx(s.top());
            int x=0;
            xx>>x;
            s.pop();
            stringstream yy(s.top());
            int y=0;
            yy>>y;
            s.pop();
            if(A[i]=="+")
                s.push(to_string(y+x));
            else if(A[i]=="-")    
                s.push(to_string(y-x));
            else if(A[i]=="*")
                s.push(to_string(y*x));
            else if(A[i]=="/")
                s.push(to_string(y/x));
        }
        else
            s.push(A[i]);
    }
    stringstream zz(s.top());
    int z=0;
    zz>>z;
    return z;
}

