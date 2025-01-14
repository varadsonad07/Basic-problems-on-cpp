#include<iostream>

class arithmetic{
	public: // class is a public c
	int num1,num2; //declare two variables
	
	void get(){
		std::cout<<"num1 & num2 \n"; 
		std::cin>>num1>>num2; // input two numbers
	}
	void disp(){
		// basic arithmetic operation 
		int sum=num1+num2;
		int diff=num1-num2;
		int product=num1*num2;
        
        // display the output 
        std::cout<<"sum \t diff \t product \n";
        std::cout<<sum <<"\t"<<diff <<"\t" <<product;
    }
};
int main(){
	arithmetic s;
	s.get();
	s.disp();
	return 0;
}
