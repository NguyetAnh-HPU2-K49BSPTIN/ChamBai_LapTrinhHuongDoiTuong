#include <iostream>
using namespace std;

int main()
{
	// Khai báo biến chi phí và tỷ lệ lợi nhuận
	double ChiPhi = 14.95;
	double LoiNhuan = 0.35;

	// Giá bán của bo mạch
	double Gia_BoMach = ChiPhi + (ChiPhi * LoiNhuan);

	// Hiển thị kết quả ra màn hình
	cout  << Gia_BoMach << endl;

	return 0;
}
