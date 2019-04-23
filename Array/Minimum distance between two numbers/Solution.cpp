long long minDist(long long arr[], long long n, long long x, long long y)
{  
    //add code here.
    int locationx[n]={n},locationy[n]={n},a[n]={n};
    int flagx=0,flagy=0,flag=0,valx,valy,count=0,j=0,k=0;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            flagx=1;
            locationx[j]=i;
            j++;
        }
        if(arr[i]==y){
            flagy=1;
            locationy[k]=i;
            k++;
        }
    }
    int l=0;
    for(int c=0;c<j;c++){
        for(int b=0;b<k;b++){
            a[l]=(locationx[c]-locationy[b]);
            l++;
        }
    }
    for(int w=0;w<l;w++){
        if(a[w]<0){
            a[w]=a[w]*(-1);
        }
    }
    int min=a[0];
    for(int i=1;i<l;i++){
        if(min>a[i]){
            min=a[i];
        }
    }
    if(flagx==0 || flagy==0){
        return -1;
    }
    return min;
}
