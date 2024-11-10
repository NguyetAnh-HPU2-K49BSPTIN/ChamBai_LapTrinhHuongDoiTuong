#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	//Bước 1: Mở file
	ifstream Data_Input_File("BaiTap/00.txt");
	if (!Data_Input_File)
	{
		cout << "Khong mo duoc file! " << endl;
		return 1;
	}
	else
	{
		cout << "Mo FILE thanh cong! " << endl;
	}

	//Bước 2: Khai báo
	int n;
		//Mảng Mang_A chứa n phần tử
	int Mang_A[n];
	int Tong = 0;

	//Bước 3: Đọc giá trị từ dòng đầu tiên
	Data_Input_File >> n;

	//Bước 4: Đọc tiếp n phần tử tiếp theo từ file
		//Đọc tiếp từng số của file vào mảng
	for(int i = 0; i < n; i++)
	{
		Data_Input_File >> Mang_A[i];
	}

	//Bước 5: Đóng file
	Data_Input_File.close();

	//Bước 6: In ra các số vừa đọc ở FILE ra màn hình
	cout << "Cac so doc duoc tu FILE : "<< endl;
	for(int i = 0; i < n; i++)
	{
		cout << Mang_A[i] << " ";
	}
	cout << endl;

	//Bước 7: Tính tổng các số và in ra kết quả
	for(int i = 0; i < n; i++)
	{
		Tong = Tong + Mang_A[i];
	}
	cout << "Tong : " << Tong << endl;

	return 0;

}