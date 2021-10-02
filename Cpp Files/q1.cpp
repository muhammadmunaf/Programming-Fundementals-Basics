#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int total_species, time, initial_species;
	const double e=2.7183;
	double growth_cons;
	
	cout << "Enter the initial number of species" << endl;
	cin >> initial_species;
	
	cout << "Enter the growth constant for the species" << endl;
	cin >> growth_cons;
	
	cout << "Enter the number of hours you need results after of" << endl;
	cin >> time;
	
	total_species = initial_species*pow(e,(growth_cons*time));
	
	cout << "Total number of species after " << time << "hours is " << total_species << endl;
	
	return 0;
}
