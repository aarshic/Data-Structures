#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
    	long long int n;
    	int flag=0;
    	cin>>n;
    	while(n>1){
    	    if(n%2!=0){
    	        flag=1;
    	        break;
    	    }
    	    n=n/2;
    	}
    	if((flag==0 || n==1) && n!=0)
    	    cout<<"YES"<<endl;
	    else
            cout<<"NO"<<endl;
	}
	return 0;
}
