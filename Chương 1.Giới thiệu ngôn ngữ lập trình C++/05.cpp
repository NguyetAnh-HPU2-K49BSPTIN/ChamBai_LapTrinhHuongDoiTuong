#include<iostream>
using namespace std;

int main()
{
	//Khai báo 5 biến tương ứng gán vào 5 giá trị
	int A,B,C,D,E;
	A = 28;
	B = 32;
	C = 37;
	D = 24;
	E = 33;

	//Khai báo biến tong
	int sum;
	sum = A + B + C + D + E;

	//Tinh gia trị trung bình và in ra man hinh
	double GiaTri_TrungBinh_Nguyen;
	double GiaTri_TrungBinh_ThapPhan;
	GiaTri_TrungBinh_Nguyen = sum % 5;
	GiaTri_TrungBinh_ThapPhan = sum /5;

	cout << GiaTri_TrungBinh_Nguyen << "." << GiaTri_TrungBinh_ThapPhan;
	return 0;

}