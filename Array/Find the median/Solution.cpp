using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    if(n%2==0){
	        m=(a[(n/2)-1]+a[n/2])/2;
	    }
	    else{
	        m=a[(n-1)/2];
	    }
	    cout<<floor(m)<<endl;
	}
	return 0;
}
