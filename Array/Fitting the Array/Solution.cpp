using namespace std;

int main() {
	//code
    	int t=1;
	cin>>t;
	for(int k=0;k<t;k++){
	    int n;
	    cin>>n;
	    int a[n],b[n];
	    //Input a[]
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    //Input b[]
	    for(int i=0;i<n;i++){
	        cin>>b[i];
	    }
	    //Sorting a[]
	    for(int i=0;i<n-1;i++){
	        for(int j=i+1;j<n;j++){
	            if(a[i]>a[j]){
	                swap(a[i],a[j]);
	            }
	        }
	    }
	    //Sorting b[]
	    for(int i=0;i<n-1;i++){
	        for(int j=i+1;j<n;j++){
	            if(b[i]>b[j]){
	                swap(b[i],b[j]);
	            }
	        }
	    }
	    int flag=0;
	    //Comparing a[] and b[]
	    for(int i=0;i<n;i++){
            if(a[i]<=b[i]){
                flag=1;
            }
            else{
                flag=0;
                break;
            }
	    }
	    if(flag==1){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}

	return 0;
}
