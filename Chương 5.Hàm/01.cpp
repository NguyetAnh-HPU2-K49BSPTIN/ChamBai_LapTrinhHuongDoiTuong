#include<iostream>
using namespace std;
//Theo đề bài: calculateRetail()

double calculateRetail(double GiaBan_Buon, double TL_PhanTram_ChiPhi_BanLe)
{
	double X = GiaBan_Buon + (GiaBan_Buon * (TL_PhanTram_ChiPhi_BanLe/100) );

	return X;
}


int main()
{
	double GiaBan_Buon, TL_PhanTram_ChiPhi_BanLe, GiaBan_Le;

	cout << "Gia ban buon, TL % gia ban le : ";
	cin >> GiaBan_Buon >> TL_PhanTram_ChiPhi_BanLe ;

	//Kieu tra dau vao, neu sai cho nhap lai
	while(GiaBan_Buon < 0 || TL_PhanTram_ChiPhi_BanLe < 0)
	{
		cout << "Khong hop le! Nhap lai! " << endl;
		cin >> GiaBan_Buon >> TL_PhanTram_ChiPhi_BanLe;
	}



	GiaBan_Le = calculateRetail(GiaBan_Buon, TL_PhanTram_ChiPhi_BanLe);
	cout <<"Gia ban le: " << GiaBan_Le<< endl;

	return 0;

}
