#include<iostream>
using namespace std;

int main()
{
	//* Nhập số điểm 5 bài kiểm tra lần tượt là a,b,c,d,e hoặc A1,A2,A3,A4,A5 .... Tùy !!!!
	//* Show điểm trung bình của 5 bài kiểm tra
	// => Tạo biến lưu Tổng 5 số -> nhập công thức tính cho 5 biến;
	// => Lấy tổng điểm của 5 bài : 5 ---> sẽ ra điểm TB;


	//Khai báo kiểu dữ liệu và tên cho 5 biến
	double a_BaiKiemTra;
	double b_BaiKiemTra;
	double c_BaiKiemTra;
	double d_BaiKiemTra;
	double e_BaiKiemTra;
	double TB_abcde;

	//Nhập dữ liệu đầu vào
	cin >> a_BaiKiemTra >> b_BaiKiemTra >> c_BaiKiemTra >> d_BaiKiemTra >> e_BaiKiemTra ;
	//Nhập công thức tính Tổng trung bình
	TB_abcde = (a_BaiKiemTra + b_BaiKiemTra + c_BaiKiemTra + d_BaiKiemTra + e_BaiKiemTra ) / 5;

	//In ra yêu cầu bài toán
	cout << TB_abcde << endl;
}