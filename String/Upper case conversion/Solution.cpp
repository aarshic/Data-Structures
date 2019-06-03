#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
	    char s[1000];
	    cin.getline(s,1000);
	    int n=strlen(s);
	    s[0]=toupper(s[0]);
	    for(int i=1;i<n;i++){
	        if((int)s[i]>=97 && (int)s[i]<=122){
                	if(s[i-1]==' ')
                	    s[i]=toupper(s[i]);
	        }
	    }
	    cout<<s<<endl;
	}
	return 0;
}
