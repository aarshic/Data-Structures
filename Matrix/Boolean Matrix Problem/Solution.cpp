#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
	    int r,c;
	    cin>>r>>c;
	    int a[r][c],ai[r]={0},aj[c]={0};
	    for(int i=0;i<r;i++){
	        for(int j=0;j<c;j++){
	            cin>>a[i][j];
	            if(a[i][j]==1){
	                ai[i]=1;
	                aj[j]=1;
	            }
	        }
	    }
	    for(int i=0;i<r;i++){
	        if(ai[i]==1){
    	        for(int k=0;k<c;k++)
    	            a[i][k]=1;
	        }
	    }
	    for(int i=0;i<c;i++){
	        if(aj[i]==1){
    	        for(int k=0;k<r;k++)
    	            a[k][i]=1;
	        }
	    }
	    for(int i=0;i<r;i++){
	        for(int j=0;j<c;j++){
	            cout<<a[i][j]<<" ";
	        }
	        cout<<endl;
	    }
	}
	return 0;
}
