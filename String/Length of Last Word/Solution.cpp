int Solution::lengthOfLastWord(const string A){
    int n=A.length(),count=0;
    for(int i=n-1;i>=0;i--){
        if(A[i]==' ')
            break;
        else
            count++;
    }
    return count++;
}

