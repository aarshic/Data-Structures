#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int h[n],prev=0;
	    for(int i=0;i<n;i++){
	        cin>>h[i];
	    }
	    int count=1;
	    for(int i=1;i<n;i++){
	        prev=max(prev,h[i-1]);
	        if(prev<h[i])
	            count++;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
