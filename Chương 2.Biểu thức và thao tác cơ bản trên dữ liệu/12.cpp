#include<iostream>
using namespace std;

int main()
{
	//Cho công thức nhiệt độ F = 1.8*C + 32;
	//* Chuyển đổi độ C thành độ F

	// Khai báo độ C và nhập vào giá trị cuar nó
	double C;
	cin >> C;

	// Khai báo độ F và nhập công thức chuyển đổi cho nó
	double F;
	F = 1.8 * C + 32.0;;

	// In ramàn hình độ F
	cout << F << endl;
}