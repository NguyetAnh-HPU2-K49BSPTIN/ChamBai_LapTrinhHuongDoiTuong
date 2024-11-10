#include<iostream>
using namespace std;

//Hàm 01:
void ChiPhi_Son(int SL_Phong, double COST_HopSon)
{
	double Tong_DienTich = 0;

	for(int i = 1; i <= SL_Phong; i++)
	{
		double DienTich_MoiPhong;
		cout << "Nhap dien tich moi phong: " << i <<": ";
		cin >> DienTich_MoiPhong;

		Tong_DienTich = Tong_DienTich + DienTich_MoiPhong;
	}


	double SL_BinhSon = Tong_DienTich / 110.00;
	double SL_TIME_LamViec = SL_BinhSon * 8.00;

	double COST_TienSon = SL_BinhSon * COST_HopSon;
	double COST_LamViec = SL_TIME_LamViec * 25.00;

	double Tong_COST = COST_TienSon + COST_LamViec;

	//in
	cout <<"SL binh son: " << SL_BinhSon << endl;
	cout <<"SL gio lam viec: " << SL_TIME_LamViec << endl;

	cout << "Gia tien son phai tra: " << COST_TienSon << endl;
	cout << "Tong tien cong: " << COST_LamViec << endl;

	cout << "Tong ALL: " << Tong_COST << endl;

}


int main()
{
	int SL_Phong;
	double Cost_Son;

	cout << "Nhap gia 1 binh son  && SL phong can son:  ";
	cin >> Cost_Son >> SL_Phong;

	ChiPhi_Son(SL_Phong, Cost_Son);

	return 0;
}