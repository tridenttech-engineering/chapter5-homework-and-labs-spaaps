//hw5-12.cpp - displays the total owed
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	// my integers 
	double item1Price = 0.0;
	double item2Price = 0.0;
	double total = 0.0;

	//display price of item 1/2
	cout << "Item 1 price: ";
	cin >> item1Price;
	cout << "Item 2 price: ";
	cin >> item2Price;


	//if then statement for comparing item price 
	if (item1Price < item2Price)
		total = item1Price / 2 + item2Price;
	else
		total = item2Price / 2 + item1Price;


	//display total 
	cout << fixed << setprecision(2);
	cout << "Total: " << total << endl;

	
	return 0;
}	//end of main function