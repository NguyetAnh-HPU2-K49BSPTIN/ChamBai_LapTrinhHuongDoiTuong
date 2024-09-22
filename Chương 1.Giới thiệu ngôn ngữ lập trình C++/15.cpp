#include <iostream>
using namespace std;

int main()
{
	// Số dòng của tam giác
	int n = 4;

	// Vòng lặp for => cho tam giác
	for (int i = 1; i <= n; i++)
	{
		// In khoảng trắng
			//Mục đích: số lượng khoảng trắng giảm dần theo mỗi dòng
			//=>Nếu n = 4 khi i = 1 thì sẽ có 3 khoảng trắng
			//=>Nếu n = 4 khi i = 2 thì sẽ có 2 khoảng trắng
		for (int j = i; j < n; j++)
		{
			cout << " ";
		}


		// In các dấu *
			//Mục đích: đảm bảo số lượng * cứ mỗi dòng lại tăng lên 2
			//nếu i = 1 => 2*1 -1 = 1 => in 1 dấu *
			//....i = 2 => 2*2 -1 = 3 => in 3 dấu *
			//.....
		for (int f = 1; f <= (2 * i - 1); f++)
		{
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}