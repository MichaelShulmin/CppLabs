#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int x, y, z;
	cout << "Input x"<<endl;
	cin >> x;
	cout << "Input y" << endl;
	cin >> y;
	cout << "Input z" << endl;
	cin >> z;
	double a, b;
	a = y + x / (pow(y,2) +  fabs(pow(x,2) / (y + pow(x,3) / 3)) );
	b = (1 + pow(tan(z/2),2));
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	return 0;
}