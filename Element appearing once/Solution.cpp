#include <vector>
using namespace std;

int main() {
	//code
	int t=0;
	cin>>t;
	for(int k=0;k<t;k++){
	    int n=0;
	    cin>>n;
	    int a[n];
	    vector<int> count={0};
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int i=0;
	    while(i<n){
	        if(a[i]==a[i+1]){
	            i=i+2;
	        }
	        else{
	            cout<<a[i]<<endl;
	            break;
	        }
	    }
	}
	return 0;
}
