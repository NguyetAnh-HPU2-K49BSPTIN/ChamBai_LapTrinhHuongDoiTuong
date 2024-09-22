#include "iostream"
using namespace std;
int main()
{
	//Công thức làm 48 chiếc bánh bao gồm:  // 1.5 cốc đường
	// 1 cốc bơ
	// 2.75 cốc bột
	//* Nhập số lượng chiếc bánh muốn làm
	//* Tỉ lệ các thành phần theo công thức đáp ứng để làm số chiếc bánh muốn làm
	//Tỉ lệ số nguyên liệu cho 1 chiếc bánh là:
	//"Đường" vs "Bơ" vs "Bột" ==>  1.5 : 48
	//                         ==>   1 : 48
	//                         ==>  2.75 : 48
	//Tỉ lệ số nguyên liệu cho n chiếc bánh là : Tỉ lệ nguyên liệu cho 1 chiếc bánh * n;
	//Khai báo biến lưu SL: "đường, bơ, bột" trong MỘT chiếc bánh
	double Mot_Duong = 1.5 / 48.00;
	double Mot_Bo = 1.00 / 48.00;
	double Mot_Bot = 2.75 / 48.00;
	//Khai báo biến lưu SL chiếc bánh muốn làm
	double So_Banh_MuonLam;
	cin >> So_Banh_MuonLam;
	//Show: tỉ lệ nguyên liệu  cần cho n chiếc bánh
	cout << Mot_Duong * So_Banh_MuonLam << " " << Mot_Bo * So_Banh_MuonLam << " " << Mot_Bot * So_Banh_MuonLam << endl;
	return 0;
}