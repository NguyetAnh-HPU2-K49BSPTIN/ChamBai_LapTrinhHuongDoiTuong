#include<iostream>
using namespace std;

int main()
{
	double NhietDo;


	double NhietDo_Dong_Con = -173;
	double NhietDo_Soi_Con = 172;

	double NhietDo_Dong_ThuyNgan = -38;
	double NhietDo_Soi_ThuyNgan = 676;

	double NhietDo_Dong_Oxy = -362;
	double NhietDo_Soi_Oxy = -306;

	double NhietDo_Dong_Nuoc = 32;
	double NhietDo_Soi_Nuoc = 212;

	cout << "Nhap nhiet do (F): ";
	cin >> NhietDo;



	if (NhietDo <= NhietDo_Dong_Con || NhietDo <= NhietDo_Dong_ThuyNgan || NhietDo <= NhietDo_Dong_Oxy || NhietDo <= NhietDo_Dong_Nuoc)
	{
		cout << " dong bang" << endl;
	}
	if (NhietDo >= NhietDo_Soi_Con || NhietDo >= NhietDo_Soi_ThuyNgan || NhietDo >= NhietDo_Soi_Oxy || NhietDo >= NhietDo_Soi_Nuoc)
	{
		cout << " soi" << endl;
	}



	return 0;
}
