#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


double getSales(string);
void findhighest(double, double, double, double);

int main()
{
	double Northwest, Northeast, Southwest, Southeast;

	Northeast = getSales("Northeast");
	Southeast = getSales("Southeast");
	Northwest = getSales("Northwest");
	Southwest = getSales("Southwest");

	findhighest(Northeast, Southeast, Northwest, Southwest);
	return 0;
} 


double getSales(string Division)
{
	double Sales;

	do
	{
		cout << "What is the " << Division;
		cout << " division's quarterly sales figure? ";
		cin >> Sales;

		if (Sales < 0.00)
		{
			cout << "Error cannot be 0.00" <<endl;
		}
	} 
	while (!(Sales > 0.00));

	return Sales;
}




void findhighest(double Northwest, double Northeast, double Southwest, double Southeast)
{
	double highest;

	if (Northeast > Southeast && Northeast > Northwest && Northeast > Southwest)
	{
		highest = Northeast;
		cout << "Northeast made the most";
	}
	else if (Southeast > Northeast && Southeast > Northwest && Southeast > Southwest)
	{
		highest = Southeast;
		cout << "Southeast made the most";
	}
	else if (Northwest > Southeast && Northwest > Northeast && Northwest > Southwest)
	{
		highest = Northwest;
		cout << "Northwest made the most";
	}
	else
	{
		highest = Southwest;
		cout << "Southwest made the most";
	}


	cout << fixed << showpoint << setprecision(2);
	cout << endl << endl << endl;
}
