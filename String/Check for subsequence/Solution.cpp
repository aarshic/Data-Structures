#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    string a,b;
	    cin>>a>>b;
        int n=a.length(),m=b.length(),count=n,k=0;
	    for(int i=0;i<n;i++){
	        for(int j=k;j<m;j++){
	            if(a[i]==b[j]){
	                count--;
	                k=j+1;
	                break;
	            }
	        }
	    }
	    if(count==0)
	        cout<<1<<endl;
	    else
	        cout<<0<<endl;
	}
	return 0;
}
