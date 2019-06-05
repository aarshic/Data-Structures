using namespace std;

int num(string b,int n){
    int m=0,j=0;
    for(int i=n-1;i>=0;i--){
        j=n-i-1;
        m=m+((int)b[i]-48)*pow(2,j);
    }
    return m;
}

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    string b1,b2;
	    cin>>b1>>b2;
	    int n1=b1.length(),n2=b2.length();
	    int num1=num(b1,n1);
	    int num2=num(b2,n2);
	    cout<<num1*num2<<endl;
	}
	return 0;
}
