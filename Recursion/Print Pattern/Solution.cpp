#include <bits/stdc++.h>
using namespace std;

void ptrn(int x, int n,int num,int flag){
    cout<<x<<" ";
    if(x==n && flag==1)
        return;
    if(x<=0 && flag==0){
        num=-1*num;
        flag=1;
    }
    x=x+num;
    ptrn(x,n,num,flag);
}

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int x=n,num=-5,flag=0;
        ptrn(x,n,num,flag);
        cout<<endl;
	}
	return 0;
}
