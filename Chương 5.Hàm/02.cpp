#include<iostream>
using namespace std;
//Theo đề bài : hàm getLength()
	//Nhiệm vụ:
		//Nhập : CD của HCN
		//Kiểu: double
double getLength()
{
	double CD;
	cout << "CD cua HCN: ";
	cin >> CD;

	return CD;
}

//Theo đề bài: hàm getWidth()
	//Nhiệm vụ:
		//Nhập: CR của HCN
		//Kiểu: double
double getWidth()
{
	double CR;
	cout << "CR cua HCN: ";
	cin >> CR;

	return CR;
}

//Theo đề bài: hàm getArea()
	//Nhiệm vụ:
		//Trả về DienTich của HCN từ CD và CR
		//Kiểu: double
double getArea(double CD, double CR)
{
	return CD * CR;
}


//Theo đề bài: hàm displayData()
	//Nhiệm vụ:
		//In ra màn hình : CR, CR và DienTich của HCN
		//Kiểu : void(không kiểu)
void displayData(double CD, double CR, double DienTich_HCN)
{
	cout << "CD, CR: " << CD << " , " << CR << endl;
	cout << "Dien tich HCD: " << DienTich_HCN << endl;
}


int main()
{
	//Bắt buộc : gọi những hàm trên
	double CD = getLength();
	double CR = getWidth();
	double DienTich_HCN = getArea(CD, CR);
	displayData(CD, CR, DienTich_HCN);
}