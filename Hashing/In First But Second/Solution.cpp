#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n,m,flag=0,num=0;
	    cin>>n>>m;
	    long int a[n],b[m];
	    unordered_set<int> s;
	    for(int i=0;i<n;i++)
            cin>>a[i];
	    for(int i=0;i<m;i++){
            cin>>b[i];
            s.insert(b[i]);
	    }
	    for(int i=0;i<n;i++){
            if(s.find(a[i])==s.end()){
                cout<<a[i]<<" ";
                flag=1;
	        }
	    }
	    if(flag==0)
	        cout<<-1;
        cout<<endl;
	}
	return 0;
}
