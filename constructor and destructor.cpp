#include<iostream>
using namespace std;

class circle{
	private :
		int radius;
		float area;
		float circum;
		
		public:
			int GetArea(){
				area = 3.14 * radius * radius;
				return area;
			}
			
			int GetCircum(){
				circum = 2 * 3.14 * radius;
			}
			
			circle(){
				cout<<"Default constructor is called"<<endl;
				radius = 2;
			}
			
			circle(int x){
				cout<<"Parameterized constructor called"<<endl;
				radius = x;
			}
			
			circle(const circle &obj){
				cout<<"Copy constructor is called"<<endl;
				radius = obj.radius;
			}
			
			~circle(){
				cout<<"Destructor is called"<<endl;
			}
			
			
};

int main(){
	circle c1;
	cout<<"Area of default constructor is : "<<c1.GetArea()<<endl;
	cout<<"Circumference of default constructor is : "<<c1.GetCircum()<<endl;
	cout<<"\n";
	
	{
		circle c2(3);
	cout<<"Area of parameterized constructor is : "<<c2.GetArea()<<endl;
	cout<<"Circumference of parameterized constructor is : "<<c1.GetCircum()<<endl;
	cout<<"\n";
	}
	
	
	

}
