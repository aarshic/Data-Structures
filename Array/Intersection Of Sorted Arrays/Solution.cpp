vector<int> Solution::intersect(const vector<int> &A, const vector<int> &B){
    vector<int> v;
    int x=0,y=0;
    int i,j;
    for(i=x;i<A.size();i++){
        for(j=y;j<B.size();j++){
            if(A[i]==B[j]){
                v.push_back(A[i]);
                x=i+1;
                y=j+1;
                break;
            }
            if(A[i]<B[j])
                break;
        }
        if(v.size()==B.size())
            break;
    }
    return v;
}

