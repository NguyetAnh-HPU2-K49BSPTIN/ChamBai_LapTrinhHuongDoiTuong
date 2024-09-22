#include<iostream>
using namespace std;

int main()
{
	//Khai báo các biến đã cho
	int So_CoPhieu = 750;
	double Gia_1_CoPhieu = 35.00;
	double HoaHong = 0.02;

	//Khai báo biến yêu cầu
	double SoTien_ThanhToan_KhongCoHoaHong = 750 * 35.00;
	double SoTien_HoaHong = SoTien_ThanhToan_KhongCoHoaHong * HoaHong;
	double TongSoTien_ThanhToan = SoTien_ThanhToan_KhongCoHoaHong + SoTien_HoaHong;

	//In ra man hinh
	cout << SoTien_ThanhToan_KhongCoHoaHong << endl;
	cout << SoTien_HoaHong << endl;
	cout << TongSoTien_ThanhToan << endl;

	return 0;
}