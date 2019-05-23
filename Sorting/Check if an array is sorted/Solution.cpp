#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int c[n],flag=0;
	    for(int i=0;i<n;i++)
	        cin>>c[i];
        for(int i=1;i<n;i++){
            if(c[i]<c[i-1])
                flag=1;
        }
        if(flag==1)
            cout<<0<<endl;
        else
            cout<<1<<endl;
	}
	return 0;
}
