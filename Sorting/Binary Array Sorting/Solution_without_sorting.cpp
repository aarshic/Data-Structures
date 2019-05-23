#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n],b[n],flag=0;
	    for(int i=0;i<n;i++)
	        cin>>a[i];
        int j=0,k=n-1;
        for(int i=0;i<n;i++){
            if(a[i]==1){
                b[k]=a[i];
                k--;
            }
            else{
                b[j]=a[i];
                j++;
            }
        }
        for(int i=0;i<n;i++){
            cout<<b[i]<<" ";
        }
        cout<<endl;
	}
	return 0;
}
