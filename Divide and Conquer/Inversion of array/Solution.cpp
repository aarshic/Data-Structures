#include <bits/stdc++.h>
using namespace std;

long int merge(int a[], int temp[], int l, int mid, int r){
    long int count=0;
    int i=l,j=mid,k=l;
    while((i<=mid-1) && (j<=r)){
        if(a[i]<=a[j])
            temp[k++]=a[i++];
        else{
            temp[k++]=a[j++];
            count+=mid-i;
        }
    }
    while(i<=mid-1)
        temp[k++]=a[i++];
    while(j<=r)
        temp[k++]=a[j++];
    for(int i=l;i<=r;i++)
        a[i]=temp[i];
    return count;
}

long int _mergeSort(int a[], int temp[], int l, int r){
    int mid;
    long int count=0;
    if(r>l){
        mid=(l+r)/2;
        count=_mergeSort(a,temp,l,mid);
        count+=_mergeSort(a,temp,mid+1,r);
        count+=merge(a,temp,l,mid+1,r);
    }
    return count;
}

long int mergeSort(int a[], int n){
    int *temp=(int*)malloc(sizeof(int)*n);
    return _mergeSort(a,temp,0,n-1);
}

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    cout<<mergeSort(a,n)<<endl;
	}
	return 0;
}
