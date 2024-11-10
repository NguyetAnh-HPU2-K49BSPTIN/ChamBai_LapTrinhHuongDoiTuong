#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	// Mở và ghi file
	fstream File_NhiPhan;
	File_NhiPhan.open("NhiPhan.dat", ios::out | ios::binary);

	unsigned short x = 8675;

	if (File_NhiPhan)
	{
		File_NhiPhan.write(reinterpret_cast<char*> (&x), sizeof(unsigned short ));
		File_NhiPhan.close();
	}
	else
	{
		cout << "Khong mo duoc file" << endl;
	}


	File_NhiPhan.open("NhiPhan.dat", ios::in | ios::binary);
	if(File_NhiPhan)
	{
		unsigned short y = 0;
		File_NhiPhan.read(reinterpret_cast<char*>(&y), size(unsigned short));
		File_NhiPhan.close();
		cout << y << endl;
	}

	cin.ignore();
	cin.get();

	return 0;

//	// Bước 3: Lưu biến N vào file nhị phân
//	int N;
//
//	BeoBeo.write((char *)&N, sizeof(int));
//
//	cout << "Gia tri doc tu fiel" << " " ;
//	cin >> N;
//
//	BeoBeo.close(); // Đóng file
//	return 0;
}
