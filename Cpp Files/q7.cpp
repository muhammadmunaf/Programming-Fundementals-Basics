// M.Munaf ul Hassan	20i-0891	Assignment_1

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	float temp_NYC, temp_Den, temp_Pho, newtemp_NYC, newtemp_Den, newtemp_Pho;
	
	cout << "Enter the average July high temperature for New York City in Fahrenheit" << endl;
	cin >> temp_NYC;
	
	cout << "Enter the average July high temperature for Denver in Fahrenheit" << endl;
	cin >> temp_Den;
	
	cout << "Enter the average July high temperature for Phoenix in Fahrenheit" << endl;
	cin >> temp_Pho;
	
	newtemp_NYC = temp_NYC*1.02;
	newtemp_Den = temp_Den*1.02;
	newtemp_Pho = temp_Pho*1.02;
	
	cout << setprecision(1) <<fixed;
	cout << "The new average temperature for New York City would be " << newtemp_NYC << "F" << endl;
	cout << "The new average temperature for Denver would be " << newtemp_Den << "F" << endl;
	cout << "The new average temperature for Phoenix would be " << newtemp_Pho << "F" << endl;
	
	return 0;	
}
