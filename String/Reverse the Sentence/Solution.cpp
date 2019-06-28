void Solution::reverseWords(string &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n=A.length();
    vector<string> v;
    string s="";
    for(int i=0;i<n;i++){
        if(A[i]==' '){
            v.push_back(s);
            s="";
        }
        else
            s+=A[i];
    }
    v.push_back(s);
    string B;
    for(int i=v.size()-1;i>=0;i--){
        B+=v[i];
        if(v.size()>1 && i>0)
            B+=" ";
    }
    A=B;
}

