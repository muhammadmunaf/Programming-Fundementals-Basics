// M.Munaf ul Hassan	20i-0891	Assignment_1

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double ion_conc, ph;
	
	cout << "Enter the concentration of the Hypdrogen ion" << endl;
	cin >> ion_conc;
	
	ph=-log10(ion_conc);
	
	cout << "The pH of the solution is " <<ph << endl;
	
	return 0;
}
