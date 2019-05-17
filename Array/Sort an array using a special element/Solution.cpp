#include <iostream>
using namespace std;

void swap(int *a,int *b){
    int *temp;
    temp=a;
    a=b;
    b=temp;
}

int main() {
	int a[] = {1,5,4,999,3,2};
	int len = sizeof(a)/sizeof(a[0]);
	for(int i=0;i<len;i++){
	    if(a[i]==999){
	        for(int j=0;j<len;j++){
	            if(a[j]==i){
	                swap(a[j],a[i]);
	                i=-1;
	            }
	        }
	    }
	}
	for(int i=0;i<len;i++){
	    a[i]=a[i+1];
	}
	a[len-1]=999;
	for(int i=0;i<len;i++){
	    cout<<a[i]<<" ";
	}
	return 0;
}
