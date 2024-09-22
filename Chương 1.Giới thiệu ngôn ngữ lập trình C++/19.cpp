#include <iostream>
using namespace std;

int main()
{
	// Nhiệt độ cao trung bình tháng 7 của các thành phố
	double NhietDo_TB_NewYork = 85;
	double NhietDo_TB_Denver = 88;
	double NhietDo_TB_Phoenix = 106;

	// Tỷ lệ tăng nhiệt độ
	double TL_Tang_NhietDo = 0.02; // 2% = 2/100

	// Nhiệt độ sau khi tăng 2%
	double Moi_NhietDo_TB_NewYork = NhietDo_TB_NewYork * (1 + TL_Tang_NhietDo);
	double Moi_NhietDo_TB_Denver = NhietDo_TB_Denver * (1 + TL_Tang_NhietDo);
	double Moi_NhietDo_TB_Phoenix = NhietDo_TB_Phoenix * (1 + TL_Tang_NhietDo );

	// Hiển thị nhiệt độ mới
	cout << Moi_NhietDo_TB_NewYork << endl;
	cout << Moi_NhietDo_TB_Denver << endl;
	cout << Moi_NhietDo_TB_Phoenix << endl;

	return 0;
}
