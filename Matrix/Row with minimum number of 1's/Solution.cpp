#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    int a[n][m],count[n],max=0,maxi=0;
	    for(int i=0;i<n;i++){
	        count[i]=0;
	        for(int j=0;j<m;j++){
	            cin>>a[i][j];
	            if(a[i][j]==1)
	                count[i]++;
	        }
	        if(count[i]>max){
	            max=count[i];
	            maxi=i;
	        }
	    }
	    int min=max,index=0,flag=0;
	    for(int i=0;i<n;i++){
	        if(min>count[i] && count[i]>0){
	            min=count[i];
	            index=i;
	            flag=1;
	        }
	        if(n==1)
	            flag=1;
	    }
	    if(min==max && max>0)
	        flag=1;
	    if(flag==0)
	        cout<<-1<<endl;
        else
	        cout<<index<<endl;
	}
	return 0;
}
