#include "iostream"
using namespace std;

int main()
{
	//Nhập giá tiền 3 loại A,B,C
	int GiaVe_A = 15;
	int GiaVe_B = 12;
	int GiaVe_C = 9;

	//Khai báo 3 biến lưu số lượng của các loại hạng ghế A,B,C
	//Khai báo biến lưu tổng thu nhập của sân vận động
	int SL_A, SL_B, SL_C;
	double Tong_ThuNhap;

	cout << "Nhap so ve ban cho loai A,B,C : ";
	cin >> SL_A >> SL_B >> SL_C;

	Tong_ThuNhap = (GiaVe_A * SL_A) + (GiaVe_B * SL_B) + (GiaVe_C * SL_C);
	cout << "Tong doanh thu: " << Tong_ThuNhap;

}