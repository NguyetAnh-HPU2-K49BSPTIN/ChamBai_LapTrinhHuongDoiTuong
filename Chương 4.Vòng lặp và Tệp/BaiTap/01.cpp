#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int N_SoNguyen_Duong;
	int S_Tong = 0;

	cout << "Nhap N: " ;
	cin >> N_SoNguyen_Duong;
	while(N_SoNguyen_Duong <= 0)
	{
		cout << "Nhap lai! " << endl;
		cin >> N_SoNguyen_Duong;
	}
	ofstream Out_File("BaiTap.txt");
	Out_File << N_SoNguyen_Duong;
	Out_File.close();

	for(int i = 1; i <= N_SoNguyen_Duong; i++)
	{
		S_Tong = S_Tong + i;
	}
	//Buoc 4: Ghi tong vao tep va hien thi
	ofstream Show_File("Bai_01.txt");
	Show_File << "Tong: " << S_Tong << endl;
	Show_File.close();

	//In ra man hinh
	//Neu khong in ra man hinh thi ket qua chi co trong TEP
	cout << "Tong duoc in ra man hinh : " << S_Tong << endl;
	return 0;
}