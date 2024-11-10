#include<iostream>
using namespace std;

int main()
{
	double ChieuCao, CanNang, BMI;
	cout << "Nhap chieu cao(cm) vs can nang(kg) cua ban la bao nhieu: " ;
	cin >> ChieuCao >> CanNang;

	BMI = CanNang / (ChieuCao * ChieuCao);
	cout << "BMI = " << BMI << endl;

	if(BMI > 25)
	{
		cout << "Thua can !" << endl;
	}
	else if(BMI <18.5)
	{
		cout << "Gay !" << endl;
	}
	else
	{
		cout << "Binh thuong !" << endl;
	}
}