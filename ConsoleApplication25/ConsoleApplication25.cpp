#include<iostream>
using namespace std;
class A
{
public:
	friend void fun(A o);
	A(int i = 2) { a = i; }
	A(double d) { a = d; }
	static int s_foo()
	{
		cout << "Hello" << endl;
	}

private:
	int a;
};
void fun(A o)
{
	cout << o.a << endl;
}
void main()
{
	int i = 3;
	double d = 3.2;
	A b1(i);
	A b2(d);
}