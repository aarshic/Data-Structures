#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007

long long int power(long long int x, long long int y){ 
    if(x==0 && y==0)
        return 1;
    else if(x==0)
        return 0;
    else if(y==0 || x==1) 
        return 1; 
    long long int temp=power(x,y/2); 
    long long int t=((temp%mod)*(temp%mod))%mod;
    if(y%2==0)
        return t%mod;
    else
        return ((x%mod)*(t%mod))%mod; 
} 

int main(){
	int t;
	cin >> t;
	while(t--){
	    long long int n;
	    cin>>n;
	    long long int k=n,r=0;
	    while(k>0){
	        r=(10*r)+k%10;
	        k=k/10;
	    }
	    cout<<power(n,r)<<endl;
	}
	return 0;
}
