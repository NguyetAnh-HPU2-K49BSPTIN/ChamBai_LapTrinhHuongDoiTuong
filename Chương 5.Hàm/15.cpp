#include<iostream>
using namespace std;

//Hàm 01: Tính chi phí - nội trú
double Ham_01(int SoNgay_NhapVien, double Phi_MotNgay, double Phi_ThuocMen, double Phi_KhamChuaBenh)
{
	double ChiPhi_NoiTru = (SoNgay_NhapVien * Phi_MotNgay) + Phi_ThuocMen + Phi_KhamChuaBenh;

	return ChiPhi_NoiTru;

}

//Hàm 02: Tính chi phí - ngoại trú
double Ham_02(double Phi_ThuocMen, double Phi_KhamChuaBenh)
{
	double ChiPhu_NgoaiTru = Phi_ThuocMen + Phi_KhamChuaBenh;

	return ChiPhu_NgoaiTru;
}

//Hàm 03: Nhập thông tin cho người khám
void Ham_03(int BenhNhan)
{
	if(BenhNhan == 1)
	{
		int SL_Ngay;
		float Phi_Ngay, Phi_Thuoc, Phi_Kham;
		cout << "So ngay + phi nam vien moi ngay + chi phi thuoc men + phi kham: ";
		cin >> SL_Ngay >> Phi_Ngay >> Phi_Thuoc >> Phi_Kham;

		cout << "Tong phi: " << Ham_01(SL_Ngay, Phi_Ngay, Phi_Thuoc, Phi_Kham) << endl;

	}
	else if(BenhNhan == 2)
	{
		float ChiPhi_Thuoc, ChiPhi_Kham;
		cout << "Chi phi thuoc + phi kham : ";
		cin >> ChiPhi_Thuoc >> ChiPhi_Kham;

		cout << "Tong phi: "<< Ham_02(ChiPhi_Thuoc, ChiPhi_Kham) << endl;
	}
}
int main()
{
	int BenhNhan;
	cout << "Benh nhan la loai noi(1) hay ngoai(2) :  ";
	cin >> BenhNhan;
	Ham_03(BenhNhan);

	return 0;
}