#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int m,n,count=0;
	    cin>>m>>n;
	    int a1[m],a2[n];
	    unordered_set<int> s;
	    for(int i=0;i<m;i++){
            cin>>a1[i];
            s.insert(a1[i]);
	    }
	    for(int i=0;i<n;i++)
            cin>>a2[i];
	    for(int i=0;i<n;i++){
            if(s.find(a2[i])==s.end())
                continue;
            else
                count++;
	    }
	    if(count==n)
	        cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
	}
	return 0;
}
