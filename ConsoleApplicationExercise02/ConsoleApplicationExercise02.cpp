#include<iostream>

using namespace std;

int main()
{
	int result;
	for (int i = 100; i > 0; i--)
	{
		if (i % 13 == 0)
		{
			result = i;
			break;
		}
	}
	cout << "the result is " << result << endl;
	return 0;
}
