#include <iostream>
#include <string>
#include <algorithm>
// sử dụng hàm swap

using namespace std;

int main()
{
	string VDV[3];
	double TG[3];


	for (int i = 0; i < 3; i++)
	{
		cout << "Nhap ten VDV va TG " << i + 1 << ": " << endl;
		cin.ignore();
		getline(cin, VDV[i]);

		cin >> TG[i];
		cout << endl;
		if (TG[i] < 0)
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
			if (TG[i] > TG[j])
			{
				swap(TG[i], TG[j]);
				swap(VDV[i], VDV[j]);
			}
		}
	}
// swap tương tự bài 17

	cout << endl;
	cout << "Ket qua xep hang:" << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << "Thu hang " << i + 1 << ": " << TG[i] << "s" << endl;
	}

	return 0;
}
