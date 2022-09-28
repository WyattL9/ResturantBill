// Wyatt Lester
// Date: 08/26/22
// Program Title: ResturantBill
// Program Description: This program calculates the total food bill with tip and tax

#include <iostream>
#include <string>


using namespace std;

// Named constants
const double TAX_PERCENT = 0.095;

int main()
{

	// Variable declaration
	double foodBill;
	double tip;
	double tax;
	double total;

	//Program title and description for the user
	cout << "Program Title: ResturantBill" << endl;
	cout << "Program Description: This program calculates the total food bill with tip and tax" << endl; 
	cout << endl;

	// User input
	cout << "What is your food bill? (excluding the tax and tip)" << endl;
	cin >> foodBill;
	cout << endl;

	cout << "Choose your tip: " << endl;

	cout << "For 10% tip : $" << 0.1 * foodBill << endl;
	cout << "For 15% tip : $" << 0.15 * foodBill << endl;
	cout << "For 20% tip : $" << 0.2 * foodBill << endl;

	cin >> tip;

	// Calculations
	tax = foodBill * TAX_PERCENT;
	total = foodBill + tax + tip;
	

	// Output to the screen
	cout << "Your food bill is $" << foodBill << endl;
	cout << "Tip.............. $" << tip << endl;
	cout << "Tax.............. $" << tax << endl;
	cout << "Your total bill is $" << total;
	cout << endl;
	cout << "Thank your!";

	return 0;
}