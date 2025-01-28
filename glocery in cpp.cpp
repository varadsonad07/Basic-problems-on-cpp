#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	cout<<"--------- WELCOMNE ---------"<<endl;
	
	int n,i,total=0;
	cout<<"enter the number of products"<<endl;
	cin>>n;
	int a[n];
	string name[n];
	int amount[n];
	
	cout<<"----------------------------------"<<endl;

	cout<<"enter the products and price"<<endl;
	for(i=0;i<n;i++){
		cin>>name[i];
		cin>>amount[i];
		total+=amount[i];
	}
	
	cout<<"----------------------------------"<<endl;
 
    for(i=0;i<n;i++){
    	cout<<setw(7)<<name[i]<<setw(5)<<amount[i]<<endl;
	}
	
	cout<<"----------------------------------"<<endl;
	
	cout<<"total bill ="<<total<<endl;
	
	cout<<"--------- THANK YOU ---------"<<endl;


}
