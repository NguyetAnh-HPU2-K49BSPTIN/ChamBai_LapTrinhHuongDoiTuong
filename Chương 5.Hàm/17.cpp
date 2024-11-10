#include<iostream>
using namespace std;
//Theo đề bài : bổ sung vào bài 16
	//Thêm số dân chuyển đến và số dân chuyển đi
	// N = P + BP - DP + A - B
		//N: dân số tiếp theo
		//P: dân số năm trước
		//B: TL BORN hằng năm
		//D: TL DIE hằng năm
		//A: SL dân chuyển đến
		//B: SL dân chuyển đi

int Ham_01(int P_DS_NamTruoc, double B_TL_BORN_HangNam, double D_TL_DIE_HangNam, int A_SL_ChuyenDen, int B_SL_ChuyenDi)
{
	double N_DS_TungNam = P_DS_NamTruoc + (P_DS_NamTruoc * B_SL_ChuyenDi / 100) - (P_DS_NamTruoc * D_TL_DIE_HangNam/100) + (A_SL_ChuyenDen - B_SL_ChuyenDi);

	return N_DS_TungNam;
}

int main()
{
	int DanSo, SoNam, SL_Come, SL_Out;
	double TL_BORN, TL_DIE;

	cout << "Tong so dan bat dau + TL_BORN + TL_DIE + SL_Come + SL_Out + SL_Nam: ";
	cin >> DanSo >> TL_BORN >> TL_DIE >> SL_Come >> SL_Out >> SoNam;

	//In
	for(int i = 1; i <= SoNam; i++)
	{
		DanSo = Ham_01(DanSo, TL_BORN, TL_DIE, SL_Come, SL_Out);
		cout << "Dan so sau nam " << i << " : "<< DanSo << endl;

		return 0;
	}
}