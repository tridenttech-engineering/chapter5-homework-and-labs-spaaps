//lab5-2.cpp - displays the total amount due
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	

	//integers and constants 
	const double DISCOUNT_RATE = 0.1;
	const double SHIP_CHG1 = 0.99;
	const double SHIP_CHG2 = 4.99;
	double amtowed = 0.0;
	char member = ' ';

	//input amountowed + membership 
	cout << "SUBTOTAL: ";
	cin >> amtowed;
	cout << "Premier member? please enter (Y/N): ";
	cin >> member;

	//subtract discount
	if (toupper(member) == 'Y')
		amtowed -= amtowed * DISCOUNT_RATE;

	
	//shipping data
	if (amtowed >= 100.0)
		amtowed += SHIP_CHG1;
	else
		amtowed += SHIP_CHG2;
	

	//display final amount 
	cout << fixed << setprecision(2);
	cout << "TOTAL owed: "
		<< amtowed << endl;


	
	return 0;
}	//end of main function