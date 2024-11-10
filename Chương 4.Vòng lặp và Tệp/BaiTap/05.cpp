#include "iostream"
#include "fstream"
using namespace std;

int main()
{
	double Phi_HienTai = 2.500;
	double Phi_Tang_MoiNam = 0.04;
	double SoNam_TangPhi = 6.00;
	double Phi_DuKien = Phi_HienTai;

	ofstream NguyetAnh("Bai_05.txt");

	if(!NguyetAnh)
	{
		cout << "Khong mo duoc tep!" << endl;
		return 1;
	}

	NguyetAnh <<"Muc phi du kien : " << endl;
	for(int i = 1; i <= SoNam_TangPhi; i++)
	{
		Phi_DuKien = Phi_HienTai + Phi_DuKien * Phi_Tang_MoiNam;
		NguyetAnh << i << " -> " << Phi_DuKien << endl;
	}

	NguyetAnh.close();
	return 0;
}