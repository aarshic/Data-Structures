#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n],num=0,flag=0;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int diff=a[1]-a[0];
	    if(n>2){
	        int diff1=a[1]-a[0];
	        int diff2=a[2]-a[1];
	        if(diff1!=diff2){
	            diff=min(diff1,diff2);
	        }
	    }
	    for(int i=0;i<n;i++){
	        if(a[i+1]-a[i]!=diff){
	            num=i;
	            flag=1;
	            break;
	        }
	    }
	    if(n==2)
	        cout<<a[0]+(diff/2)<<endl;
	    else if(flag==1)
	        cout<<a[num]+diff<<endl;
        else
            cout<<"-1"<<endl;
	}
	return 0;
}
