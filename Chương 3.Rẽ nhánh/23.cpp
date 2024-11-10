#include <iostream>
using namespace std;

int main()
{
	double Pi = 3.14;
	int Nhap;

	cout << "Chuc nang: " << endl;
	cout << "1. Tinh dien tich hinh tron" << endl;
	cout << "2. Tinh dien tich hinh chu nhat " << endl;
	cout << "3. Tinh dien tich hinh tam giac vuong " << endl;
	cout << "4. Thoat " << endl;
	cout << "Nhap lua chon [1-4]: ";
	cin >> Nhap;

	switch (Nhap)
	{
		case 1:
		{
			double BanKinh_R;
			cout << "Nhap ban kinh: ";
			cin >> BanKinh_R;
			double DienTich_HinhTron = Pi * BanKinh_R * BanKinh_R;
			cout << "Dien tich hinh tron: " << DienTich_HinhTron << endl;
			break;
		}

		case 2:
		{
			double CD_HCN, CR_HCN;
			cout << "Nhap CD, CR HCN: ";
			cin >> CD_HCN >> CR_HCN;

			double DienTich_HCN = CD_HCN * CR_HCN;
			cout << "Dien tich HCN: " << DienTich_HCN << endl;
			break;
		}

		case 3:
		{
			double Canh_TamGiacVuong_01, Canh_TamGiacVuong_02;
			cout << "Nhap do dai canh 1 va canh 2: ";
			cin >> Canh_TamGiacVuong_01 >> Canh_TamGiacVuong_02;

			double DienTich_TamGiacVuong = 0.5 * Canh_TamGiacVuong_01 * Canh_TamGiacVuong_02;
			cout << "Dien tich tam giac vuong: " << DienTich_TamGiacVuong << endl;
			break;
		}

		case 4:
		{
			cout << "Thoat" << endl;
			return 0;
		}
	}

}