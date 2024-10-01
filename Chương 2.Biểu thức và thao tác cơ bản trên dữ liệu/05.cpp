#include<iostream>
using namespace std;

// Nhập số lượng nam và số lượng nữ
int main()
{
	double SL_Nam, SL_Nu;
	cin >> SL_Nam >> SL_Nu;

	int Tong_NamNu = SL_Nam + SL_Nu;

	double TL_Nam = SL_Nam / Tong_NamNu;
	double TL_Nu = SL_Nu / Tong_NamNu;

	cout << "% Nam: " << TL_Nam * 100 << "%" << endl;
	cout << "% Nu: " << TL_Nu * 100 << "%" << endl;

	return 0;
}
