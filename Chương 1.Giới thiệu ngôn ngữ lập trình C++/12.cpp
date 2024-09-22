#include <iostream>
using namespace std;

int main()
{
	// Khai báo biến diện tích một mẫu đất và diện tích khu đất
	double MauDat_1 = 43560.00;
	double DienTich_KhuDat = 391876.00;

	// Tính số mẫu đất trên khu đất
	double So_MauDat = DienTich_KhuDat/ MauDat_1;

	// in
	cout << So_MauDat << endl;

	return 0;
}
