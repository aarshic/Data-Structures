string Solution::longestCommonPrefix(vector<string> &A) {
    string x=A[0];
    string y="";
    for(int i=1;i<A.size();i++){
        y="";
        for(int j=0;j<x.size();j++){
            if(x[j]==A[i][j])
                y+=x[j];
            else
                break;
        }
        x=y;
    }
    return x;
}

