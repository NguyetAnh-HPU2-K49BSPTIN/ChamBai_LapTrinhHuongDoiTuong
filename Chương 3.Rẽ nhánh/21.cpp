#include<iostream>
#include<string>
using namespace std;
int main()
{
	string Nhap;

	string Carbon_Dioxide = "Carbon Dioxide";
	string KhongKhi = "Khong khi";
	string Helium = "Helium";
	string Hydro = "Hydro";

	double s_SoGiay;

	cout << " Chon 4 loai khi sau <Carbon Dioxide> , <Khong khi>, <Helium> , <Hydro> : ";
	getline(cin, Nhap);
	cout << endl;

	cout << "Nhap so giay (s) : ";
	cin >> s_SoGiay;

	if(s_SoGiay < 0 || s_SoGiay > 30)
	{
		cout << "Khong hop le! " << endl;

		if(Nhap == Carbon_Dioxide)
		{
			cout << s_SoGiay * 258.0 << endl;
		}
		else if(Nhap == KhongKhi)
		{
			cout << s_SoGiay * 331.5 << endl;
		}
		else if(Nhap == Helium)
		{
			cout << s_SoGiay * 972.2 << endl;
		}
		else if(Nhap == Hydro)
		{
			cout << s_SoGiay * 1270.0 << endl;
		}
	}



	cout << endl;

}