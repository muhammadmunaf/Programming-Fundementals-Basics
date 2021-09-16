// M.Munaf ul Hassan	20i-0891	Assignment_1

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int no_of_shares, no_shares_sold;
	double buy_price, sell_price, comm1, comm2,stock_price_buy, comm_buy, stock_price_sell, comm_sell, profit;
	
	cout << "Enter the number of shares purchased" << endl;
	cin >> no_of_shares;
	
	cout << "Enter the price per share" << endl;
	cin >> buy_price;
	
	cout << "Enter the commission for the stockbroker for buying stocks" << endl;
	cin >> comm1;
	comm1=comm1/100;
	
	stock_price_buy= no_of_shares*buy_price;
	comm_buy=stock_price_buy*comm1;
	
	cout << "Enter the number of shares sold" << endl;
	cin >> no_shares_sold;
	
	cout << "Enter the selling price per share" << endl;
	cin >> sell_price;
	
	cout << "Enter the commission for the stockbroker for selling stocks" << endl;
	cin >> comm2;
	comm2=comm2/100;
	
	stock_price_sell= no_shares_sold*sell_price;
	comm_sell= stock_price_sell*comm2;
	
	profit = stock_price_sell-stock_price_buy-comm_sell-comm_buy;
	
	cout << setprecision(2) << fixed << showpoint; //to show price in 2 decimal form
	
	cout << "Stocks brought at $" << stock_price_buy << endl;
	cout << "With a commission of $" << comm_buy << endl;
	
	cout << "Stocks sold at $" << stock_price_sell << endl;
	cout << "With a commission of $" << comm_sell << endl;
	
	cout << "The profit made is $" << profit << endl;
	
	return 0;
	
}
