#include<iostream>

//Thêm 1 cái thư viện nữa
#include<fstream>

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


int main()
{
	int BenhNhan;

	//Mở file để ghi:
	ofstream BaiTap_19("19.txt");
	if(!BaiTap_19)
	{
		cout << "Khong mo duoc file ! Kiem tra lai" << endl;
		return 1;
	}
	else
	{
		cout << "Mo file thanh cong! "<< endl;
	}

	cout << "Benh nhan la loai noi(1) hay ngoai(2) :  ";
	cin >> BenhNhan;

	switch (BenhNhan)
	{
		case 1:
		{
			int SL_Ngay;
			float Phi_Ngay, Phi_Thuoc, Phi_Kham;
			cout << "So ngay + phi nam vien moi ngay + chi phi thuoc men + phi kham: ";
			cin >> SL_Ngay >> Phi_Ngay >> Phi_Thuoc >> Phi_Kham;

			double TongPhi_Noi = Ham_01(SL_Ngay, Phi_Ngay, Phi_Thuoc, Phi_Kham);

			BaiTap_19 << "Tong chi phi noi tru: " << TongPhi_Noi << endl;

			cout << "Kiem tra trong file txt di";

			break;

		}

		case 2:
		{
			float ChiPhi_Thuoc, ChiPhi_Kham;
			cout << "Chi phi thuoc + phi kham : ";
			cin >> ChiPhi_Thuoc >> ChiPhi_Kham;

			double TongPhi_Ngoai = Ham_02(ChiPhi_Thuoc, ChiPhi_Kham);

			BaiTap_19 << "Tong chi phi ngoai tru: " << TongPhi_Ngoai << endl;

			cout << "Kiem tra trong file txt di";

			break;
		}

		default:
		{
			cout << "Khong hop le " << endl;
			return 1;
		}
	}


	//Đóng file
	BaiTap_19.close();
	return 0;
}