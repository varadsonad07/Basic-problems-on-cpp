#include<iostream>

int main(){
	int num;
	int i;
	int tables=0;
	std::cout<<"enter numbers \n";
		std::cin>>num ;
	
	
	for(i=1;i<=10;i++){
		tables=num*i;
		std::cout<<"table is "<<tables<<"\n";

	}
}
