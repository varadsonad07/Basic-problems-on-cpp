#include<iostream>
 using namespace std;
class Demo{
	private:
		int *p;
		
	public:
		void getinfo(){
			cout<<*p<<endl;
		}
		
		void setinfo(int v){
			*this -> p = v;
		}
	
		
		Demo(int x){
			cout<<"Parameterrized constructor is clled"<<endl;
		    p = new int (x);
		    cout<<"\n";
		}
		
	    Demo(const Demo &obj){
	    	p = obj.p;
	    	cout<<"SHALLOW Copy constructor is clled"<<endl;
	    	p = new int (*(obj.p));
		    cout<<"DEEP Copy constructor is clled"<<endl;
		}
		
		~Demo(){
			cout<<"destructor is called"<<endl;
		}
};

int main(){
	
	Demo c2(111);
	c2.getinfo();
	
	Demo c3(c2);
	c3.getinfo();
	
	c3.setinfo(222);
	c3.getinfo();
	
	c2.getinfo();
}
