// Calculated in £. © ArmiaShadows 2021. 
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int quarters = 0, dimes = 0, nickles = 0, pennies = 0;
	const float QUARTERS = .25;
	const float DIMES = .10;
	const float NICKLES = .5;
	const float PENNIES = .1;

	cout << "What is the amount of quarters? ";
	cin >> quarters;

	cout << "How many dimes do you have? ";
	cin >> dimes;

	cout << "How many nickles do you have? ";
	cin >> nickles;

	cout << "How many pennies do you have? ";
	cin >> pennies;

	cout << "You have entered " << quarters << " quarters and " 
	<< dimes << " dimes and " << nickles << " nickles and " << pennies << " pennies. " << endl;

	float totalQuarters = quarters * QUARTERS;
	float totalDimes = dimes * DIMES;
	float totalNickles = nickles * NICKLES;
	float totalPennies = pennies * PENNIES;

	cout << "Totals: " << totalQuarters << " quarters and "
	<< totalDimes << " dimes and " << totalNickles << " nickles and " << totalPennies << " pennies. " << endl;

	float totalMoney = totalQuarters + totalDimes + totalNickles + totalPennies;

	cout << fixed << setprecision(2);
	cout << "The total in your piggybank is: " << totalMoney << "(The currency is in British Pounds)" << endl;

	system("PAUSE");
	return 0;
}