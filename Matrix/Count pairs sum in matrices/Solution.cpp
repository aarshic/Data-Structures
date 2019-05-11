#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
	    int a[n][n],b[n][n];
	    vector<int> v1,v2;
	    for(int i=0;i<n;i++){
	        for(int j=0;j<n;j++){
	            cin>>a[i][j];
	            v1.push_back(a[i][j]);
	        }
	    }
        for(int i=0;i<n;i++){
	        for(int j=0;j<n;j++){
	            cin>>b[i][j];
	            v2.push_back(b[i][j]);
	        }
	    }
	    int count=0;
	    for(int i=0;i<v1.size();i++){
	        for(int j=0;j<v2.size();j++){
	            if(v1[i]+v2[j]==x){
	                count++;
	            }
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
