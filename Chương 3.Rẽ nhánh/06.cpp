#include <iostream>
using namespace std;

int main()
{
	double CanNang, TrongLuong;

	cout << " Nhap can nang : ";
	cin >> CanNang;
	TrongLuong = CanNang * 9.8;

	cout << "Trong luong cua vat : " << TrongLuong << endl;

	if(TrongLuong > 100.0)
	{
		cout << "Vat qua nang! " << endl;
	}
	else if (TrongLuong < 10.0)
	{
		cout << "Vat qua nhe! " << endl;
	}
	else
	{
		cout << "Khong thay dau bai nhac gi ve dieu kien nay!" ;
	}

	return 0;

}