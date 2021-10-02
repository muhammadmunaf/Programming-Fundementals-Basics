#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int a, b, c, d; //each letter shows no. of tickets sold in their class
	double total;
	
	cout << "Enter no. of tickets sold for Class A" << endl;
	cin >> a;
	
	cout << "Enter no. of tickets sold for Class B" << endl;
	cin >> b;
	
	cout << "Enter no. of tickets sold for Class C" << endl;
	cin >> c;
	
	cout << "Enter no. of tickets sold for Class D" << endl;
	cin >> d;
	
	total= (a*20)+(b*15)+(c*10)+(d*5); //totaling the income generated
	
	cout << "Total income generated is $" 
	<< setprecision(2) << fixed << showpoint << total << endl;
	
	return 0;

}
