#include <iostream>
using namespace std;


int binarysearch(int A[],int q,int n){
	int left=0;
	int right=n-1;
	while(left<=right){
	int mid=(left+right)/2;
	if(A[mid]==q){
		return mid;
	}
	else if(A[mid]>q){
		right=mid-1;
	}
	else{
		left=mid+1;
	}
}
	return -1;
}


int main() {
	
	// your code here
	int n,q,A[1000];
	
    cin>>n>>q;
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}
	
	for(int i=0;i<q;i++){
		int x;	
		cin>>x;
	int k=binarysearch(A,x,n);
    cout<<k<<"\n";
}
	return 0;
}