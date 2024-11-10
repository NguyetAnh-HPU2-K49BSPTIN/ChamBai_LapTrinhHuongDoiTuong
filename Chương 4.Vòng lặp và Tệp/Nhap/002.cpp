#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	fstream NA;
	NA.open("Nhap//00.txt");
	if(NA.is_open())
	{
		cout << "Mo file thanh cong! ";
	}
	else
	{
		cout << "Khong mo duoc file! ";
	}
	//Ghi file

	NA << "hello wolrd! ";
	cout << "hello wolrd! ";

	return 0;

	//Đọc file
	string BeoBeo;
	getline(NA, BeoBeo);
	getline(cin, BeoBeo);

	cout << BeoBeo;
}