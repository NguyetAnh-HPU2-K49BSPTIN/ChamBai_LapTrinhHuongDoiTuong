#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	double V_VanToc, T_ThoiGian;
	double S_QuangDuong = 0.0;
	cout << "Nhap van toc va thoi gian: ";
	cin >> V_VanToc >> T_ThoiGian;

	// Kiểm tra vận tốc , thời gian > 0
	while (V_VanToc <= 0)
	{
		cout << "Van toc phai lon hon 0, nhap lai !" << endl;
		cin >> V_VanToc;
	}
	while (T_ThoiGian <= 0)
	{
		cout << "Thoi gian phai lon hon 0, nhap lai! " << endl;
		cin >> T_ThoiGian;
	}

	ofstream KQ("Bai_06.txt");
	if(!KQ)
	{
		cout << "Khong mo duoc tep!" << endl;
		return 1;
	}

	KQ << "Quang duong di duoc moi gio la:" << endl;
	for(int i = 1; i <= T_ThoiGian; i++)
	{
		S_QuangDuong = V_VanToc * i;
		KQ << i << "h" << " -> "<< S_QuangDuong << " km" << endl;
	}
	KQ.close();
	return 0;
}
