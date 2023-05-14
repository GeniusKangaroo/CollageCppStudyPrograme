#include<iostream>

using namespace std;

int circle(int r)
{
	int pi = 3.14;
	return pi * r * r;
}
int rectangle(int a, int b)
{
	return a * b;
}
int square(int a)
{
	return a * a;
}
int main()
{
	int flag;
	cout << "请选择图形(1.圆 2.长方形 3.正方形)" << endl;
	cin >> flag;
	if (flag == 1)
	{
		int r;
		cout << "请输入半径r" << endl;
		cin >> r;
		cout << "圆的面积是" << circle(r) << endl;
	}
	else if (flag == 2)
	{
		int l, w;
		cout << "请输入长和宽" << endl;
		cin >> l >> w;
		cout << "长方形的面积是" << rectangle(l, w) << endl;
	}
	else if (flag == 3)
	{
		int c;
		cout << "请输入正方形的边长" << endl;
		cin >> c;
		cout << "正方形的面积是" << square(c) << endl;
	}
	return 0;
}
