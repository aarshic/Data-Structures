#include <bits/stdc++.h>
using namespace std;

int main(){
	//code
	int t;
	cin>>t;
	while(t--){
	    int r,c;
	    cin>>r>>c;
	    int a[r][c];
	    vector<int> v;
	    for(int i=0;i<r;i++){
	        for(int j=0;j<c;j++){
	            cin>>a[i][j];
	            v.push_back(a[i][j]);
	        }
	    }
	    sort(v.begin(),v.end());
	    cout<<v[v.size()/2]<<endl;
	}
	return 0;
}
