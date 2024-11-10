#include<iostream>
using namespace std;

int main()
{
	double kg_TrongLuong, km_KhoangCach, Phi_MoiDam;
	cout << "Nhap trong luong & khoang cach : ";
	cin >> kg_TrongLuong >> km_KhoangCach;

	if(kg_TrongLuong <= 0 || kg_TrongLuong >20 )
	{
		cout << " Nhap lai! " << endl;
		return 1;
	}

	if(km_KhoangCach < 0 || km_KhoangCach > 3000)
	{
		cout << "Nhap lai" << endl;
		return 1;
	}

	if(kg_TrongLuong < 2.00)
	{
		Phi_MoiDam = 1.10;
	}
	else if(kg_TrongLuong <= 6.00)
	{
		Phi_MoiDam = 2.20;
	}
	else if(kg_TrongLuong <= 10.00)
	{
		Phi_MoiDam = 3.70;
	}
	else if(kg_TrongLuong <= 20.00)
	{
		Phi_MoiDam = 4.80;
	}

	double Tong_ChiPhi = Phi_MoiDam * km_KhoangCach;
	cout << " Tong chi phi : " << Tong_ChiPhi << endl;

	return 0;
}