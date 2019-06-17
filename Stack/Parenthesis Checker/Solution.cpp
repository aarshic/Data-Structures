#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
        string s;
        cin>>s;
        stack<char> stk;
        int flag=0;
        if(s.length()%2!=0)
            flag=1;
        else{
            for(int i=0;i<s.length();i++){
                if(s[i]=='[' || s[i]=='(' || s[i]=='{')
                    stk.push(s[i]);
                else if(!stk.empty()){
                    if(s[i]==']'){
                        if(stk.top()=='[')
                            stk.pop();
                        else{
                            flag=1;
                            break;
                        }
                    }
                    else if(s[i]==')'){
                        if(stk.top()=='(')
                            stk.pop();
                        else{
                            flag=1;
                            break;
                        }
                    }
                    else if(s[i]=='}'){
                        if(stk.top()=='{')
                            stk.pop();  
                        else{
                            flag=1;
                            break;
                        }
                    }
                    else
                        flag=1;
                }
            }
        }
        if(!stk.empty() || flag==1)
            cout<<"not balanced"<<endl;
        else
            cout<<"balanced"<<endl;
	}
	return 0;
}
