#include "iostream"
#include "fstream"
using namespace std;
int main()
{
	int SoNgay;
	int Luong = 1, Tong = 0;

	cout << "Nhap so ngay lam viec: ";
	cin >> SoNgay;

	ofstream NA("Bai_07.txt");
	for(int i = 1; i <= SoNgay; i++)
	{
		Luong = Luong * 2;
		Tong = Tong + Luong;
		NA << "Ngay " << i << "-> " << Luong <<"xu"<< endl;
	}
	NA << "Tong: " << Tong << "xu" << endl;
	NA << "Tong: " << Tong/100.0 <<" dola" << endl;

	NA.close();
	return 0;
}