#include "iostream"
using namespace std;


//Theo đề bài: hàm kineticEnergy()
	//khối lượng : m
	//vận tốc : v
	//động năng : KE = 0.5 * m * v*v
double kineticEnergy(double KL_KhoiLuong, double VT_VanToc )
{
	double DN_DongNang = 0.5 * KL_KhoiLuong * VT_VanToc*VT_VanToc;
	return DN_DongNang;
}

int main()
{
	double KL_KhoiLuong, VT_VanToc;
	cout << "Nhap KhoiLuong & VanToc: ";
	cin >> KL_KhoiLuong >> VT_VanToc;

	double DongNang = kineticEnergy(KL_KhoiLuong, VT_VanToc;
	cout << "Dong nang cua vat: " << DongNang << endl;

	return 0;
}

