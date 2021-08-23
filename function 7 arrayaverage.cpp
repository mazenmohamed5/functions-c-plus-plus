#include<iostream>
using namespace std;

int arrayaverage(int x[], int size = 5)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum = sum + x[i];
	}
	return (sum / size);
}
int main()
{
	const int size = 5;
	int x[size];
	for (int i = 0; i < size; i++)
	{
		cin >> x[i];
	}
	cout << arrayaverage(x, size);
	return 0;
}