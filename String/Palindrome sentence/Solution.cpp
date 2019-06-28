int Solution::isPalindrome(string A){
    vector<char> v;
    for(int k=0;k<A.length();k++){
        if((A[k]>=48 && A[k]<=57) || (A[k]>=65 && A[k]<=90) || (A[k]>=97 && A[k]<=122))
            v.push_back(tolower(A[k]));
    }
    int i=0,j=v.size()-1,flag=0;
    while(i<=j){
        if(v[i]!=v[j]){
            flag=1;
            break;
        }
        i++;
        j--;
    }
    if(flag==0)
        return 1;
    else
        return 0;
}

