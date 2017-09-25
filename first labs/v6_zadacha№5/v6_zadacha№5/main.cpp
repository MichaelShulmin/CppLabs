#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	double a;
	int n;
	cout << "Input a" << endl;
	cin >> a;
	cout << "Input n" << endl;
	cin >> n;

	double p=1,i;
	for (i = 0; i <= n; i++)
	{
		p *= a + i;
	}
		
	
	cout << "p=" << p << endl;
}