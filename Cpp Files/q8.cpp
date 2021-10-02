#include <iostream>

using namespace std;

int main()
{
	float total_weight;
	int no_of_widgets;
	
	cout << "Enter the weight of the pallete" << endl;
	cin >> total_weight;
	
	no_of_widgets=total_weight/12.5;
	
	cout << "Total number of widgets of the pallete are " << no_of_widgets << endl;
	
	return 0;
}
