#include <iostream>
using namespace std;
//Tương tự bài 15

int main()
{
	// 3 dòng trên
	for (int i = 1; i < 4; i++)
	{
		//In khoảng trắng
		for (int j = i; j < 4; j++)
		{
			cout << " ";
		}
		// In các dấu *
		for (int k = 1; k <= (2 * i - 1); k++)
		{
			cout << "*";
		}
		cout << endl;
	}

	// 4 dòng dưới
	for (int i = 4; i >= 1; i--)
	{
		// In khoảng trắng
		for (int j = 4; j > i; j--)
		{
			cout << " ";
		}
		// In các dấu *
		for (int k = 1; k <= (2 * i - 1); k++)
		{
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}