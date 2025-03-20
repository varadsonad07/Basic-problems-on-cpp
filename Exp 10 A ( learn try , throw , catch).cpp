#include<iostream>
using namespace std;

int main(){
	float a,b,c;
	cout<<"Enter two numbers for division : "<<endl;
	cin>>b>>c;
	try{
		if(c == 0) throw "Divide by zero error!";
		a = b/c ;
		cout<<"Answer = "<<a;
	}
	
	catch (const char *str){
		cout<<"Exception : "<<str;
	}
	return 0;
}

