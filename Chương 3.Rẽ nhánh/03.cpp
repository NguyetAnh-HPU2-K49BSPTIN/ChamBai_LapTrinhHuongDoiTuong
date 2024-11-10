#include<iostream>
using namespace std;

int main()
{
	int Ngay, Thang, Nam_2_SoCuoi;
	cout << "Nhap ngay/thang/nam  (Nam : chi nhap hai so cuoi ): " ;
	cin >> Ngay >> Thang >> Nam_2_SoCuoi;

	if(Ngay * Thang == Nam_2_SoCuoi)
	{
		cout << Ngay << "/" << Thang << "/" << Nam_2_SoCuoi << " la ngay phep thuat !" << endl;
	}
	else
	{
		cout << Ngay << "/" << Thang << "/" << Nam_2_SoCuoi << " KHONG phai la ngay phep thuat !" << endl;
	}

	return 0;

}