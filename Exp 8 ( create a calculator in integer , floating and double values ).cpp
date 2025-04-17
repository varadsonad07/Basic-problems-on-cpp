#include<iostream>
using namespace std;

// fing max of two numbers

template <typename T>
T Findmax(T a , T b){
	return (a > b) ? a : b;
}

// create a calculator ( operations like add ,  subtraction ,  multiply , divsion)

template <typename T>
class calculator{
	private:
		T num1 ,  num2;
	public:
		calculator (T a , T b) : num1(a) , num2(b) {}
		
		T add() { return num1 + num2; }
		T subtraction() { return num1 - num2; }
		T multiply() { num1 * num2; }
		T division() {
		if (num2 != 0){
			return num1 / num2;
		}
		else{
			cout<<"it is not divisible by 0";
			
		}
		}
};


int main(){
	 int a = 5 , b = 10 ;
	cout<<"max of two numbers is : "<<	Findmax(a , b) << endl;

// using integer values
	calculator <int> intCalc(5,10);
	cout<<"\nFOR INTEGER VALUE : " << endl;
	cout<< "addition of 5 + 10 = " << intCalc.add() << endl;
	cout<< "subtraction of 5 - 10 = " << intCalc.subtraction() << endl;
	cout<< "multiplication of 5 * 10 = " << intCalc.multiply() << endl;
	cout<< "division of of 5 / 10 = " << intCalc.division() << endl;

// using folating values
	calculator <float> floatCalc(2.5f , 5.2f);
	cout<<"\nFOR FLOATING VALUE : " << endl;
	cout<< "addition of  2.5 + 5.2 = " << floatCalc.add() << endl;
	cout<< "subtraction of  2.5 - 5.2 = " << floatCalc.subtraction() << endl;
	cout<< "multiplication of 2.5 * 5.2 = " << floatCalc.multiply() << endl;
	cout<< "division of of  2.5 / 5.2 = " << floatCalc.division() << endl;

//using double values
	calculator <double> doubleCalc(8.75 , 4.25);
	cout<<"\nFOR DOUBLE VALUE : " << endl;
	cout<< "addition of  8.75 + 4.25 = " << doubleCalc.add() << endl;
	cout<< "subtraction of  8.75 - 4.25 = " << doubleCalc.subtraction() << endl;
	cout<< "multiplication of8.75 * 4.25 = " << doubleCalc.multiply() << endl;
	cout<< "division of of  8.75 / 4.25 = " << doubleCalc.division() << endl;
	
	return 0;


}
