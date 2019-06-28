string Solution::countAndSay(int A){
    if(A==1)
        return "1";
    if(A==2)
        return "11";
    string s="11",x="";
    int count=1,flag=0;
    for(int i=0;i<A-1;i++){
        x=s;
        s="";
        count=1,flag=0;
        for(int j=0;j<x.length()-1;j++){
                if(x[j]==x[j+1]){
                    count++;
                    flag=1;
                }
                else{
                    s+=to_string(count);
                    s+=x[j];
                    count=1;
                    flag=0;
                }
        }
        if(flag==0)
            s+=x[x.length()-1];
        if(flag==1){
            s+=to_string(count);
            s+=x[x.length()-1];
        }
    }
    return s;
}

