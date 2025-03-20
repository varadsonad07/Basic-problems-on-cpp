#include<iostream>
using namespace std;

class Bookingseats{
	int Availableseats ;
	
	public:
		
		Bookingseats(int Seats){
			Availableseats = Seats;
			cout<<"welcome to bus booking service"<<endl;
			cout<<"AvailableSeats : "<<Availableseats<<endl;
		}
		
		void BookSeats(int seatsTObook){
			cout<<"tour booking seats is : "<<seatsTObook<<endl;
			try{
				if(seatsTObook > Availableseats){
					 throw "All seats is full";
					 cout<<Availableseats<<endl;
				}
			    
	            else{
	            	cout<<"Your all seats is successful booked"<<endl;
				}
			Availableseats -= seatsTObook;
			cout<<"AvailableSeats : "<<Availableseats<<endl;
				}
				
				catch (const char* store){
					cout<<"Exception : "<<store<<endl;
				}
		}
		
		~Bookingseats(){
			cout<<"Thank you for using our service"<<endl;
		}
};

int main(){
	Bookingseats number(15);
	number.BookSeats(3);
	number.BookSeats(2);
	number.BookSeats(9);
}
