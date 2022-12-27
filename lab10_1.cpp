#include<iostream>
#include<cmath>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double loan;
	double interest;
	double payment;
	double percent;
	double total;
	double balance ;


	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> interest;
	cout << "Enter amount you can pay per year: ";
	cin >> payment;

	
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	int i=1;
	balance=loan;
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	while(balance != 0){
	percent = (loan*interest)/100.00;
	total = loan + percent ;
	if(total <= payment){
	payment = total ;

     }

	balance = total - payment;
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << i; 
	cout << setw(13) << left << loan;
	cout << setw(13) << left << percent;
	cout << setw(13) << left << total;
	cout << setw(13) << left << payment ;
	cout << setw(13) << left << balance;
	cout << "\n";	
	i++;
	loan=balance;
	}
	return 0;
}
