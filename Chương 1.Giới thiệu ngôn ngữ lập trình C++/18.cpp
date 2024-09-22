#include<iostream>
using namespace std;
int main()
{
	//Tổng số lượng khách hàng
	int SL_KhachHang = 16500;

	//Tỉ lệ % khách hàng mua nước tăng lực mỗi tuần và nước tăng lực vị cam
	double PhanTram_LonHon_1_Nuoc = 0.15;
	double PhanTram_TangLuc_NuocCam = 0.58;

	//SL Khách hàng mua ....
	int SL_KH_LonHon_1_Nuoc = SL_KhachHang * PhanTram_LonHon_1_Nuoc;
	int SL_KH_TangLuc_NuocCam = SL_KhachHang * PhanTram_TangLuc_NuocCam;

	//In
	cout << SL_KH_LonHon_1_Nuoc << endl;
	cout << SL_KH_TangLuc_NuocCam << endl;

	return 0;
}