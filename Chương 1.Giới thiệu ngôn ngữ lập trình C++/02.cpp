#include<iostream>
using namespace std;

int main()
{
	//Khai báo 2 biến : Doanh thu phòng sale && Doanh thu công ti lần lượt là ....
	double Cost_P_Sale; //float
	double Cost_C_Company; //loat

	//Gán giá trị doanh thu của công ti cho 8.6 (triệu đô)
	Cost_C_Company = 8.6;

	//Giả thiết ban đầu: Doanh thu phòng sale = 56% Doanh thu công ti
	Cost_P_Sale = 0.56 * Cost_C_Company;

	//In ra kết quả : doanh thu của phòng sale
	cout << Cost_P_Sale;

}