#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n-1],num=0,sum=0,tsum=0;
	    for(int i=0;i<n-1;i++){
	        cin>>a[i];
	        sum+=a[i];
	    }
	    tsum=n*(n+1)/2;
	    num=tsum-sum;
	    cout<<num<<endl;
	}
	return 0;
}
