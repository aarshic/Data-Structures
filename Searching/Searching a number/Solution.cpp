#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    long int n,k;
	    cin>>n>>k;
	    long int a[n],flag=0,index=0;
        for(int i=0;i<n;i++){
	        cin>>a[i];
	        if(a[i]==k && flag==0){
	            index=i+1;
	            cout<<index<<endl;
	            flag=1;
	        }
	    }
	    if(flag==0)
	        cout<<-1<<endl;
	}
	return 0;
}
