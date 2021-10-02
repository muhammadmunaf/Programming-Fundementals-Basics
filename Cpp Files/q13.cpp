#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	char x; //x is a variable that'd store whatever character the user wants the patterns made of
	
	cout << "Enter the character you want for the patterns" << endl;
	cin >> x;
	
	// Pattern A made with multiple cout's
	cout << "Pattern A: \n";
	cout <<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<< endl;
	cout <<x<<x<< "             "   <<x<<x<< endl;
	cout <<x<<x<<x<< "           "  <<x<<x<<x<< endl;
	cout <<x<<x<<x<<x<< "         " <<x<<x<<x<<x<< endl;
	cout <<x<<x<<x<<x<<x<< "       " <<x<<x<<x<<x<<x<< endl;
	cout <<x<<x<<x<<x<<x<<x<< "     " <<x<<x<<x<<x<<x<<x<< endl;
	cout <<x<<x<<x<<x<<x<<x<<x<< "   "<<x<<x<<x<<x<<x<<x<<x<< endl;
	cout <<x<<x<<x<<x<<x<<x<<x<<x<< " "<<x<<x<<x<<x<<x<<x<<x<<x<< endl << endl;
	
	// Pattern B made with single cout
	cout << "Pattern B: \n";
	cout <<setw(6)<< x << endl
		<<setw(5)<< x<<x<<x<< endl
		<<setw(4)<< x<<x<<x<<x<<x<< endl
		<<setw(3)<< x<<x<<x<<x<<x<<x<<x<< endl
		<<setw(2)<< x<<x<<x<<x<<x<<x<<x<<x<<x<< endl
		<<setw(1)<< x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<< endl
		<<setw(2)<< x<<x<<x<<x<<x<<x<<x<<x<<x<< endl
		<<setw(3)<< x<<x<<x<<x<<x<<x<<x<< endl
		<<setw(4)<< x<<x<<x<<x<<x<< endl
		<<setw(5)<< x<<x<<x<< endl
		<<setw(6)<< x << endl << endl;
	
	// Pattern C made with multiple cout's
	cout << "Pattern C: \n";
	cout <<x<<x<<x<<x<<x<<x<<x<<x<<x<< " " <<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<< " " 	<<x<<x<<x<<x<<x<<x<<x<<x<<x<< endl;
	cout << "  " <<x<<x<<x<<x<<x<<x<<x<< " " <<x<<x<< "             " <<x<<x<< " " 	<<x<<x<<x<<x<<x<<x<<x<< endl;
	cout << "   " <<x<<x<<x<<x<<x<<x<< " " <<x<<x<<x<< "           " <<x<<x<<x<< " " 	<<x<<x<<x<<x<<x<<x<< endl;
	cout << "    " <<x<<x<<x<<x<<x<< " " <<x<<x<<x<<x<< "         " <<x<<x<<x<<x<< " " 	<<x<<x<<x<<x<<x<< endl;
	cout << "     " <<x<<x<<x<<x<< " " <<x<<x<<x<<x<<x<< "       " <<x<<x<<x<<x<<x<< " " 	<<x<<x<<x<<x<< endl;
	cout << "    " <<x<<x<<x<<x<<x<< " " <<x<<x<<x<<x<<x<<x<< "     " <<x<<x<<x<<x<<x<<x<< " " 	<<x<<x<<x<<x<<x<< endl;
	cout << "   " <<x<<x<<x<<x<<x<<x<< " " <<x<<x<<x<<x<<x<<x<<x<< "   " <<x<<x<<x<<x<<x<<x<<x<< " " 	<<x<<x<<x<<x<<x<<x<< endl;
	cout << "  " <<x<<x<<x<<x<<x<<x<<x<< " " <<x<<x<<x<<x<<x<<x<<x<<x<< " " <<x<<x<<x<<x<<x<<x<<x<<x<< " " 	<<x<<x<<x<<x<<x<<x<<x<< endl << endl;
	
	// Pattern D made with single cout
	
	cout << " Pattern D: \n";
	cout << setw(15) <<x<< endl 
	<< setw(13) <<x << setw(4)<<x<< endl
	<< setw(11) <<x<< setw(8)<<x<<endl
	<< setw(9) <<x<< setw(12)<<x<<endl
	<< setw(11) <<x<< setw(8)<<x<<endl
	<< setw(13) <<x << setw(4)<<x<< endl
	<< setw(15) <<x<< endl ;
	
	
	// Pattern E made with multiple cout's
	cout << "Pattern E: \n";
	cout << setw(18) <<x<<x<<x<< endl;
	cout << setw(17) <<x<<x<<x<<x<<x<<x<<x<< endl;
	cout << setw(12) <<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<< endl;
	cout << setw(5) <<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<< endl;
	cout << setw(3) <<x<<x<<x<<x<<x<<x<<x<<x<<x<< setw(16) <<x<<x<<x<<x<<x<<x<<x<<x<<x<< endl;
	cout << setw(5) <<x<<x<<x<<x<<x<<x<<x<<x<< setw(14) <<x<<x<<x<<x<<x<<x<<x<<x<< endl;
	cout << setw(5) <<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<< endl;
	cout << setw(12) <<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<< endl;
	cout << setw(15) <<x<<x<<x<<x<<x<<x<<x<< endl;
	cout << setw(18) <<x<<x<<x<< endl;
	
	return 0; 
}





