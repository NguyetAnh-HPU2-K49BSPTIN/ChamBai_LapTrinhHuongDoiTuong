#include <iostream>
using namespace std;

int main()
{
	int Thang, Nam;

	cout << "Nhap thang, nam : ";
	cin >> Thang >> Nam;


	int SoNgay;
	if (Thang == 2)
	{
		if ((Nam % 4 == 0 && Nam % 100 != 0) || (Nam % 400 == 0))
		{
			cout << " Nam nhuan! " << endl;
			SoNgay = 29;
		}
		else
		{
			cout << "Nam khong nhuan !" << endl;
			SoNgay = 28;
		}
	}
	else if (Thang == 4 || Thang == 6 || Thang == 9 || Thang == 11)
	{
		SoNgay = 30;
	}
	else
	{
		SoNgay = 31;
	}

	cout << "So ngay: " << SoNgay << endl;

	return 0;
}
