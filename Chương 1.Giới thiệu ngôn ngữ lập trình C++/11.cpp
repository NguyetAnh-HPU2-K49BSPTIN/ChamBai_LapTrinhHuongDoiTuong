#include<iostream>
using namespace std;

int main()
{
	//Khai bao số lượng xăng được chứa
	double gallons = 20.00;

	//Khai báo sao dặm đi ở mỗi gallon tương ứng với lái xe trong TP vs đường cao tốc
	double gallon_1_TP = 23.50;
	double gallon_1_DuongCaoToc = 28.90;

	//Nhập thông tin cho số quãng đường đi được ở thành phố và đường cao tốc
	double QuangDuong_TP = gallons * gallon_1_TP;
	double QuangDUong_DuongCaoToc = gallons * gallon_1_DuongCaoToc;

	cout << QuangDuong_TP << endl;
	cout << QuangDUong_DuongCaoToc << endl;

	return 0;
}