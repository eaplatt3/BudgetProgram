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
	double rent;
	double carExp;
	double phoneExp;
	double credCardExp;
	double misExp;
	double tot;


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

	cout << "Enter Rent/Mortgage Cost: $";
	cin >> rent;

	while (cin.fail())
	{
		cout << "Invalid Input Please Re-enter Your Monthly Pay" << endl;
		cin.clear();
		cin.ignore(256, '\n');
		cin >> rent;
	}

	cout << "Enter Car Expenses: $";
	cin >> carExp;

	while (cin.fail())
	{
		cout << "Invalid Input Please Re-enter Your Monthly Pay" << endl;
		cin.clear();
		cin.ignore(256, '\n');
		cin >> carExp;
	}

	cout << " " << endl;
	cout << "Monthly Pay..............................$" << pay << endl;
	cout << " " << endl;
	cout << "Expenses" << endl;
	cout << "-------------------------------------------------------" << endl;
	cout << "Mortgage/Rent............................$" << rent << endl;
	cout << "Car Expenses.............................$" << carExp << endl;
	cout << "Phone Expense............................$" << endl;
	cout << "Credit Card..............................$" << endl;
	cout << "Miscellaneous Expense....................$" << endl;
	cout << "Total....................................$" << endl;



	system("pause");

	return 0;
}

