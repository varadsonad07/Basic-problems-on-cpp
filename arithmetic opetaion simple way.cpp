#include<iostream>


int main(){
	// declare two variables
	int num1,num2;
	
	// input the numbers
	std::cout<<"num1 & num2 \n";
	std::cin>>num1>>num2;
	
	// basic arithmetic operation
	int sum=num1+num2;
	int diff=num1-num2;
	int product=num1*num2;
	
	// display the output
	std::cout<<"sum , diff & product \n";
	std::cout<<sum<<"\t"<<diff<<"\t"<<product;

}
