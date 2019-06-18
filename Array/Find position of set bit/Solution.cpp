#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
    	int n;
    	cin>>n;
    	int m=n,k=0,flag=0,index=0,count=0;
    	vector<int> v;
    	while(m>0){
    	    k=(10*k)+m%2;
    	    v.push_back(k);
    	    m=m/2;
    	}
    	int l=v.size(),j=0;
    	while(j<l){
    	    if(v[j]%10==1){
    	        index=j+1;
    	        count++;
    	        flag=1;
    	    }
    	    j++;
    	}
    	if(flag==0 || count>1)
    	    cout<<-1<<endl;
	    else
            cout<<index<<endl;
	}
	return 0;
}
