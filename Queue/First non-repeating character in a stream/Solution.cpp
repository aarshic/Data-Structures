#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
        int n;
        cin>>n;
        char x[n];
        queue<char> q;
        int a[26]={0};
        for(int i=0;i<n;i++){
            cin>>x[i];
            q.push(x[i]);
            a[(int)x[i]-'a']++;
            while(!q.empty()){
                if(a[(int)q.front()-'a']>1)
                    q.pop();
                else{
                    cout<<q.front()<<" ";
                    break;
                }
            }
            if(q.empty())
                cout<<-1<<" ";
	    }
        cout<<endl;
	}
	return 0;
}
