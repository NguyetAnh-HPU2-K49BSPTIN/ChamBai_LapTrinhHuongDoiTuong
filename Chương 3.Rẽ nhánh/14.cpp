#include <iostream>
using namespace std;

int main()
{
	double Phi_CoDinh = 10.00;
	int SL_sec;
	double Phi_SuDung_sec = 0.00;
	double SoDu;

	cout << "Nhap so du tai khoan : ";
	cin >> SoDu;
	cout << "Nhap so luong sec: ";
	cin >> SL_sec;

// So du phai lon hon 0
// so sec phai > 0
	if (SoDu < 0 || SL_sec < 0)
	{
		cout << "khong hop le! " << endl;
		return 1;
	}


	if (SL_sec <= 20)
	{
		Phi_SuDung_sec = SL_sec * 0.1;
	}
	else if (SL_sec <= 39)
	{
		Phi_SuDung_sec = SL_sec * 0.08;
	}
	else if (SL_sec <= 59)
	{
		Phi_SuDung_sec = SL_sec * 0.06;
	}
	else
	{
		Phi_SuDung_sec = SL_sec * 0.04;
	}

	double PhiThem ;
	if(SoDu < 400)
	{
		PhiThem = 15.00;
	}
	else
	{
		PhiThem = 0.00;
	}


	double Tong_Cac_ChiPhi = Phi_CoDinh + Phi_SuDung_sec + PhiThem;
	cout << "Tong : " << Tong_Cac_ChiPhi << endl;

	return 0;
}
