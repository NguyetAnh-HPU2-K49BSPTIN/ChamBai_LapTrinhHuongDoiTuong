#include<iostream>
using namespace std;
int main()
{
	//Nhập chi phí hàng tháng cho các khoản sau:
	//Vay
	//Bảo hiểm
	//Xăng
	//Dầu
	//Lốp
	//Bảo dưỡng
	//* Hiểm thị:  + tổng chi phí hành tháng
	//             + tổng chi phí cả năm
	// Tổng chi phí hàng tháng = ( Vay + Bảo hiểm + Xăng + Dầu + Lốp + Dưỡng)
	// Tổng chi phí hàng năm = Tổng chi phí 1 tháng x 12 tháng
	//Khai báo các biến
	double ThanhToan_Vay;
	double ThanhToan_BaoHiem;
	double ThanhToan_Xang;
	double ThanhToan_Dau;
	double ThanhToan_Lop;
	double ThanhToan_BaoDuong;
	double ThanhToan_HangThang;
	double ThanhToan_CaNam;
	//Nhập giá trị cho các biến
	cin >> ThanhToan_Vay >> ThanhToan_BaoHiem >> ThanhToan_Xang >> ThanhToan_Dau >> ThanhToan_Lop >> ThanhToan_BaoDuong;
	// Nhập công thức tính số tiền hàng tháng và hàng năm phải thanh toán
	ThanhToan_HangThang = ThanhToan_Vay + ThanhToan_BaoHiem + ThanhToan_Xang + ThanhToan_Dau + ThanhToan_Lop + ThanhToan_BaoDuong;
	ThanhToan_CaNam = ThanhToan_HangThang * 12.0;
	//In kêts quả yêu cầu ra màn hình
	cout << ThanhToan_HangThang << endl;
	cout << ThanhToan_CaNam << endl;
}