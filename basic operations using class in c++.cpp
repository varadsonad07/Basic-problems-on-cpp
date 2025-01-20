#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

class operations{
	public:
		void sum(){
		int sum,n1,n2;
		cout<<"enter two numbers \n";
		cin>>n1>>n2;
		sum=n1+n2;
		cout<<"sum is : \n"<<sum<<"\n";
    	}
    	
    	void swap(){
    		int n1 ,n2;
    		cout<<"enter two numbers \n";
	    	cin>>n1>>n2;
    		int temp;
    		temp=n1;
    		n1=n2;
    		n2=temp;
    		cout<<"swaping numebr is ; \n"<<n1<<"\n"<<n2<<"\n";
		}
		
		void fact(){
			int num,factorial=1,i;
			cout<<"enter number \n";
			cin>>num;
			if(num==0 || num==1){
				cout<<"factorial is 1";
			}
			else{
				for(i=2;i<=num;i++){
				factorial*=i;
			}
			cout<<"factorial is :"<<factorial;
		    }
		}
		
};

int main(){
	operations s;
	s.sum();
	s.swap();
	s.fact();
	return 0;
}
