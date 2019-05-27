#include <bits/stdc++.h>
using namespace std;

int main(){
	//code
	int t;
	cin>>t;
	while(t--){
	    long int n;
	    cin>>n;
	    long int a[n],m[n+1]={0};
	    for(int i=0;i<n;i++){
            cin>>a[i];
            m[a[i]]++;
	    }
	    for(int i=1;i<=n;i++)
            cout<<m[i]<<" ";
	    cout<<endl;
	}
	return 0;
}
