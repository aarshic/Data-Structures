#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int flag=0,index=0;
	    for(int i=0;i<s.size();i++){
	        if(s[i]=='1'){
	            index=i;
	            flag=1;
	        }
	    }
	    if(flag==0)
	        cout<<-1<<endl;
	    else
	        cout<<index<<endl;
	}
	return 0;
}
