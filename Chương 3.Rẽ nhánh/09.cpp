#include<iostream>
using namespace std;

int main()
{
	double dola, nickel, dime, quarter;
	cout << "Nhap dola, nickel, dime, quarter: ";
	cin >> dola >> nickel >> dime >> quarter;

	int Tong_cent = dola * 1 + nickel * 5 + dime * 10 + quarter * 35 ;

	if(Tong_cent == 100)
	{
		cout << " 1 dola" << endl;
	}
	else if(Tong_cent > 100)
	{
		cout << " Lon hon 1 dola " << endl;
	}
	else
	{
		cout << "Nho hon 1 dola " << endl;
	}

	return 0;

}