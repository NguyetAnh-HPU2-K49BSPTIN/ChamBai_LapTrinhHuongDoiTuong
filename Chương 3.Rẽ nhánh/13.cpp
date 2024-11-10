#include<iostream>
using namespace std;

int main()
{
	int SL_Sach , Diem;
	cout << "Nhap SL sach : ";
	cin >> SL_Sach;

	if(SL_Sach == 0)
	{
		Diem = 0;
	}
	else if(SL_Sach == 1)
	{
		Diem = 5;
	}
	else if(SL_Sach == 2)
	{
		Diem = 15;
	}
	else if(SL_Sach == 3)
	{
		Diem = 30;
	}
	else if(SL_Sach >= 4)
	{
		Diem = 60;
	}

	cout << "Diem cua khach hang la : " << Diem;
}