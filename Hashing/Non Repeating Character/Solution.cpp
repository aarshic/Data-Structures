#include <bits/stdc++.h>
using namespace std;

int main(){
	//code
	int t;
	cin>>t;
	while(t--){
	    int n,flag=0;
	    cin>>n;
	    string s;
	    cin>>s;
	   vector<int> m(26);
	    for(int i=0;i<n;i++)
            m[s[i]-'a']++;
	    for(int i=0;i<n;i++){
	        if(m[s[i]-'a']==1){
	            cout<<s[i]<<endl;
	            flag=1;
	            break;
	        }
	    }
	    if(flag==0)
            cout<<"-1"<<endl;
	}
	return 0;
}
