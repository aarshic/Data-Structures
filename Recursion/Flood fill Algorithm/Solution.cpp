#include <bits/stdc++.h>
using namespace std;

void floodfill(vector<vector<int>> &a, int x, int y, int c1, int c2){
    if(x<0 || x>=a.size() || y<0 || y>=a[0].size())
        return;
    if(a[x][y]!=c1)
        return;
    a[x][y]=c2;
    floodfill(a,x+1,y,c1,c2);
    floodfill(a,x-1,y,c1,c2);
    floodfill(a,x,y+1,c1,c2);
    floodfill(a,x,y-1,c1,c2);
}

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n,m,w;
	    cin>>n>>m;
	    vector<vector<int>> a,b(n);
	    for(int i=0;i<n;i++){
	        a.push_back(vector<int>());
	        for(int j=0;j<m;j++){
	            cin>>w;
	            a[i].push_back(w);
	        }
	    }
	    int x,y,k;
	    cin>>x>>y>>k;
	    int c1=a[x][y];
	    floodfill(a,x,y,c1,k);
	    for(int i=0;i<n;i++){
	        for(int j=0;j<m;j++){
	            cout<<a[i][j]<<" ";
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
