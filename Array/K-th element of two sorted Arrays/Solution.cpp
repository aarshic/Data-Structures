#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    long int n,m,k;
	    cin>>n>>m>>k;
	    long int a[n],b[m];
	    int c[n+m]={0};
	    for(long int i=0;i<n;i++){
	        cin>>a[i];
	        c[i]=a[i];
	    }
        for(long int i=0;i<m;i++){
	        cin>>b[i];
	        c[n+i]=b[i];
        }
        sort(c,c+n+m);
        cout<<c[k-1]<<endl;
	}
	return 0;
}
