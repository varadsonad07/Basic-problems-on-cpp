#include<iostream>
using namespace std;
int main(){
	int i,j,n,target;
	cout<<"enter range of array list \n";
	cin>>n;
	int a[n];
	cout<<"enter array elements \n";
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	
	cout<<"target is \n";
	cin>>target;
	
	int mid = 0 , low = 0 , high = n-1;
	while(low<=high){
	
	mid = (low+high)/2;
	
	if(target==a[mid]){
		cout<<"find target at index \n"<<mid;
	}
	if(a[mid]>target){
		high=mid-1;
	}
	else{
		low=mid+1;
	}
   }
}
