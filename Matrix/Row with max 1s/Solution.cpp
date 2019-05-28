#include <bits/stdc++.h>
using namespace std;

int main(){
	//code
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    int a[n][m];
	    int count[n]={0},max=-1,index=-1;
	    for(int i=0;i<n;i++){
	        for(int j=0;j<m;j++){
	            cin>>a[i][j];
	            if(a[i][j]==1)
	                count[i]++;
	        }
	        if(max<count[i]){
	            max=count[i];
	            index=i;
	        }
	    }
	    cout<<index<<endl;
	}
	return 0;
}
