#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){
    double PrevBalance,Interest,Payment;
    double NewBalance;
    int i =1;
	cout << "Enter initial loan: ";
	cin >> PrevBalance;
	cout << "Enter interest rate per year (%): ";
	cin >> Interest;
	cout << "Enter amount you can pay per year: ";
	cin >> Payment;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	cout << fixed << setprecision(2);
	NewBalance = PrevBalance;
	while (NewBalance > 0.00){
    	cout << setw(13) << left << i++; 
    	cout << setw(13) << left << NewBalance;
    	cout << setw(13) << left << NewBalance*(Interest/100);
    	cout << setw(13) << left << NewBalance + NewBalance*(Interest/100);
    	if (NewBalance + NewBalance*(Interest/100) < Payment){
    	    cout << setw(13) << left << NewBalance + NewBalance*(Interest/100);
    	}
    	else{
    	    cout << setw(13) << left << Payment;
    	}
    	if (NewBalance + NewBalance*(Interest/100) < Payment){
    	    NewBalance = (NewBalance + NewBalance*(Interest/100))- (NewBalance + NewBalance*(Interest/100));
    	}
    	else{
    	    NewBalance = (NewBalance + NewBalance*(Interest/100))-Payment;
    	}
    	cout << setw(13) << left << NewBalance;
    	cout << "\n";
	}
	return 0;
}