#include <iostream>
#include <string>
using namespace std;

int main()
{
	// Khai báo biến để lưu tên phim
	string Name;

	//Nhập tên phim
	cout << "Nhap ten phim : ";
	getline(cin, Name);

	//Nhập SL vé người lớn, SL vé trẻ em ;
	double SL_NguoiLon, SL_TreEm;
	cout << "Nhap SL nguoi lon, SL tre em: " ;
	cin >> SL_NguoiLon >> SL_TreEm;

	double GiaVeNguoiLon, GiaVe_TreEm;
	GiaVeNguoiLon = 10.00;
	GiaVe_TreEm = 6.00;

	double Tong_DoanhThu;
	Tong_DoanhThu = SL_NguoiLon * GiaVeNguoiLon + SL_TreEm * GiaVe_TreEm;

	double DoanhThu_RapPhim, DoanhThu_NhaPhanPhoi;
	DoanhThu_RapPhim = Tong_DoanhThu * 0.20;
	DoanhThu_NhaPhanPhoi = Tong_DoanhThu - DoanhThu_RapPhim;
	// Hoặc Tong_DoanhThu * 0.80

	cout << "So tien cho phong ve: " << DoanhThu_RapPhim << endl;
	cout << "So tien cho nha phan phoi: " << DoanhThu_NhaPhanPhoi << endl;


	return 0; // Kết thúc chương trình
}
