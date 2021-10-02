#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int vol, total;
	
	cout << "Enter the volume of the additional solution added in litres" << endl;
	cin>>vol;
	
	total= 35 + 540*vol;
	
	cout << "The total volume of the chemical in ml is " << total << endl;
	
	return 0;
}
