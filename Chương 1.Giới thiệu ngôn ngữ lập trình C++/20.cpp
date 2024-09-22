#include <iostream>
#include <cmath>
// Sử dụng thư viện cmath để dùng hàm ceil làm tròn lên
using namespace std;

int main()
{
	// Kích thước của hàng rào
	double ChieuCao = 6.0;    // Chiều cao của hàng rào (feet)
	double ChieuDai = 100.0;  // Chiều dài của hàng rào (feet)

	// Diện tích cần sơn cho hàng rào
	double DienTich_1_Lop = ChieuCao * ChieuDai;
	double DienTich_2_Lop = DienTich_1_Lop * 2;

	double DienTich_1_gallon = 340.0;
	double SL_Son_LamTron = ceil(DienTich_2_Lop / DienTich_1_gallon);

	// Hiển thị kết quả
	cout  << SL_Son_LamTron << " gallon" << endl;

	return 0;
}
