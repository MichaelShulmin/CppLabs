#include <iostream>
#include <cstdlib>


using namespace std;

int Input(int* M, int n)
{
	for (int i = 0; i<n; i++)
	{
		cout << "M[" << i << "]=";
		cin >> M[i];
		return 0;
	}
}

int RandomNumber(int* M, int n)
{
	for (int i = 0; i<n; i++)
	{
		M[i] = rand() % 100 - 10;
		return 0;
	}
}

int Print(int* M, int n)
{
	for (int i = 0; i<n; i++)
	{
		cout << M[i] << " ";
		return 0;
	}
	cout << endl;
}

void X(int* M, int* r, int n)
{
	for (int i = 0; i<n; i++)
	{
		r[i] = M[i];
		if (M[i]<0)
			r[i] *= M[i];
		
	}
}

bool Ch(int* M, int n)
{
	for (int i = 1; i<n; i++)
		if (M[i]<M[i - 1])
			return false;
	return true;
}

int Y(int* M, int n)
{
	int sum = 0;
	for (int i = 0; i<n; i++)
	{
		sum += M[i];
	}
	return sum;
}
int Z(int* M, int n)
{
	int sum = 1;
	for (int i = 0; i<n; i++)
	{
		sum *= M[i];
	}
	return sum;
}

int main()
{
	int n;
	cout << "n=";
	cin >> n;
	int* A = new int[n];
	Input(A, n);
	
	Print(A, n);
	int* B = new int[n];
	X(A, B, n);
	if (Ch(B, n))
	{
		int s = Y(A, n);
		cout << "sum = " << s << endl;
	}
	else
	{
		int s = Z(A, n);
		cout << "product = " << s << endl;
	}
	delete[] A,B;
    
	system("pause");
    return 0;
}