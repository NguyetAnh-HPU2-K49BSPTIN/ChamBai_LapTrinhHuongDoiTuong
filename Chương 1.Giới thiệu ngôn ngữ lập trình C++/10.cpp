#include<iostream>
using namespace std;

int main()
{
	//Khai báo số gallon xăng đi , và số dặm đi được tương ứng vs số gallon xăng
	int So_gallon_xang = 15;
	int So_dam_15_gallon = 375;

	//Khai bao số dặm đi được trên mỗi gallon
	int So_dam_1_gallon;
	So_dam_1_gallon = So_dam_15_gallon / So_gallon_xang;

	//In ra màn hình
	cout << So_dam_1_gallon << endl;
	return 0;

}