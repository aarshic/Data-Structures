queue<ll> modifyQueue(queue<ll> q, int k){
    //add code here.
    stack<int> s;
    queue<ll> qr;
    int size=q.size();
    while(k--){
        s.push(q.front());
        q.pop();
    }
    while(!s.empty()){
        qr.push(s.top());
        s.pop();
    }
    int m=q.size();
    while(m--){
        qr.push(q.front());
        q.pop();
    }
    return qr;
}
