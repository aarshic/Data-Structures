#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n;
	    int a[n],index=0,flag=0;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    cin>>k;
	    for(int i=0;i<n;i++){
	        if(a[i]==k){
	            index=i;
	            flag=1;
	            break;
	        }
	    }
	    if(flag==1)
	        cout<<index<<endl;
        else
            cout<<"-1"<<endl;
	}
	return 0;
}
