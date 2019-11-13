#include <iostream>
#include <string>
using namespace std;

class Parenthesis {
public:
	bool chkParenthesis(string A, int n)
	{
		int flags = 0;
		for (int i = 0; i < n; i++)
		{
			if (A[i] == '(')
			{
				flags++;
			}
			if (A[i] == ')')
			{
				flags--;
			}
		}
		if (flags == 0)
		{
			return true;
		}
		return false;
		
	}
};