#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    int arr[n],index=0,flag=0;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    for(int i=0;i<n;i++){
	        if(arr[i]>=k){
	            index=i;
	            flag=1;
	            break;
	        }
	    }
	    if(k>=arr[n-1]){
	        index=n-1;
	        flag=1;
	    }
	    if(k<arr[0])
	        flag=0;
	    if(flag==1)
	        cout<<index<<endl;
        else
            cout<<"-1"<<endl;
	}
	return 0;
}
