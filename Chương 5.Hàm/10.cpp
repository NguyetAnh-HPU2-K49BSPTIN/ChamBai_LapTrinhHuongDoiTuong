#include<iostream>
using namespace std;

//Theo đầu bài: hàm futureValue
	//Số tiền thu được sau t tháng: F = P x (1 + i)^t
		//F: số tiền được nhận trong tương lai
		//P: Số tuền bạn có ban đầu
		//i: lãi suất ngân hàng theo tháng
		//t: số tháng sẽ gửi
double futureValue(double P_Tien_BanDau, double i_LaiNganHang_TheoThang, double t_SoThang_Gui)
{
	//B lãi xuất ban đâu
	double B = 1.0;
	for(int i = 0; i < t_SoThang_Gui; i++)
	{
		B = B * (1 + i);
	}

	return P_Tien_BanDau * B;
}


int main()
{
	double P, i;
	int t;

	cout << "Nhap so tien ban dau (P), lai suat theo thang (i) <=> 1% = 0.01, so thang gui (t) : ";
	cin >> P >> i >> t;

	// Tính giá trị F = P x (1 + i)^t
	double F = futureValue(P, i, t);
	cout << "So tien nhan duoc trong tuong lai (F) la: " << F << endl;

	return 0;
}