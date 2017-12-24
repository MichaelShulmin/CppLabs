#include <iostream>
#include <cstdlib>

using namespace std;

struct AEROFLOT
{
	char destination[30];
	char type[30];
	int number;
};

int main()
{
	const int dan = 7;
	setlocale(LC_ALL, "");
	AEROFLOT af[dan];
	cout << "������� ������ ���������: \n";
	for (int i = 0; i < dan; ++i)
	{
		cout << "����� ����������: ";
		cin.getline(af[i].destination, 30);
		cout << "����� �����: " << endl;
		cin >> af[i].number; 
		cout << "��� ��������" << endl;
		(cin >> af[i].type).get();
	}

	for (int i = 0; i < dan; ++i)
	{
		int min = i;
		for (int j = i + 1; j < dan; ++j)
		{
			if (strcmp(af[j].destination, af[min].destination) == -1)
			{
				AEROFLOT temp = af[min];
				af[min] = af[j];
				af[j] = temp;
			}
		}
	}
	char destination[30];
	cout << "������� ����� ����������: ";
	cin.getline(destination, 30);

	bool find = false;
	for (int i = 0; i < dan; ++i)
	{
		if (!strcmp(af[i].destination, destination))
		{
			find = true;
			cout << "����� �����: " << af[i].number << '\n';
			cout << "��� ��������: " << af[i].type << '\n';
		}
	}

	if (!find)
	{
		cout << "����� � ������ ����� ���������� �� �������!" << endl;
	}
	return 0;
}

