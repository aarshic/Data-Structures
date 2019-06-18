#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    int a[n],j=0;
	    for(int i=0;i<n;i++)
	        cin>>a[i];
        vector<int> sum(n,0);
        for(int i=0;i<k;i++)
            sum[j]+=a[i];
        for(int i=1;i<n-k+1;i++){
            j++;
            sum[j]=sum[j-1]-a[i-1]+a[i+k-1];
        }
        int max=sum[0];
        for(int i=0;i<sum.size();i++){
            if(max<sum[i])
                max=sum[i];
        }
        cout<<max<<endl;
	}
	return 0;
}
