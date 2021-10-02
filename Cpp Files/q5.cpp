#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

int main()
{
	int a,b,c; //these show the respective values as in the general quadratic eq
	double r,x1,x2;
	
	cout << "Enter the coefficent of x^2" << endl;
	cin >> a;
	
	cout << "Enter the coefficent of x" << endl;
	cin >> b;
	
	cout << "Enter the value of the constant" << endl;
	cin >> c;
		
	r=sqrt((b*b)-4*a*c); //calculating sqaureroot of the determinant
	x1=(-b+r)/(2*a);
	x2=(-b-r)/(2*a);
	
	cout << "For the quadratic equation:" <<endl 
	<< a << "x^2+" << b << "x+" << c << endl;
	
	cout << "The squareroot of the determinant is " << r << endl;
	cout << "And the answers are\n" << x1 << endl << x2 << endl;
	
	return 0;
}
