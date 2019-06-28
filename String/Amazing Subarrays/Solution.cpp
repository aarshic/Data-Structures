int Solution::solve(string A){
    int n=A.length(),count=0,k=0;
    for(int i=0;i<n;i++){
        k=0;
        if(A[i]=='a' || A[i]=='e' || A[i]=='i' || A[i]=='o' || A[i]=='u' || A[i]=='A' || A[i]=='E' || A[i]=='I' || A[i]=='O' || A[i]=='U'){
            for(int j=i;j<n;j++){
                if(A[j]==' ')
                    break;
                if(A[j]=='a' || A[j]=='e' || A[j]=='i' || A[j]=='o' || A[j]=='u' || A[j]=='A' || A[j]=='E' || A[j]=='I' || A[j]=='O' || A[j]=='U'){
                    k++;
                    i=j;
                }
                count+=k;
            }
        }
    }
    return count%10003;
}

