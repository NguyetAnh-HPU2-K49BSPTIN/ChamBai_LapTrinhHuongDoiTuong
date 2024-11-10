#include<iostream>
using namespace std;

int main()
{
	double SoPhut;
	cout << "Nhap so phut: ";
	cin >> SoPhut;

	if(SoPhut < 0.00 || SoPhut > 23.59 )
	{
		cout << "Nhap lai! "<< endl;
		return 0;
	}
	cout << "So tien dien thoai: " ;
	if(SoPhut >= 0.00 && SoPhut <= 06.59)
	{
		cout << "0.05" << endl;
	}
	else if(SoPhut >= 07.00 && SoPhut <= 19.00)
	{
		cout << "0.45" << endl;
	}
	else if(SoPhut >= 19.01 && SoPhut <= 23.59)
	{
		cout << "0.20" << endl;
	}

	return 0;
}