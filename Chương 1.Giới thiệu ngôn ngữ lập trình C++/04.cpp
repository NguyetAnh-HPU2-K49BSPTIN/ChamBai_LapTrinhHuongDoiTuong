#include <iostream>
using namespace std;

int main()
{
	// Khai báo các biến
	double ChiPhi_An = 88.67;  // Chi phí bữa ăn
	double Thue = 6.75 / 100;  // Thuế 6.75%
	double Tip;         // Tip 20%
	double Tong_HoaDon;

	// Tính tiền thuế, sau khi cộng thuế, tip và tổng hóa đơn
	Thue = ChiPhi_An * Thue;
	double Tong_SauThue = ChiPhi_An + Thue;

	Tip = Tong_SauThue * 0.20;
	Tong_HoaDon = Tong_SauThue + Tip;

	// In
	cout << ChiPhi_An << endl;
	cout << Thue << endl;
	cout << Tip << endl;
	cout << Tong_HoaDon << endl;

	return 0;
}