#include<iostream>
using namespace std;

int main(){
	int i , j , n , temp , target ;
	cout<<"enter array size \n";
		cin>>n;
	int a[n];
	cout<<"enter array elements \n";
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"target is \n";
	cin>>target;
	
	for(i=0;i<n;i++){
		if(target==a[i]){
			cout<<"target is found at \n"<<i;
		}
 	}
}
