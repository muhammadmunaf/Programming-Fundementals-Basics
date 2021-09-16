// M.Munaf ul Hassan	20i-0891	Assignment_1

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int V;
	float R,S,E;
	
	cout << "Enter the lenght of the row in feet" << endl;
	cin >> R;
	
	cout << "Enter the amount of space used by an end-post assembly in feet" << endl;
	cin >> E;
	
	cout << "Enter the space between the vines in feet" << endl;
	cin >> S;
	
	V=static_cast<int>((R-2*E))/S;
	
	cout << "The number of grapevines that will fit in a row are " << V << endl;
	
	return 0;
}
