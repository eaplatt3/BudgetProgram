#include <iostream>

//Earl A Platt III
//12/27/18
//Program to Caculate a Budget
//
//User Inputs:
//-Pay
//-Bills
//
//Program Outputs:
//-Pay
//-Bills
//-Left Over
//  -Divided In To Saving & Spending
////////////////////////////////////

using namespace std;

int main() {

	double pay;

	cout << "Your Budget" << endl;
	cout << "-----------" << endl;
	cout << " " << endl;
	cout << "Enter Monthly Pay: $";
	cin >> pay;

	while (cin.fail())
	{
		cout << "Invalid Input Please Re-enter Your Monthly Pay" << endl;
		cin.clear();
		cin.ignore(256, '\n');
		cin >> pay;
	}

	cout << " " << endl;
	cout << "Monthly Pay..............................$" << pay << endl;
	cout << " " << endl;
	cout << "Expenses" << endl;
	cout << "-------------------------------------------------------" << endl;
	cout << "Mortgage/Rent............................$" << endl;
	cout << "Car Expenses.............................$" << endl;
	cout << "Phone Expense............................$" << endl;
	cout << "Credit Card..............................$" << endl;
	cout << "Miscellaneous Expense....................$" << endl;
	cout << "Total....................................$" << endl;



	system("pause");

	return 0;
}

