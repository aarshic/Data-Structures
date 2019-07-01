void Solution::sortColors(vector<int> &A) {
    int n=A.size();
    int c[3]={0};
    for(int i=0;i<n;i++)
        c[A[i]]++;
    int j=0;
    for(int i=0;i<n;i++){
        if(c[j]==0)
            j++;
        A[i]=j;
        c[j]--;
    }
}

