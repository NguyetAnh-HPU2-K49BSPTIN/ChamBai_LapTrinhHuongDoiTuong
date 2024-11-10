#include<iostream>
using namespace std;

int main()
{
	double Gia_SP = 99.00;
	int SL_SP;
	double ChietKhau = 0.00;
	double Tong_SP ;

	cout << "Nhap so luong ban: ";
	cin >> SL_SP;

	if(SL_SP >= 10 && SL_SP <= 19)
	{
		ChietKhau = 0.20;
	}
	else if(SL_SP >= 20 && SL_SP <= 49)
	{
		ChietKhau = 0.30;
	}
	else if(SL_SP >= 50 && SL_SP <= 99)
	{
		ChietKhau = 0.40;
	}
	else if(SL_SP >= 100)
	{
		ChietKhau = 0.50;
	}

	//Tong
	Tong_SP = SL_SP * Gia_SP * (1 - ChietKhau);
	cout << " Tong = " << Tong_SP << " $" << endl;
}