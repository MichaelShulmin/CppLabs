#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;
int main()
{
	ofstream out("OUTPUT.txt");

	ifstream in("INPUT.txt");
	char*p = new char[255];
	int* m = new int[255];
	for (int i = 0; i < 255; i++)
		m[i] = 0;
	int k = 0;
	while (!in.eof())
	{
		in.getline(p, 255);

		for (int i = 0; i < 255; i++)
		{

			if (p[i] == '\0')
				break;
			if (p[i] == ' ')
				k++;
			else
			{
				if (m[k] == 0)
				{
					m[k] = atoi(p + i);
				}
			}
		}
	}
	for (int i = 0; i <= k; i++)
	{
		if (m[i] < 0)
		{
			for (int j = i; j < k; j++)
				m[j] = m[j + 1];
			k--;
			break;
		}
	}
	for (int i = 0; i <= k; i++)
		out << m[i] << " ";

	out.close();
	in.close();
	delete[]p;
}