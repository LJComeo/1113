#include <iostream>
#include <algorithm>
using namespace std;

int Fibonacci(int n)
{
	if (n == 0)
	{
		return 0;
	}
	if (n == 1)
	{
		return 1;
	}
	return(Fibonacci(n - 1) + Fibonacci(n - 2));
}


int main4()
{
	int n;
	cin >> n;
	int Min = n;
	for (int i = 0; i < n + 1; i++)
	{
		if (Fibonacci(i) < n)
		{
			Min = min(Min, (n - Fibonacci(i)));
		}
		else if (Fibonacci(i) == n)
		{
			Min = 0;
		}
		else
		{
			Min = min(Min, (Fibonacci(i) - n));
			break;
		}
		
	}
	cout << Min;
	return 0;
}