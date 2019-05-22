#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n],m=1000000;
		int ch[m]={0};
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<n;i++){
		    if(a[i]>0)
			ch[a[i]]++;
		}
		for(int i=1;i<m;i++){
		    if(ch[i]==0){
			cout<<i<<endl;
			break;
		    }
		}
	}
	return 0;
}
