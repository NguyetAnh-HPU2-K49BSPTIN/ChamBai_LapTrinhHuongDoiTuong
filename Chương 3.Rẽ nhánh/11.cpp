#include<iostream>
using namespace std;

int main()
{
	int A = rand();
	int B = rand();
	//Ham rand() -> de sinh so ngau nhien ramdom

	cout << A << " + " << B << " = " ;

	int C;
	cin >> C;

	if( A + B == C)
	{
		cout << " Sai roi !" << endl;
	}
	else
	{
		cout << "Ket qua ban nhap khong dung! Nhap lai";
	}
}