#include<iostream>
using namespace std;

//Theo đề bài: 1 hàm duy nhất tính dân số của năm
	//N = P + BP - DP
		//N: DS năm tiếp theo
		//P: DS năm trước
		//B & D: TL sinh và TL tử
int Ham_01(int P_DS_NamTruoc, double B_TL_born, double D_TL_die)
{
	double N_DS_NamTiepTheo = P_DS_NamTruoc + (B_TL_born * P_DS_NamTruoc/100) - (P_DS_NamTruoc * D_TL_die*P_DS_NamTruoc/100);

	return N_DS_NamTiepTheo;
}
int main()
{
	int DanSo, SoNam;
	double TL_Born, TL_Die;

	cout << "Tong DS bat dau, TL sinh, TL tu, SoNam can hien thi: ";
	cin >> DanSo >> TL_Born >> TL_Die >> SoNam;

	//Dan so sau moi nam
	for(int i = 1; i <= SoNam; i++)
	{
		DanSo = Ham_01(DanSo, TL_Born, TL_Die);
		cout << i << ": " << DanSo << endl;
	}

	return 0;
}