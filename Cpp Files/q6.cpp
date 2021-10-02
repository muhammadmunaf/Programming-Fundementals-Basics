#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double V, A, height, radius, slant;
	const double PI=3.142;
	
	cout << "Enter the radius of the cone\n";
	cin >> radius; 
	
	cout << "Enter the height of the cone\n";
	cin >> height; 
	
	cout << "Enter the slant height of the cone\n";
	cin >> slant;
	
	V=(PI*radius*radius*height)/3;
	
	A=PI*radius*radius+PI*slant*radius;
	cout << setprecision(1) << fixed; //to give answer to 1 decimal place
	cout << "Volume of the cone is " << V << endl;
	cout << "Area of the cone is " << A << endl;
	
	return 0;
}
