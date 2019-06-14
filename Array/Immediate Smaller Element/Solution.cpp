#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
    	int n;
    	cin>>n;
    	int a[n];
    	for(int i=0;i<n;i++){
    	    cin>>a[i];
    	}
    	int j=0;
    	for(int i=0;i<n-1;i++){
    	    j=i+1;
    	    if(a[i]>a[j])
    	        cout<<a[j]<<" ";
            else
                cout<<-1<<" ";
    	}
    	cout<<-1<<endl;
	}
	return 0;
}
