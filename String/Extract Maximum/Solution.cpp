#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
	    char s[200];
	    cin.getline(s,200);
	    int n=strlen(s),j=0;
	    vector<vector<int>> x;
	    x.push_back(vector<int>());
	    for(int i=0;i<n;i++){
	        if((int)s[i]>=48 && (int)s[i]<=57){
                x[j].push_back((int)s[i]-48);
                if(s[i+1]>=97 && s[i+1]<=122){
    	            j++;
    	            x.push_back(vector<int>());
    	        }
	        }
	    }
	    vector<int> y;
	    for(int i=0;i<x.size();i++){
	        int num=0;
            for(int k=0;k<x[i].size();k++){
                num=(10*num)+x[i][k];
            }
            y.push_back(num);
	    }
	    int max=y[0];
	    for(int i=0;i<y.size();i++){
	        if(max<y[i])
	            max=y[i];
	    }
	    cout<<max<<endl;
	}
	return 0;
}
