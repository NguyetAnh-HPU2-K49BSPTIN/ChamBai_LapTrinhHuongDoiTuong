#include<iostream>
using namespace std;

int main()
{
	//Khai báo biến lần lượt từ :
	//..Tổng giá tiền của giỏ hàng, thuế tiểu bang, thuế quận , Tổng thuế.

	int TongTien_GioHang = 95;
	double Thue_TieuBang;
	double Thue_Quan;
	double TongThue;

	//Gan gia tri cho bien
	TongTien_GioHang = 95;
	Thue_TieuBang = 0.04 * TongTien_GioHang;
	Thue_Quan = 0.02 * TongTien_GioHang;

	//Tinh tong thue
	TongThue = Thue_TieuBang + Thue_Quan;
	cout << TongThue;

}