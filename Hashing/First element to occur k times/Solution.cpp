#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n,k,flag=0,num=0;
	    cin>>n>>k;
	    int a[n];
	    unordered_map<int,int> m;
	    for(int i=0;i<n;i++){
            cin>>a[i];
            m[a[i]]++;
	    }
	    for(int i=0;i<n;i++){
            if(m[a[i]]==k){
                cout<<a[i]<<endl;
                flag=1;
                break;
            }
	    }
	    if(flag==0)
	        cout<<-1<<endl;
	}
	return 0;
}
