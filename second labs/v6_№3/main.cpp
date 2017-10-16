#include <iostream>
using namespace std;
int main()
{
	int i,j, n=5, mas[5];
for(i=0; i<n; i++)
{
	cin>>mas[i];
}
for (int i=0;i<n-1;i++)
if (mas[i]==mas[i+1])
{
    int sch=1;
    while(mas[i+sch]==mas[i]) sch++;
    for(int j=i;j<n-1;j++)
        mas[j]=mas[j+sch];
    n-=sch;
 
}
for(i=0; i<n; i++)
{
	cout << mas[i]<<"\t";
}
 
system("pause");
return 0;
}