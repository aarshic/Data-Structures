#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int c[26]={0},flag=0,l=(int)'a';
	    for(int i=0;i<s.size();i++){
	        c[(int)s[i]-l]++;
	        if(c[(int)s[i]-l]==2){
	            flag=1;
	            cout<<s[i]<<endl;
	            break;
	        }
	    }
	    if(flag==0){
	        cout<<-1<<endl;
	    }
	}
	return 0;
}
