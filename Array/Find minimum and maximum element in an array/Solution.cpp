using namespace std;

int minval(int a[],int n){
    int min=a[0];
    for(int i=1;i<n;i++){
        if(min>a[i]){
            min=a[i];
        }
    }    
    return min;
}

int maxval(int a[],int n){
    int max=a[0];
    for(int i=1;i<n;i++){
        if(max<a[i]){
            max=a[i];
        }
    }    
    return max;
}

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int min=minval(a,n);
	    int max=maxval(a,n);
	    cout<<min<<" "<<max<<endl;
	}
	return 0;
}
