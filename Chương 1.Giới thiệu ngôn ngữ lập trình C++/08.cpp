#include <iostream>
using namespace std;

int main()
{
	// Khai báo và khởi tạo giá trị cho các món đồ
	double MonDo_1 = 15.59;
	double MonDo_2 = 24.59;
	double MonDo_3 = 6.59;
	double MonDo_4 = 12.59;
	double MonDo_5 = 3.59;

	// Tính tổng tạm tính
	double Tong_TamTinh = MonDo_1 + MonDo_2 + MonDo_3 + MonDo_4 + MonDo_5;

	// Tính tiền thuế
	double TienThue = 0.07 * Tong_TamTinh;

	// Tính tổng phải trả
	double Tong_PhaiTra = Tong_TamTinh + TienThue;

	// Hiển thị kết quả
	cout << Tong_TamTinh << endl;
	cout << TienThue << endl;
	cout << Tong_PhaiTra << endl;

	return 0;
}
