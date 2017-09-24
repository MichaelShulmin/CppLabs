#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Введите целое число";
	cin >> n;
	int count = 0;
	while (n > 0)
	{
		if ((n % 10) % 2 == 0)
			count++;
			n = n / 10;
	}
	cout << "Количество чётных цифр целого числа" << n << "равно" << count << endl;
	return 0;
}