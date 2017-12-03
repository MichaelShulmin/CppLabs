#include<iostream>
#include<fstream>
#include <cstdlib>
using namespace std;

void main()
{
	ifstream fin("INPUT.txt");
	ofstream fout("OUTPUT.txt", ios_base::out | ios_base::trunc);
	if (!fin)
	{
		cout << "INPUT file error";
	}
	if (!fout)
	{
		cout << "OUTPUT file error";
	}
	char* mas1 = new char[255];
	char* mas2 = new char[255];
	int p = 0;
	for (int i = 0; i < 255; i++)
	while (!fin.eof())
	{
		fin >> mas1[i];
	}
	
	for (int i = 0; i < 255; i++)
	{
		if (mas1[i] == 1)
		{
			for (int j = 0; j < 3; j++)
				mas2[j] = mas1[i];
		}
	}
	int age;
	p = atoi(mas2);
	age = 2017 - p;

	if (age < 35)
	{
		for (int i = 0; i < 255; i++)
		{
			while (mas1[i] != 1)
				fout << mas1[i];
		}
		fout << "Age of the person " << age;
	}
	delete[]mas1;
	delete[]mas2; 
	fin.close();
	fout.close();

}

	

				


	

