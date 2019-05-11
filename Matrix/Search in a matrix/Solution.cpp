#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n,m,flag=0;
	    cin>>n>>m;
	    int a[n][m];
	    for(int i=0;i<n;i++){
	        for(int j=0;j<m;j++)
	            cin>>a[i][j];
	    }
	    int x;
	    cin>>x;
	    for(int i=0;i<n;i++){
	        if(a[i][0]<=x && a[i+1][0]>x){
	            for(int j=0;j<m;j++){
	                if(a[i][j]==x){
	                    flag=1;
	                    break;
	                }
	            }
	        }
	        if(a[n-1][0]<=x){
	            for(int j=0;j<m;j++){
	                if(a[i][j]==x){
	                    flag=1;
	                    break;
	                }
	            }
	        }
	        if(flag==1)
	            break;
	    }
	    if(flag==1)
	        cout<<1<<endl;
        else
            cout<<0<<endl;
	}
	return 0;
}
