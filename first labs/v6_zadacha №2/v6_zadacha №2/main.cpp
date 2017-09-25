#include <iostream>
using namespace std;

int main()
{
<<<<<<< HEAD
	int a, b, c, x, y; 
	cout << "a" << endl;
	cin >> a; 
	cout << "b" << endl;
	cin >> b; 
	cout << "c" << endl;
	cin >> c;
	cout << "x" << endl;
	cin >> x;
	cout << "y" << endl;
	cin >> y;
	
	if ((a <= x & b <= y) || (b <= x & a <= y) || (a <= x & c <= y) || (c <= x & a <= y) || (c <= x & b <= y) || (b <= x & c <= y))
=======
	int a, b, c, x, y;
	if ((a <= x & b <= y)||(b <= x & a <= y) || (a <= x & c <= y) || (c <= x & a <= y) || (c <= x & b <= y) || (b <= x & c <= y))
>>>>>>> master
	{
		cout << "Кирпич пройдёт в отверстие." << endl;
	}

	else if ((a >= x & b >= y) || (b >= x & a >= y) || (a >= x & c >= y) || (c >= x & a >= y) || (c >= x & b >= y) || (b >= x & c >= y))
	{
		cout << "Кирпич не пройдёт в отверстие." << endl;
	}
<<<<<<< HEAD

=======
		
>>>>>>> master
}