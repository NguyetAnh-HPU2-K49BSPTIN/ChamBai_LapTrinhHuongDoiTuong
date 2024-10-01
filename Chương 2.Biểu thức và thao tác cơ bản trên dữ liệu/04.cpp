#include<iostream>
using namespace std;

int main()
{
	//Khai bao bien June, July, August theo yêu cầu của bài toán
	//Khai báo biến lưu trữ lượng mua trung bình của 3 tháng trên
	double June, July, August;
	double LuongMua_TB;
	cin >> June >> July >> August;

	//Nhập công thức tính lượng mua TB
	LuongMua_TB = (June + July + August) / 3 ;

	//In ra kết quả
	cout << "Luong mua TB: " << LuongMua_TB << " inches" << endl;
	return 0;
}