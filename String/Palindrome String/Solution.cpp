#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n,flag=0;
	    cin>>n;
	    char s[n];
	    for(int i=0;i<n;i++){
	        cin>>s[i];
	    }
	    for(int i=0,j=n-1;i<n/2,j>=n/2;i++,j--){
	        if(s[i]!=s[j]){
	            flag=1;
	            break;
	        }
	    }
	    if(flag==1){
	        cout<<"No"<<endl;
	    }
	    else{
	        cout<<"Yes"<<endl;
	    }
	}
	return 0;
}
