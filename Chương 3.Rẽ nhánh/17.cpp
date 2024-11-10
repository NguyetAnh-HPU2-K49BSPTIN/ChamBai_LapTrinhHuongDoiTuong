#include <iostream>
#include <string>

using namespace std;

int main()
{
	string VDV[3];
	double TG[3];
	double ChieuCao_Nhay[3];


	for (int i = 0; i < 3; i++)
	{
		cout << "Nhap ten VDV && TG && ChieuCao_Nhay " << i + 1 << ": " << endl;
		cin.ignore();
		getline(cin, VDV[i]);

		cin >> TG[i] >> ChieuCao_Nhay[i];
		cout << endl;
		if (TG[i] < 0 && ChieuCao_Nhay[i] < 2.00 && ChieuCao_Nhay[i] > 5.00)
		{
			cout << "Loi!" << endl;
			return 0;
		}
	}
	cout << endl;


	for (int i = 0; i < 3; i++)
	{
		for (int j = i + 1; j < 3; j++)
		{
			if (ChieuCao_Nhay[i] > ChieuCao_Nhay[j])
			{
				swap(ChieuCao_Nhay[i], ChieuCao_Nhay[j]);
				swap(VDV[i], VDV[j]);
			}
		}
	}
	//swap sử dụng ở đây để hoán đổi vị trí nếu nó thỏa mãn điều kiện nhé ! ^-^


	cout << endl;
	cout << "Ket qua xep hang:" << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << "Thu hang " << i + 1 << ": " << ChieuCao_Nhay[i] << "s" << endl;
	}

	return 0;
}