#include <iostream>
using namespace std;

/*
class A
{
	long x;
	friend long fun(A s)
	{
		if (s.x < 3)
		{
			return 1;
		}
		return s.x + fun(A(s.x - 1));
	}
public:
	A(long a)
	{
		x = a--;
	}
};
*/

class parent
{
	int i;
protected:
	int x;
public:
	parent(){ x = 0; i = 0; }
	void change(){ x++; i++; }
	void display();
};
class son :public parent
{
public:
	void modify();
};

void parent::display()
{
	cout << "x=" << x << endl;
}
void son::modify()
{
	x++;
}


int main()
{
	/*int n = 0;
	char ch;
	while (getchar() != '\n')
	{
		n++;
	}
	cout << n;*/
	/*int n;
	for (n = 0; getchar() != '\n'; n++)
	{

	}
	cout << n;*/

	/*int a = 1, b = 0, c = -1, d = 0;
	d = ++a || ++b&&++c;
	cout << d;*/

	/*
	int sum = 0;
	for (int i = 0; i < 5; i++)
	{
		sum += fun(A(i));
	}
	cout << sum;
	*/
	son A; parent B;
	A.display();
	A.change();
	A.modify();
	A.display();
	B.change();
	B.display();



	return 0;
}