#include<iostream>
using namespace std;

int main()
{
	double ChieuDai_HCN_01, ChieuRong_HCN_01, DienTich_HCN_01;
	double ChieuDai_HCN_02, ChieuRong_HCN_02, DienTich_HCN_02;


	cout << " HCN 01 : ";
	cin >> ChieuDai_HCN_01 >> ChieuRong_HCN_01;
	DienTich_HCN_01 = ChieuDai_HCN_01 * ChieuRong_HCN_01;
	cout << "HCN 02 : ";
	cin >> ChieuDai_HCN_02 >> ChieuRong_HCN_02;
	DienTich_HCN_02 = ChieuDai_HCN_02 * ChieuRong_HCN_02;


	cout << "Dien tich HCN 01 = " ;
	cout << DienTich_HCN_01 << endl;
	cout << "Dien tich HCN 02 = " ;
	cout << DienTich_HCN_02 << endl;
	cout << "-------------------------------------------------------------" << endl;

	if(DienTich_HCN_01 > DienTich_HCN_02)
	{
		cout << "Dien tich HCN 01 > dien tich HCN 02" << endl;
	}
	else if(DienTich_HCN_01 < DienTich_HCN_02)
	{
		cout << "Dien tich HCH 01 < diem tich HCN 02" << endl;
	}
	else
	{
		cout << "Dien tich hai HCN - BANG NHAU - " << endl;
	}

}