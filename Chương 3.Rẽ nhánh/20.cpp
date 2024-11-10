#include<iostream>
#include<string>
using namespace std;
int main()
{
	string Nhap;

	string KhongKhi = "KhongKhi";
	string Nuoc = "Nuoc";
	string Thep = "Thep";

	cout << "Chon KhongKhi OR Nuoc OR Thep : " << endl;
	cin >> Nhap;

	if(Nhap == KhongKhi)
	{
		cout << "1.100  " << endl;
	}
	else if(Nhap == Nuoc)
	{
		cout << "4.900 " << endl;
	}
	else if(Nhap == Thep)
	{
		cout << "16.400 " << endl;
	}

	return 0;
}