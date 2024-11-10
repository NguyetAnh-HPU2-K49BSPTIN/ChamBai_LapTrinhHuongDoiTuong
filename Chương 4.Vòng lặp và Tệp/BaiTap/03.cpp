#include "iostream"
#include "fstream"
using namespace std;

int main()
{
	double MucNuoc_Tang_MoiNam = 1.5;
	int SoNam = 25;
	double MucNuoc_Tang_TungNam;

	ofstream NA("Bai_03.txt");
	if(!NA)
	{
		cout << "Khong mo duoc file!" << endl;
		return 1;
	}

	NA << "Muc nuoc bien tang moi nam : " << endl;
	for (int i = 1; i <= SoNam; i++)
	{
		MucNuoc_Tang_TungNam = i * MucNuoc_Tang_MoiNam;
		NA << i << " -> " << MucNuoc_Tang_TungNam << endl;
	}

	NA.close();
	return 0;
}