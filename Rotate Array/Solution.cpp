using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n,d;
	    cin>>n>>d;
	    int a[n],b[n],j;
	    d=n-d;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        j=i;
	        if(j>=n-d){
	            j=j-n;
	        }
	        b[j+d]=a[i];
	    }
	    for(int i=0;i<n;i++){
	        cout<<b[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
