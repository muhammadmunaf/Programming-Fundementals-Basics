#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int no_of_shares;
	double comm, share_price, total_price, shares_cost, comm_paid; 
	
	//share_price is for price per share and shares_cost for total amount paid for all shares
	
	cout << "Enter the number of stocks purchased" << endl;
	cin >> no_of_shares;
	
	cout << "Enter the price per share in $" << endl;
	cin >> share_price;
	
	cout << "Enter the commision for the transaction " << endl;
	cin >> comm;
	
	comm=comm/100; //to convert the input into its percentage
	
	shares_cost= share_price*no_of_shares;
	comm_paid= shares_cost*comm;
	total_price= shares_cost+comm_paid;
	
	cout << setprecision(2) << fixed << showpoint; //to show price in standard form (2 decimal places)
	cout << "The total amount for the shares is $" << shares_cost << endl;
	cout << "The total commision is $" << comm_paid << endl;
	cout << "The total amount paid is $" << total_price << endl;
	
	return 0;
}
