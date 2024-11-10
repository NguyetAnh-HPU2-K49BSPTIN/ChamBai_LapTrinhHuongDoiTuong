#include<iostream>
#include<string>
using namespace std;

int main()
{
	string Mau_01, Mau_02;

	cout << "Nhap 2 mau trong <red, blue, yellow>: ";
	cin >> Mau_01 >> Mau_02;

	if ((Mau_01 != "red" && Mau_01 != "blue" && Mau_01 != "yellow") ||(Mau_02 != "red" && Mau_02 != "blue" && Mau_02 != "yellow"))
	{
		cout << "Nhap lai!" << endl;
	}
	else
	{
		if ((Mau_01 == "red" && Mau_02 == "blue") || (Mau_01 == "blue" && Mau_02 == "red"))
		{
			cout << "purple" << endl;
		}
		else if ((Mau_01 == "red" && Mau_02 == "yellow") || (Mau_01 == "yellow" && Mau_02 == "red"))
		{
			cout << "orange" << endl;
		}
		else if ((Mau_01 == "blue" && Mau_02 == "yellow") || (Mau_01 == "yellow" && Mau_02 == "blue"))
		{
			cout << "green" << endl;
		}
		else
		{
			cout << "Mau cuc sit" << endl;
		}
	}

	return 0;
}
