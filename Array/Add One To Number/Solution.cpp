vector<int> Solution::plusOne(vector<int> &A) {
    int flag=0,n=A.size();
    if(n==0)
        A.push_back(1);
    else{
        if(A[n-1]<9)
            A[n-1]+=1;
        else{
            for(int i=n-1;i>=0;i--){
                if(A[i]<9){
                    A[i]+=1;
                    flag=1;
                    break;
                }
                if(A[i]>=9){
                    A[i]=0;
                }
            }
            if(flag==0){
                A.push_back(A[n-1]);
                for(int i=0;i<n-1;i++){
                    A[i+1]=A[i];   
               } 
               A[0]=1;
            }
        }
        for(int i=0;i<A.size();i++){
            if(A[i]>0)
                break;
            if(A[i]==0)
                A.erase(A.begin()+i);
            i--;
        }
    }
    return A;
}

