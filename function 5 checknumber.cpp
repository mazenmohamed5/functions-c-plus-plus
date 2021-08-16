#include<iostream>
using namespace std;

bool checknumber(int n)

{
	if (n % 2 == 0)
	{
		return true; // = 1
	}
	else
	{
		return false; // = 0
	}

}
int main()
{
	int x;
	int result;
	cin >> x;
  cout<< checknumber(x) ;
}
