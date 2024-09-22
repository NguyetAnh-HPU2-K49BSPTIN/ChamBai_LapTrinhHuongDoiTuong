#include<iostream>
using namespace std;

int main()
{
	//* Nhập số gallon xăng xe có thể chứa và số dặm đi tương ứng
	//* Show: Số dặm đi được ở mỗi gallon xăng ( 1 gallon xăng)
	//VD 4 gallon xăng --> 20 dặm
	// => 1 dặm = 4 : 20 = 0.2

	//Đầu vào: + Số gallon                         -> nhập từ bàn phím
	//          + Số dặm                           -> nhập từ bàn phím
	//          + Số dặm đi được của mỗi gallon    -> nhập công thức cho máy tự xử lí

	// Khởi tạo 3 biến lưu:  số gallon xăng && số dặm đi được tương ứng && số dặm tương ứng với 1 gallon xăng
	double So_gallon;
	double So_Dam;
	double So_Dam_1gallon;

	//Nhập dữ liệu từ bàn phím
	cin >> So_gallon;
	cin >> So_Dam;

	//Nhập công thức tính
	So_Dam_1gallon = So_gallon / So_Dam;

	//Đầu ra: ta sẽ show kết quả " Số dặm đi được của mỗi gallon "
	cout << So_Dam_1gallon << endl;
	return 0;
}