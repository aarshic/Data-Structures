#include <bits/stdc++.h>
using namespace std;

int main(){
	//code
	int t;
	cin>>t;
	while(t--){
	    int n,flag=0;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
        for(int i=1;i<n;i++){
            if(a[i]<=a[i-1]){
                flag=1;
                break;
            }
        }
        if(flag==1)
            cout<<0<<endl;
        else
            cout<<1<<endl;
	}
	return 0;
}
