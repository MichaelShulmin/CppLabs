#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "������� ����� �����";
	cin >> n;
	int count = 0;
	while (n > 0)
	{
		if ((n % 10) % 2 == 0)
			count++;
			n = n / 10;
	}
	cout << "���������� ������ ���� ������ �����" << n << "�����" << count << endl;
	return 0;
}