#include <iostream>
using namespace std;

int toh(int n, int from, int to, int left, int count){
    if(n==1){
        cout<<"move disk 1 from rod "<<from<<" to rod "<<to<<endl;
        count++;
        return count;
    }
    count=toh(n-1,from,left,to,count);
    cout<<"move disk "<<n<<" from rod "<<from<<" to rod "<<to<<endl;
    count++;
    count=toh(n-1,left,to,from,count);
}

int main(){
	//code
	int t;
	cin>>t;
	while(t--){
	    int n,count=0;
	    cin>>n;
	    int c=toh(n,1,3,2,count);
	    cout<<c<<endl;
    }
	return 0;
}
