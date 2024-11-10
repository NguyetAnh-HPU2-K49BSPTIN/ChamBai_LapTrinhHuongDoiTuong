#include "iostream"
#include "fstream"
using namespace std;

int main()
{
	int SoTang, SoPhong_Tho = 0, SoPhong_SD = 0;

	cout << "So SL tang trong khach san: ";
	cin >> SoTang;

	while(SoTang < 1)
	{
		cout << "Nhap lai! "<< endl;
		cin >> SoTang;
	}

	ofstream NA("Bai_09.txt");
	NA <<"So luong tang: " << SoTang << endl;

	//Vòng lặp mỗi tầng
	int DemTang = 1;
	cout << "Nhap so phong tho: ";
	cin >> SoPhong_Tho;
	cout << "Nhap so phong duoc su dung: ";
	cin >> SoPhong_SD

	while(DemTang <= SoTang)
	{
		if(DemTang == 13)
		{
			cout << "Bo qua tang 13 " << endl;
			DemTang++;
			continue;
		}

		//So phong/ tang
		while(SoPhong_Tho <= 10)
		{
			cout << "Nhap lai so phong tho: ";
			cin >> SoPhong_Tho;
		}

		while(SoPhong_SD)
	}


}
