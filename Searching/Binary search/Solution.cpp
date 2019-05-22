int bin_search(int A[], int left, int right, int k)
{
    for(int i=left;i<=right;i++){
        if(A[i]==k){
            return i;
        }
        if(A[(left+right)/2]>=k){
            right=(left+right)/2;
        }
        else{
            left=(left+right)/2;
        }
    }
    return -1;
}
