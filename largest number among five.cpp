#include<iostream>

int main(){
	int num[5];
	int i;
	int largest=0;
	std::cout<<"enter five numbers \n";
	for(i=0;i<5;i++){
		std::cin>>num[i] ;
	}
	
	for(i=0;i<5;i++){
		if(largest<num[i]){
			largest=num[i];
		}
	}
	std::cout<<"largest number is "<<largest;
}
