#include<iostream>
using namespace std;

//Theo đề bài : hàm 01
	//Hàm này được gọi trong hàm main
	//=> y/c người dùng nhập: số nhân viên của công ty
	//=> hàm này không có tham số
	//==> trả về số nguyên dương do người dùng nhập
int Ham_01()
{
	int SL_NhanVien;
	cout << "Nhap SL nhan vien: ";
	cin >> SL_NhanVien;

	while(SL_NhanVien <= 0)
	{
		cout << "Nhap lai! ";
		cin >> SL_NhanVien;
	}

	return SL_NhanVien;
}

//Theo đề bài : hàm 02
	//Hàm này cũng được gọi trong hàm main
	//=> hàm này có 01 tham số : số nhân viên của công ti
	//==> yêu cầu nhập: số ngày nghỉ của mỗi thành viên
	//===> TRẢ VỀ: tổng số ngày nghỉ của các nhân viên
int Ham_02(int SL_NhanVien)
{
	//Bước 1: khởi tạo giá trị số ngày nghỉ ban đầu là: 0
	int Tong_Ngay_OFF_ALL_NhanVien = 0;
	int SL_NgayNghi_CaNhan;

	for(int i = 1; i <= SL_NhanVien; i++)
	{
		cout << "Ngay nghi cua NhanVien " << i << " la: ";
		cin >> SL_NgayNghi_CaNhan;

		while(SL_NgayNghi_CaNhan < 0)
		{
			cout << "Nhap lai! ";
			cin >> SL_NgayNghi_CaNhan;
		}

		Tong_Ngay_OFF_ALL_NhanVien = Tong_Ngay_OFF_ALL_NhanVien + SL_NgayNghi_CaNhan;

	}
	return Tong_Ngay_OFF_ALL_NhanVien;

}

//Theo đề bài: hàm 03
	//Hàm này cũng được gọi trong hàm main
	//=> hàm có 2 tham số:
		//Số nhân viên && Tổng số giờ nghỉ của nhân viên
	//==> Output: TB số ngày nghỉ của các nhân viên <=> kiểu double
	//===> dùng ép kiểu để trả về KQ chính xác nhâts
double Ham_03(int SL_NhanVien, int Tong_SL_NgayNghi)
{
	//x: TB số ngày nghỉ của các nhân viên
	return static_cast<double>(Tong_SL_NgayNghi) / SL_NhanVien;
}



int main()
{
	int Nhap_SL_NhanVien = Ham_01();
	int Tong_SL_NgayNghi = Ham_02(Nhap_SL_NhanVien);
	int TB_SL_NgayNghi = Ham_03(Nhap_SL_NhanVien, Tong_SL_NgayNghi);

	cout << "TB SL ngay nghi cua NV: " << TB_SL_NgayNghi << endl;
	return 0;


}