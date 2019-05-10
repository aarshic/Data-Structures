#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n][n],b[n][n];
	    for(int i=0;i<n;i++){
	        for(int j=0;j<n;j++)
	            cin>>a[i][j];
	    }
	    for(int i=0;i<n;i++){
            if(i%2==0){
                int j=0;
                while(j<n){
                    cout<<a[i][j]<<" ";
                    j++;
                }
            }
            else{
                int j=n-1;
                while(j>=0){
                    cout<<a[i][j]<<" ";
                    j--;
                }
            }
	    }
	    cout<<endl;
	}
	return 0;
}
