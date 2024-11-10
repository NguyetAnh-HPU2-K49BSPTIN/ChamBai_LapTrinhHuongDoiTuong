#include<iostream>
using namespace std;

//Theo đề bài: hàm void getScore():
	//Nhập vào một điểm
	//=> điểm đó được lưu trong biến tham chiếu
	//==> hàm phải kiểm tra tính hợp lệ của điểm trong miền giá trị từ 0 - 100
	//===> gọi nhiều lần từ hàm main để nhập đủ 5 điểm
void getScore(int &Diem)
{
	cout << "Nhap vao diem: ";
	cin >> Diem;
	while(Diem < 0 || Diem > 100)
	{
		cout << "Nhap lai!";
		cin >> Diem;
	}
}

//Theo đề bài: hàm int findLowest():
	//Tham số là 5 đầu điểm cà trả lại giá trị MIN
	//=> hàm này được gọi trong định nghĩa của hàm calcAverage()
	//==> xác định điểm nhỏ nhất trong 5 điểm => LOẠI BỎ nó
int findLowest(int Diem_01, int Diem_02, int Diem_03, int Diem_04, int Diem_05)
{
	int Diem_Min = Diem_01;
	if (Diem_02 < Diem_Min)
	{
		Diem_Min = Diem_02;
	}
	if (Diem_03 < Diem_Min)
	{
		Diem_Min = Diem_03;
	}
	if (Diem_04 < Diem_Min)
	{
		Diem_Min = Diem_04;
	}
	if (Diem_05 < Diem_Min)
	{
		Diem_Min = Diem_05;
	}
	return Diem_Min;
}

//Theo đề bài: hàm void calcAverage():
//Tính và in ra điểm trung bing của 4 đầu điểm cao hơn và được nhập vào
//=> hàm này được gọi một lần ở hàm main
//==> vì thế mình sẽ đẩy hàm findLowest lên làm trước cho việc gọi hàm được đảm bảo
void calcAverage(int Diem_01, int Diem_02, int Diem_03, int Diem_04, int Diem_05)
{
	//Dụaư vào hàm trên để lấy giá trị min
	int Diem_Min = findLowest(Diem_01, Diem_02, Diem_03, Diem_04, Diem_05);
	int Tong_BanDau = Diem_01 + Diem_02 + Diem_03 + Diem_04 + Diem_05;



	// Loại điểm thấp nhất & tính trung bình của 4 điểm
	int Tong_SauDo = Tong_BanDau - Diem_Min;
	double Diem_TB = Tong_SauDo / 4.00;
	cout << "Diem trung binh la: " << Diem_TB << endl;
}

int main()
{
	int Diem_Bai_1, Diem_Bai_2, Diem_Bai_3, Diem_Bai_4, Diem_Bai_5;
	getScore(Diem_Bai_1);
	getScore(Diem_Bai_2);
	getScore(Diem_Bai_3);
	getScore(Diem_Bai_4);
	getScore(Diem_Bai_5);

	//Gọi hàm
	calcAverage(Diem_Bai_1, Diem_Bai_2, Diem_Bai_3, Diem_Bai_4, Diem_Bai_5);
	return 0;
}