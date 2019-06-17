int Solution::maxArr(vector<int> &A) {
    int flag=0,min1=INT_MAX,min2=INT_MAX,max1=INT_MIN,max2=INT_MIN;
    for(int i=0;i<A.size();i++){
        if(min1>A[i]-i)
            min1=A[i]-i;
        if(max1<A[i]-i)
            max1=A[i]-i;    
        if(min2>A[i]+i)
            min2=A[i]+i;
        if(max2<A[i]+i)
            max2=A[i]+i;    
    }
    if(abs(max1-min1)>=abs(max2-min2))
        return abs(max1-min1);
    return abs(max2-min2);
}

