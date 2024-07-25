//lab5-3.cpp - displays the total amount due
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{


	//CONSTANTS AND INTEGERS 
	const double MEMBER_DISCOUNT_RATE = 0.1;
	const double NONMEMBER_DISCOUNT_RATE = 0.05;
	double discount = 0.0;
	const double SHIP_CHG1 = 0.99;
	const double SHIP_CHG2 = 4.99;
	double amtowed = 0.0;
	char member = ' ';


	//input items
	cout << "SUBTOTAL:  ";
	cin >> amtowed;
	cout << "Premier member? please enter (Y/N): ";
	cin >> member;

	
	//subtract discount, if appropriate
	if (toupper(member) == 'Y')
		discount = amtowed * MEMBER_DISCOUNT_RATE;
	
	else
		discount = amtowed * NONMEMBER_DISCOUNT_RATE;
	amtowed -= discount;

	
	//add shipping
	if (amtowed >= 100.0)
		amtowed += SHIP_CHG1;
	
	else
		amtowed += SHIP_CHG2;

	
	//display final amount owed
	cout << fixed << setprecision(2);
	cout << "TOTAL owed: "
		<< amtowed << endl;

	
	return 0;
}	//end of main function