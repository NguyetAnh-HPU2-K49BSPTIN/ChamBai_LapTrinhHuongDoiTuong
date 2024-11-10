#include<iostream>
using namespace std;

//Theo đề bài: hàm fallingDistance()
	//Trọng lực: 9.8
	//Input: thời gian rơi của vật (t)
	//Output: quãng đường vật rơi (d)
		// d = 1/2 * g * t*t
double fallingDistance(int ThoiGian)
{
	double GiaToc = 9.8;
	double QuangDuong = 0.5 * GiaToc * ThoiGian * ThoiGian;

	return QuangDuong;
}


int main()
{
	for(int t = 1; t <= 10; t++)
	{
		double QuangDuong = fallingDistance(t);
		cout << t << "s => " << QuangDuong << "m" << endl;
	}

	return 0;
}