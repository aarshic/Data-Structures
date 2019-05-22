#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
    cin.ignore();
	while(t--){
	    string s;
	    getline(cin,s);
	    int k;
	    cin>>k;
        cin.ignore();
	    for(int i=0;i<s.size();i++){
	        if(s[i]==' ' && (s[i+1]>=65 && s[i+1]<=122)){
	            cout<<"%20";
	        }    
	        else{
	            cout<<s[i];
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
