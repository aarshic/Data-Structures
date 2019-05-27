#include <bits/stdc++.h>
using namespace std;

int max(int a[],int n){
    int max=a[0];
    for(int j=0;j<n;j++){
        if(a[j]>max)
            max=a[j];
    }
    return max;
}

int main(){
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n][n],b[n];
	    unordered_map<int,int> m;
	    for(int i=0;i<n;i++){
	        for(int j=0;j<n;j++){
	            cin>>a[i][j];
	            if(i==0){
	                b[j]=a[i][j];
	            }
	        }
	    }
	    int mx=max(b,n);
	    for(int i=0;i<n;i++){
	        int flag[mx+1]={0};
	        for(int j=0;j<n;j++){
	            if(flag[a[i][j]]==0){
	                m[a[i][j]]++;
	                flag[a[i][j]]=1;
	            }
	        }
	    }
	    int flag[mx+1]={0},count=0;
	    for(int j=0;j<n;j++){
	        if(m[a[0][j]]==n && flag[a[0][j]]==0){
	            count++;
	            flag[a[0][j]]=1;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
