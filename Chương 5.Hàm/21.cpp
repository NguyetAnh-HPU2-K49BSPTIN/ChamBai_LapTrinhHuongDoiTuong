#include<iostream>
using namespace std;

//Ham
double Ham_01(int NS_SoLuong_CoPhan, double SP_COST_1_CoPhan, double SC_HoaHong, double PP_COST_BUY, double PC_HoaHong_BUY)
{
	//Profit = ((NS * SP) – SC) – ((NS * PP) + PC)
	double profit_LoiNhuan = ((NS_SoLuong_CoPhan * SP_COST_1_CoPhan) - SC_HoaHong) - ((NS_SoLuong_CoPhan * PP_COST_BUY) + PC_HoaHong_BUY);

	return profit_LoiNhuan;
}

int main()
{
	int NS;
	double SP,SC,PP,PC;

	cout << "SL_CoPhan + Gia ban + HoaHong ban hang + Gia mua + HoaHog khi mua: ";
	cin >> NS >> SP >> SC >> PP >> PC;

	double KiemTra = Ham_01(NS,SP,SC,PP,PC );
	if(KiemTra > 0)
	{
		cout << "Lai: " << KiemTra << endl;
	}
	else if(KiemTra < 0)
	{
		cout << "Lo: " << KiemTra << endl;
	}
	else
	{
		cout << "Hoa von" << endl;
	}

	return 0;
}