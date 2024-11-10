#include<iostream>
using namespace std;

int main()
{
	double A,B;
	cout << " Nhap 2 so A, B : ";
	cin >> A >> B;

	if(A < B)
	{
		cout << "So nho nhat : " << A << endl;
		cout << "So lon nhat : " << B << endl;
	}
	else
	{
		cout << "So lon nhat : " << A << endl;
		cout << "So nho nhat : " << B << endl;
	}
}